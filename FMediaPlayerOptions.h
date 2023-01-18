// ScriptStruct /Script/MediaUtils.MediaPlayerOptions
// Size: 0x30
struct FMediaPlayerOptions
{
	struct FMediaPlayerTrackOptions Tracks; // 0x0 (0x1c)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FTimespan* SeekTime; // 0x20 (0x8)
	enum EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28 (0x1)
	enum EMediaPlayerOptionBooleanOverride Loop; // 0x29 (0x1)
	unsigned char padding_2a[0x6]; // 0x2a (0x6)
};

