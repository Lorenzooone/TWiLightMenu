#include <nds.h>
#include <fat.h>
#include <stdio.h>
#include <maxmod9.h>

#include "soundbank.h"
//#include "soundbank_bin.h"

#include "common/dsimenusettings.h"
#include "common/systemdetails.h"
#include "common/gl2d.h"

#include "logo_twlmenupp.h"
#include "logo_anniversary.h"
#include "logoPhat_anniversary.h"
#include "block_transparent.h"
#include "icon_nds.h"
#include "icon_gba.h"
#include "iconPhat_gba.h"
#include "icon_gb.h"
#include "icon_nes.h"
#include "icon_sms.h"
#include "icon_gg.h"
#include "icon_md.h"
#include "icon_snes.h"

extern bool useTwlCfg;

extern u16 convertVramColorToGrayscale(u16 val);

static int twlmenuTexID;
static int anniversaryTexID;
static int transparentTexID;
static int ndsTexID;
static int gbaTexID;
static int gbTexID;
static int nesTexID;
static int smsTexID;
static int ggTexID;
static int mdTexID;
static int snesTexID;

static glImage twlmenuText[(128 / 16) * (32 / 16)];
static glImage anniversaryText[1];
static glImage transparentBlock[1];
static glImage ndsIcon[1];
static glImage gbaIcon[1];
static glImage gbIcon[(32 / 32) * (64 / 32)];
static glImage nesIcon[1];
static glImage smsIcon[1];
static glImage ggIcon[1];
static glImage mdIcon[1];
static glImage snesIcon[1];

extern u16 bmpImageBuffer[256*192];
extern u16 videoImageBuffer[39][256*144];

extern u16 convertToDsBmp(u16 val);

extern bool fadeType;
extern bool fadeColor;
extern bool controlTopBright;
static char videoFrameFilename[256];

static FILE* videoFrameFile;

static int blackCoverSize = 32;
static int twilightCurrentLine = 191;
static int menuCurrentLine = 0;
static int textScale = 191*10;
static bool videoDonePlaying = false;
static bool hideTwlMenuTextSprite = false;
static bool changeBgAlpha = false;

static int frameDelaySprite = 0;
static bool frameDelaySpriteEven = true;	// For 24FPS
static bool loadFrameSprite = true;

/*static int anniversaryTextYpos = -14;
static bool anniversaryTextYposMove = false;
static int anniversaryTextYposMoveSpeed = 9;
static int anniversaryTextYposMoveDelay = 0;
static bool anniversaryTextYposMoveDelayEven = true;	// For 24FPS */

static int zoomingIconXpos[9] = {-32, 128, 280, 256, 128, -32, -128, 128, 256+96};
static int zoomingIconYpos[9] = {0, -32, -64, 192+64, 192+128, 192, -96, -168, -240};
static int zoomingIconFade[9] = {31, 31, 31, 31, 31, 31, 31, 31, 31};

