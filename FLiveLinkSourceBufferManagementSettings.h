// ScriptStruct /Script/LiveLinkInterface.LiveLinkSourceBufferManagementSettings
// Size: 0x60
struct FLiveLinkSourceBufferManagementSettings
{
	bool bValidEngineTimeEnabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float ValidEngineTime; // 0x4 (0x4)
	float EngineTimeOffset; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	double EngineTimeClockOffset; // 0x10 (0x8)
	double SmoothEngineTimeOffset; // 0x18 (0x8)
	bool bGenerateSubFrame; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	struct FFrameRate* DetectedFrameRate; // 0x24 (0x8)
	bool bUseTimecodeSmoothLatest; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	struct FFrameRate* SourceTimecodeFrameRate; // 0x30 (0x8)
	bool bValidTimecodeFrameEnabled; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	int ValidTimecodeFrame; // 0x3c (0x4)
	float TimecodeFrameOffset; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	double TimecodeClockOffset; // 0x48 (0x8)
	int LatestOffset; // 0x50 (0x4)
	int MaxNumberOfFrameToBuffered; // 0x54 (0x4)
	bool bKeepAtLeastOneFrame; // 0x58 (0x1)
	unsigned char padding_59[0x7]; // 0x59 (0x7)
};

