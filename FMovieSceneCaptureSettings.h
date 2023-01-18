// ScriptStruct /Script/MovieSceneCapture.MovieSceneCaptureSettings
// Size: 0x70
struct FMovieSceneCaptureSettings
{
	struct FDirectoryPath OutputDirectory; // 0x0 (0x10)
	class UClass* GameModeOverride; // 0x10 (0x8)
	struct FString OutputFormat; // 0x18 (0x10)
	bool bOverwriteExisting; // 0x28 (0x1)
	bool bUseRelativeFrameNumbers; // 0x29 (0x1)
	unsigned char unreflected_2a[0x2]; // 0x2a (0x2) 
	int HandleFrames; // 0x2c (0x4)
	struct FString MovieExtension; // 0x30 (0x10)
	unsigned char ZeroPadFrameNumbers; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	struct FFrameRate* FrameRate; // 0x44 (0x8)
	bool bUseCustomFrameRate; // 0x4c (0x1)
	unsigned char unreflected_4d[0x3]; // 0x4d (0x3) 
	struct FFrameRate* CustomFrameRate; // 0x50 (0x8)
	struct FCaptureResolution* Resolution; // 0x58 (0x8)
	bool bEnableTextureStreaming; // 0x60 (0x1)
	bool bCinematicEngineScalability; // 0x61 (0x1)
	bool bCinematicMode; // 0x62 (0x1)
	bool bAllowMovement; // 0x63 (0x1)
	bool bAllowTurning; // 0x64 (0x1)
	bool bShowPlayer; // 0x65 (0x1)
	bool bShowHUD; // 0x66 (0x1)
	bool bUsePathTracer; // 0x67 (0x1)
	int PathTracerSamplePerPixel; // 0x68 (0x4)
	unsigned char padding_6c[0x4]; // 0x6c (0x4)
};