void twlMenuVideo_loadTopGraphics(void) {
	u16* newPalette;

	// TWiLight Menu++ text
	glDeleteTextures(1, &twlmenuTexID);
	
	newPalette = (u16*)logo_twlmenuppPal;
	if (ms().colorMode == 1) {
		for (int i2 = 0; i2 < 16; i2++) {
			*(newPalette+i2) = convertVramColorToGrayscale(*(newPalette+i2));
		}
	}
	twlmenuTexID =
	glLoadTileSet(twlmenuText, // pointer to glImage array
				128, // sprite width
				16, // sprite height
				128, // bitmap width
				32, // bitmap height
				GL_RGB16, // texture type for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_128, // sizeX for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_32, // sizeY for glTexImage2D() in videoGL.h
				TEXGEN_OFF | GL_TEXTURE_COLOR0_TRANSPARENT, // param for glTexImage2D() in videoGL.h
				16, // Length of the palette to use (16 colors)
				(u16*) newPalette, // Load our 16 color tiles palette
				(u8*) logo_twlmenuppBitmap // image data generated by GRIT
				);

	// Anniversary
	glDeleteTextures(1, &anniversaryTexID);
	
	newPalette = (u16*)(sys().isDSPhat() ? logoPhat_anniversaryPal : logo_anniversaryPal);
	if (ms().colorMode == 1) {
		for (int i2 = 0; i2 < 16; i2++) {
			*(newPalette+i2) = convertVramColorToGrayscale(*(newPalette+i2));
		}
	}
	anniversaryTexID =
	glLoadTileSet(anniversaryText, // pointer to glImage array
				256, // sprite width
				64, // sprite height
				256, // bitmap width
				64, // bitmap height
				GL_RGB16, // texture type for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_256, // sizeX for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_64, // sizeY for glTexImage2D() in videoGL.h
				TEXGEN_OFF | GL_TEXTURE_COLOR0_TRANSPARENT, // param for glTexImage2D() in videoGL.h
				16, // Length of the palette to use (16 colors)
				(u16*) newPalette, // Load our 16 color tiles palette
				(u8*) (sys().isDSPhat() ? logoPhat_anniversaryBitmap : logo_anniversaryBitmap) // image data generated by GRIT
				);

	// Transparent block (for bar growth)
	glDeleteTextures(1, &transparentTexID);
	
	transparentTexID =
	glLoadTileSet(transparentBlock, // pointer to glImage array
				32, // sprite width
				32, // sprite height
				32, // bitmap width
				32, // bitmap height
				GL_RGB16, // texture type for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_32, // sizeX for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_32, // sizeY for glTexImage2D() in videoGL.h
				TEXGEN_OFF | GL_TEXTURE_COLOR0_TRANSPARENT, // param for glTexImage2D() in videoGL.h
				16, // Length of the palette to use (16 colors)
				(u16*) block_transparentPal, // Load our 2 color tile palette
				(u8*) block_transparentBitmap // image data generated by GRIT
				);

	// NDS
	glDeleteTextures(1, &ndsTexID);
	
	newPalette = (u16*)icon_ndsPal;
	if (ms().colorMode == 1) {
		for (int i2 = 0; i2 < 16; i2++) {
			*(newPalette+i2) = convertVramColorToGrayscale(*(newPalette+i2));
		}
	}
	ndsTexID =
	glLoadTileSet(ndsIcon, // pointer to glImage array
				32, // sprite width
				32, // sprite height
				32, // bitmap width
				32, // bitmap height
				GL_RGB16, // texture type for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_32, // sizeX for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_32, // sizeY for glTexImage2D() in videoGL.h
				TEXGEN_OFF | GL_TEXTURE_COLOR0_TRANSPARENT, // param for glTexImage2D() in videoGL.h
				16, // Length of the palette to use (16 colors)
				(u16*) newPalette, // Load our 16 color tiles palette
				(u8*) icon_ndsBitmap // image data generated by GRIT
				);

	// GBA
	glDeleteTextures(1, &gbaTexID);
	
	newPalette = (u16*)(sys().isDSPhat() ? iconPhat_gbaPal : icon_gbaPal);
	if (ms().colorMode == 1) {
		for (int i2 = 0; i2 < 16; i2++) {
			*(newPalette+i2) = convertVramColorToGrayscale(*(newPalette+i2));
		}
	}
	gbaTexID =
	glLoadTileSet(gbaIcon, // pointer to glImage array
				32, // sprite width
				32, // sprite height
				32, // bitmap width
				32, // bitmap height
				GL_RGB16, // texture type for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_32, // sizeX for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_32, // sizeY for glTexImage2D() in videoGL.h
				TEXGEN_OFF | GL_TEXTURE_COLOR0_TRANSPARENT, // param for glTexImage2D() in videoGL.h
				16, // Length of the palette to use (16 colors)
				(u16*) newPalette, // Load our 16 color tiles palette
				(u8*) (sys().isDSPhat() ? iconPhat_gbaBitmap : icon_gbaBitmap) // image data generated by GRIT
				);

	// GB/GBC
	glDeleteTextures(1, &gbTexID);
	
	newPalette = (u16*)icon_gbPal;
	if (ms().colorMode == 1) {
		for (int i2 = 0; i2 < 16; i2++) {
			*(newPalette+i2) = convertVramColorToGrayscale(*(newPalette+i2));
		}
	}
	gbTexID =
	glLoadTileSet(gbIcon, // pointer to glImage array
				32, // sprite width
				32, // sprite height
				32, // bitmap image width
				64, // bitmap image height
				GL_RGB16, // texture type for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_32, // sizeX for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_64, // sizeY for glTexImage2D() in videoGL.h
				TEXGEN_OFF | GL_TEXTURE_COLOR0_TRANSPARENT,
				16, // Length of the palette to use (16 colors)
				(u16*) newPalette, // Image palette
				(u8*) icon_gbBitmap // Raw image data
				);

	// NES
	glDeleteTextures(1, &nesTexID);

	newPalette = (u16*)icon_nesPal;
	if (ms().colorMode == 1) {
		for (int i2 = 0; i2 < 16; i2++) {
			*(newPalette+i2) = convertVramColorToGrayscale(*(newPalette+i2));
		}
	}
	nesTexID =
	glLoadTileSet(nesIcon, // pointer to glImage array
				32, // sprite width
				32, // sprite height
				32, // bitmap image width
				32, // bitmap image height
				GL_RGB16, // texture type for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_32, // sizeX for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_32, // sizeY for glTexImage2D() in videoGL.h
				TEXGEN_OFF | GL_TEXTURE_COLOR0_TRANSPARENT,
				16, // Length of the palette to use (16 colors)
				(u16*) newPalette, // Image palette
				(u8*) icon_nesBitmap // Raw image data
				);

	// SMS
	glDeleteTextures(1, &smsTexID);
	
	newPalette = (u16*)icon_smsPal;
	if (ms().colorMode == 1) {
		for (int i2 = 0; i2 < 16; i2++) {
			*(newPalette+i2) = convertVramColorToGrayscale(*(newPalette+i2));
		}
	}
	smsTexID =
	glLoadTileSet(smsIcon, // pointer to glImage array
				32, // sprite width
				32, // sprite height
				32, // bitmap image width
				32, // bitmap image height
				GL_RGB16, // texture type for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_32, // sizeX for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_32, // sizeY for glTexImage2D() in videoGL.h
				TEXGEN_OFF | GL_TEXTURE_COLOR0_TRANSPARENT,
				16, // Length of the palette to use (16 colors)
				(u16*) newPalette, // Image palette
				(u8*) icon_smsBitmap // Raw image data
				);

	// GG
	glDeleteTextures(1, &ggTexID);
	
	newPalette = (u16*)icon_ggPal;
	if (ms().colorMode == 1) {
		for (int i2 = 0; i2 < 16; i2++) {
			*(newPalette+i2) = convertVramColorToGrayscale(*(newPalette+i2));
		}
	}
	ggTexID =
	glLoadTileSet(ggIcon, // pointer to glImage array
				32, // sprite width
				32, // sprite height
				32, // bitmap image width
				32, // bitmap image height
				GL_RGB16, // texture type for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_32, // sizeX for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_32, // sizeY for glTexImage2D() in videoGL.h
				TEXGEN_OFF | GL_TEXTURE_COLOR0_TRANSPARENT,
				16, // Length of the palette to use (16 colors)
				(u16*) newPalette, // Image palette
				(u8*) icon_ggBitmap // Raw image data
				);

	// MD
	glDeleteTextures(1, &mdTexID);
	
	newPalette = (u16*)icon_mdPal;
	if (ms().colorMode == 1) {
		for (int i2 = 0; i2 < 16; i2++) {
			*(newPalette+i2) = convertVramColorToGrayscale(*(newPalette+i2));
		}
	}
	mdTexID =
	glLoadTileSet(mdIcon, // pointer to glImage array
				32, // sprite width
				32, // sprite height
				32, // bitmap image width
				32, // bitmap image height
				GL_RGB16, // texture type for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_32, // sizeX for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_32, // sizeY for glTexImage2D() in videoGL.h
				TEXGEN_OFF | GL_TEXTURE_COLOR0_TRANSPARENT,
				16, // Length of the palette to use (16 colors)
				(u16*) newPalette, // Image palette
				(u8*) icon_mdBitmap // Raw image data
				);

	// SNES
	glDeleteTextures(1, &snesTexID);
	
	newPalette = (u16*)icon_snesPal;
	if (ms().colorMode == 1) {
		for (int i2 = 0; i2 < 16; i2++) {
			*(newPalette+i2) = convertVramColorToGrayscale(*(newPalette+i2));
		}
	}
	snesTexID =
	glLoadTileSet(snesIcon, // pointer to glImage array
				32, // sprite width
				32, // sprite height
				32, // bitmap image width
				32, // bitmap image height
				GL_RGB16, // texture type for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_32, // sizeX for glTexImage2D() in videoGL.h
				TEXTURE_SIZE_32, // sizeY for glTexImage2D() in videoGL.h
				TEXGEN_OFF | GL_TEXTURE_COLOR0_TRANSPARENT,
				16, // Length of the palette to use (16 colors)
				(u16*) newPalette, // Image palette
				(u8*) icon_snesBitmap // Raw image data
				);
}

