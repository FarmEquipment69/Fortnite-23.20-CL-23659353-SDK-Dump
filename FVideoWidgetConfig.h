// ScriptStruct /Script/FortniteUI.VideoWidgetConfig
// Size: 0x98
struct FVideoWidgetConfig
{
	class UFortStreamMediaSource* StreamingMediaSource; // 0x0 (0x8)
	struct FName VideoString; // 0x8 (0x4)
	struct FName VideoDisplayDataID; // 0xc (0x4)
	struct FName FallbackVideoID; // 0x10 (0x4)
	bool bCheckAutoPlay; // 0x14 (0x1)
	bool bForceAutoPlay; // 0x15 (0x1)
	bool bStreamingEnabled; // 0x16 (0x1)
	unsigned char unreflected_17[0x1]; // 0x17 (0x1) 
	struct FString VideoUID; // 0x18 (0x10)
	bool bShouldBeModal; // 0x28 (0x1)
	bool bUseSkipBoundaries; // 0x29 (0x1)
	bool bHoldToSkip; // 0x2a (0x1)
	bool bFadeFromColor; // 0x2b (0x1)
	bool bEndFadeFromColor; // 0x2c (0x1)
	bool bFadeUpToColor; // 0x2d (0x1)
	bool bAllowSkipping; // 0x2e (0x1)
	unsigned char unreflected_2f[0x1]; // 0x2f (0x1) 
	struct FString mimetype; // 0x30 (0x10)
	struct FString VideoURL; // 0x40 (0x10)
	bool bEnableLooping; // 0x50 (0x1)
	bool bAutoClose; // 0x51 (0x1)
	bool bHideControls; // 0x52 (0x1)
	bool bHideBackground; // 0x53 (0x1)
	bool bHideBackgroundUntilVideoDetected; // 0x54 (0x1)
	bool bStartMTTransparent; // 0x55 (0x1)
	unsigned char unreflected_56[0x2]; // 0x56 (0x2) 
	class USoundMix* SoundMixOverride; // 0x58 (0x8)
	bool bOverrideSoundMix; // 0x60 (0x1)
	unsigned char unreflected_61[0x7]; // 0x61 (0x7) 
	class USoundClass* SoundClassOverride; // 0x68 (0x8)
	bool bControlWorldRendering; // 0x70 (0x1)
	bool bControlShaderPipelineCacheBatching; // 0x71 (0x1)
	bool bDisablePiP; // 0x72 (0x1)
	unsigned char unreflected_73[0x1]; // 0x73 (0x1) 
	float PartySyncStartTime; // 0x74 (0x4)
	bool bDisableCursor; // 0x78 (0x1)
	bool bDisableStreamLimitsFromWidget; // 0x79 (0x1)
	bool bStartHidden; // 0x7a (0x1)
	bool bAudioOnlyHandlingFromMetadata; // 0x7b (0x1)
	bool bTreatAudioOnlyAsColorFades; // 0x7c (0x1)
	bool bEnableDebugCommands; // 0x7d (0x1)
	unsigned char unreflected_7e[0x2]; // 0x7e (0x2) 
	struct FLinearColor FadeColor; // 0x80 (0x10)
	bool bPrePostRollNoAudioMix; // 0x90 (0x1)
	unsigned char padding_91[0x7]; // 0x91 (0x7)
};