void BootJingleTwlMenu() {
	
	mmInitDefaultMem((mm_addr)0x02FA0000);

	mmLoadEffect( SFX_TWLMENUVIDEO );

	mm_sound_effect twlmenuvideosound = {
		{ SFX_TWLMENUVIDEO } ,	// id
		(int)(1.0f * (1<<10)),	// rate
		0,		// handle
		255,	// volume
		128,	// panning
	};
	
	mmEffectEx(&twlmenuvideosound);
}

void twlMenuVideo_topGraphicRender(void) {
	if (twilightCurrentLine < 0 && menuCurrentLine > 191) {
		videoDonePlaying = true;
	}
	if (videoDonePlaying) {
		if (textScale < 32) {
			textScale -= 2;
			REG_BLDY = 0;
		} else if (textScale < 64) {
			textScale -= 4;
			REG_BLDY = 0;
		} else if (textScale < 96) {
			textScale -= 8;
			REG_BLDY = (0b0001 << 1);
		} else if (textScale < 128) {
			textScale -= 16;
			REG_BLDY = (0b0010 << 1);
		} else if (textScale < 160) {
			textScale -= 24;
			REG_BLDY = (0b0011 << 1);
		} else if (textScale < 192) {
			textScale -= 32;
			REG_BLDY = (0b0011 << 1);
		} else {
			textScale -= 48;
			REG_BLDY = changeBgAlpha ? (0b0100 << 1) : 0;
		}
		if (textScale < 16) textScale = 16;
	} else {
		for (int y = 0; y < 94; y++) {
			dmaCopyWordsAsynch(0, (u16*)videoImageBuffer[0]+(256*twilightCurrentLine), (u16*)BG_GFX+(256*y), 0x200);
			dmaCopyWordsAsynch(1, (u16*)videoImageBuffer[2]+(256*menuCurrentLine), (u16*)BG_GFX+(256*(191-y)), 0x200);
			if (y==93) {
				while (dmaBusy(1));
				dmaCopyWordsAsynch(1, (u16*)videoImageBuffer[2]+(256*menuCurrentLine), (u16*)BG_GFX+(256*(191-y-1)), 0x200);
			}
			while (dmaBusy(0) || dmaBusy(1));
		}
		twilightCurrentLine--;
		menuCurrentLine++;
		blackCoverSize--;
		if (blackCoverSize < -32) blackCoverSize = -32;
	}

	glBegin2D();
	{
		glColor(RGB15(31, 31-(3*ms().blfLevel), 31-(6*ms().blfLevel)));
		//glSprite(0, anniversaryTextYpos, GL_FLIP_NONE, anniversaryText);
		if (videoDonePlaying && !hideTwlMenuTextSprite) {
			glSpriteStretchVertical(68, (78-textScale)+16, textScale, &twlmenuText[0]);
			glSpriteStretchVertical(68, 97, textScale, &twlmenuText[1]);
		}
		if (blackCoverSize > -32) {
			glBoxFilled(0, 0, 256, blackCoverSize, RGB15(0, 0, 0));
			for (int i = -16; i < 256+16; i += 32) {
				glSprite(i, blackCoverSize-16, GL_FLIP_NONE, transparentBlock);
			}
			glBoxFilled(0, 191-blackCoverSize, 256, 192, RGB15(0, 0, 0));
			for (int i = -16; i < 256+16; i += 32) {
				glSprite(i, 191-(blackCoverSize+15), GL_FLIP_NONE, transparentBlock);
			}
		}
		if (zoomingIconYpos[0] < 64) {
			glColor(RGB15(zoomingIconFade[0], zoomingIconFade[0], zoomingIconFade[0]));
			glSprite(zoomingIconXpos[0], zoomingIconYpos[0], GL_FLIP_NONE, nesIcon);
		}
		if (zoomingIconYpos[1] < 64) {
			glColor(RGB15(zoomingIconFade[1], zoomingIconFade[1], zoomingIconFade[1]));
			glSprite(zoomingIconXpos[1], zoomingIconYpos[1], GL_FLIP_NONE, smsIcon);
		}
		if (zoomingIconYpos[2] < 64) {
			glColor(RGB15(zoomingIconFade[2], zoomingIconFade[2], zoomingIconFade[2]));
			glSprite(zoomingIconXpos[2], zoomingIconYpos[2], GL_FLIP_NONE, mdIcon);
		}
		if (zoomingIconYpos[3] > 64+32) {
			glColor(RGB15(zoomingIconFade[3], zoomingIconFade[3], zoomingIconFade[3]));
			glSprite(zoomingIconXpos[3], zoomingIconYpos[3], GL_FLIP_NONE, gbIcon);
		}
		if (zoomingIconYpos[4] > 64+32) {
			glColor(RGB15(zoomingIconFade[4], zoomingIconFade[4], zoomingIconFade[4]));
			glSprite(zoomingIconXpos[4], zoomingIconYpos[4], GL_FLIP_NONE, ggIcon);
		}
		if (zoomingIconYpos[5] > 64+32) {
			glColor(RGB15(zoomingIconFade[5], zoomingIconFade[5], zoomingIconFade[5]));
			glSprite(zoomingIconXpos[5], zoomingIconYpos[5], GL_FLIP_NONE, &gbIcon[1]);
		}
		if (zoomingIconYpos[6] < 64) {
			glColor(RGB15(zoomingIconFade[6], zoomingIconFade[6], zoomingIconFade[6]));
			glSprite(zoomingIconXpos[6], zoomingIconYpos[6], GL_FLIP_NONE, snesIcon);
		}
		if (zoomingIconYpos[7] < 64) {
			glColor(RGB15(zoomingIconFade[7], zoomingIconFade[7], zoomingIconFade[7]));
			glSprite(zoomingIconXpos[7], zoomingIconYpos[7], GL_FLIP_NONE, gbaIcon);
		}
		if (zoomingIconYpos[8] < 64) {
			glColor(RGB15(zoomingIconFade[8], zoomingIconFade[8], zoomingIconFade[8]));
			glSprite(zoomingIconXpos[8], zoomingIconYpos[8], GL_FLIP_NONE, ndsIcon);
		}

		//glBoxFilled(0, 0, 256, 23, RGB15(0, 0, 0));
		//glBoxFilled(0, 168, 256, 192, RGB15(0, 0, 0));
	}
	glEnd2D();
	GFX_FLUSH = 0;

	if (!loadFrameSprite) {
		frameDelaySprite++;
		loadFrameSprite = (frameDelaySprite == 2+frameDelaySpriteEven);
	}

	if (loadFrameSprite) {
		zoomingIconXpos[0] += 5;
		zoomingIconYpos[0] += 4;
		if (zoomingIconYpos[0] > 32) {
			zoomingIconFade[0] -= 4;
			if (zoomingIconFade[0] < 0) zoomingIconFade[0] = 0;
		}

		zoomingIconYpos[1] += 4;
		if (zoomingIconYpos[1] > 32) {
			zoomingIconFade[1] -= 4;
			if (zoomingIconFade[1] < 0) zoomingIconFade[1] = 0;
		}

		zoomingIconXpos[2] -= 4;
		zoomingIconYpos[2] += 4;
		if (zoomingIconYpos[2] > 32) {
			zoomingIconFade[2] -= 4;
			if (zoomingIconFade[2] < 0) zoomingIconFade[2] = 0;
		}

		zoomingIconXpos[3] -= 4;
		zoomingIconYpos[3] -= 4;
		if (zoomingIconYpos[3] < 192-48) {
			zoomingIconFade[3] -= 4;
			if (zoomingIconFade[3] < 0) zoomingIconFade[3] = 0;
		}

		zoomingIconYpos[4] -= 5;
		if (zoomingIconYpos[4] < 192-48) {
			zoomingIconFade[4] -= 4;
			if (zoomingIconFade[4] < 0) zoomingIconFade[4] = 0;
		}

		zoomingIconXpos[5] += 5;
		zoomingIconYpos[5] -= 4;
		if (zoomingIconYpos[5] < 192-48) {
			zoomingIconFade[5] -= 4;
			if (zoomingIconFade[5] < 0) zoomingIconFade[5] = 0;
		}

		zoomingIconXpos[6] += 5;
		zoomingIconYpos[6] += 4;
		if (zoomingIconYpos[6] > 32) {
			zoomingIconFade[6] -= 4;
			if (zoomingIconFade[6] < 0) zoomingIconFade[6] = 0;
		}

		zoomingIconYpos[7] += 5;
		if (zoomingIconYpos[7] > 32) {
			zoomingIconFade[7] -= 4;
			if (zoomingIconFade[7] < 0) zoomingIconFade[7] = 0;
		}

		zoomingIconXpos[8] -= 5;
		zoomingIconYpos[8] += 6;
		if (zoomingIconYpos[8] > 32) {
			zoomingIconFade[8] -= 5;
			if (zoomingIconFade[8] < 0) zoomingIconFade[8] = 0;
		}

		frameDelaySprite = 0;
		frameDelaySpriteEven = !frameDelaySpriteEven;
		loadFrameSprite = false;
	}
	
	/*if (rocketVideo_playVideo && rocketVideo_currentFrame >= 13) {
		if (!anniversaryTextYposMove) {
			anniversaryTextYposMoveDelay++;
			anniversaryTextYposMove = (anniversaryTextYposMoveDelay == 2+anniversaryTextYposMoveDelayEven);
		}

		if (anniversaryTextYposMove && anniversaryTextYpos < 40) {
			anniversaryTextYpos += anniversaryTextYposMoveSpeed;
			anniversaryTextYposMoveSpeed--;
			if (anniversaryTextYposMoveSpeed < 1) anniversaryTextYposMoveSpeed = 1;

			anniversaryTextYposMoveDelay = 0;
			anniversaryTextYposMoveDelayEven = !anniversaryTextYposMoveDelayEven;
			anniversaryTextYposMove = false;
		}
	}*/
}

void twlMenuVideo(void) {
	extern bool twlMenuSplash;
	twlMenuSplash = true;
	//dmaFillHalfWords(0, BG_GFX, 0x18000);

	BootJingleTwlMenu();
	
	char currentDate[16], bgPath[256], logoPath[256];
	time_t Raw;
	time(&Raw);
	const struct tm *Time = localtime(&Raw);

	strftime(currentDate, sizeof(currentDate), "%m/%d", Time);

	if (strcmp(currentDate, "02/14") == 0) {
		// Load pink BG for Valentine's Day
		sprintf(bgPath, "nitro:/graphics/bg_twlmenuppPink.bmp");
		sprintf(logoPath, "nitro:/graphics/logo_twlmenuppPink.bmp");
	} else if (strcmp(currentDate, "04/22") == 0) {
		// Load green BG for Earth Day
		sprintf(bgPath, "nitro:/graphics/bg_twlmenuppGreen.bmp");
		sprintf(logoPath, "nitro:/graphics/logo_twlmenuppGreen.bmp");
	} else {
		// Load normal BG
		sprintf(bgPath, "nitro:/graphics/bg_twlmenupp.bmp");
		sprintf(logoPath, "nitro:/graphics/logo_twlmenupp.bmp");
	}

	for (int i = 0; i < 30; i++) {
		scanKeys();
		if ((keysHeld() & KEY_START) || (keysHeld() & KEY_SELECT) || (keysHeld() & KEY_TOUCH)) return;
		swiWaitForVBlank();
	}

	controlTopBright = false;
	fadeColor = false;
	fadeType = false;

	while (!videoDonePlaying)
	{
		scanKeys();
		if ((keysHeld() & KEY_START) || (keysHeld() & KEY_SELECT) || (keysHeld() & KEY_TOUCH)) return;
		swiWaitForVBlank();
	}
	while (dmaBusy(0) || dmaBusy(1));

	// Load RocketRobz logo
	videoFrameFile = fopen(sys().isDSPhat() ? "nitro:/graphics/logoPhat_rocketrobz.bmp" : "nitro:/graphics/logo_rocketrobz.bmp", "rb");

	if (videoFrameFile) {
		// Start loading
		fseek(videoFrameFile, 0xe, SEEK_SET);
		u8 pixelStart = (u8)fgetc(videoFrameFile) + 0xe;
		fseek(videoFrameFile, pixelStart, SEEK_SET);
		fread(bmpImageBuffer, 2, 0x18000, videoFrameFile);
		u16* src = bmpImageBuffer;
		int x = 0;
		int y = 191;
		for (int i=0; i<256*192; i++) {
			if (x >= 256) {
				x = 0;
				y--;
			}
			u16 val = *(src++);
			BG_GFX_SUB[y*256+x] = convertToDsBmp(val);
			x++;
		}
	}
	fclose(videoFrameFile);

	fadeType = true;
	changeBgAlpha = true;

	// Load TWLMenu++ BG
	videoFrameFile = fopen(bgPath, "rb");

	if (videoFrameFile) {
		// Start loading
		fseek(videoFrameFile, 0xe, SEEK_SET);
		u8 pixelStart = (u8)fgetc(videoFrameFile) + 0xe;
		fseek(videoFrameFile, pixelStart, SEEK_SET);
		fread(bmpImageBuffer, 2, 0x18000, videoFrameFile);
		u16* src = bmpImageBuffer;
		int x = 0;
		int y = 191;
		for (int i=0; i<256*192; i++) {
			if (x >= 256) {
				x = 0;
				y--;
			}
			u16 val = *(src++);
			BG_GFX[y*256+x] = convertToDsBmp(val);
			x++;
		}
	}
	fclose(videoFrameFile);

	while (textScale != 16)
	{
		scanKeys();
		if ((keysHeld() & KEY_START) || (keysHeld() & KEY_SELECT) || (keysHeld() & KEY_TOUCH)) return;
		swiWaitForVBlank();
	}

	// Load TWLMenu++ logo
	videoFrameFile = fopen(logoPath, "rb");

	if (videoFrameFile) {
		// Start loading
		fseek(videoFrameFile, 0xe, SEEK_SET);
		u8 pixelStart = (u8)fgetc(videoFrameFile) + 0xe;
		fseek(videoFrameFile, pixelStart, SEEK_SET);
		fread(bmpImageBuffer, 2, 0x18000, videoFrameFile);
		u16* src = bmpImageBuffer;
		int x = 0;
		int y = 191;
		for (int i=0; i<256*192; i++) {
			if (x >= 256) {
				x = 0;
				y--;
			}
			u16 val = *(src++);
			BG_GFX[y*256+x] = convertToDsBmp(val);
			x++;
		}
	}
	fclose(videoFrameFile);

	hideTwlMenuTextSprite = true;

	// Change TWL letters to user color
	snprintf(videoFrameFilename, sizeof(videoFrameFilename), "nitro:/graphics/TWL_%i.bmp", (int)(useTwlCfg ? *(u8*)0x02000444 : PersonalData->theme));
	videoFrameFile = fopen(videoFrameFilename, "rb");

	if (videoFrameFile) {
		// Start loading
		fseek(videoFrameFile, 0xe, SEEK_SET);
		u8 pixelStart = (u8)fgetc(videoFrameFile) + 0xe;
		fseek(videoFrameFile, pixelStart, SEEK_SET);
		fread(bmpImageBuffer, 2, 0x800, videoFrameFile);
		u16* src = bmpImageBuffer;
		int x = 68;
		int y = 69;
		for (int i=0; i<62*14; i++) {
			if (x >= 130) {
				x = 68;
				y--;
			}
			u16 val = *(src++);
			if (val != 0x7C1F) {
				BG_GFX[(y+24)*256+x] = convertToDsBmp(val);
			}
			x++;
		}
	}
	fclose(videoFrameFile);

	for (int i = 0; i < (60 * 2)+30; i++)
	{
		scanKeys();
		if ((keysHeld() & KEY_START) || (keysHeld() & KEY_SELECT) || (keysHeld() & KEY_TOUCH)) return;
		swiWaitForVBlank();
	}
}