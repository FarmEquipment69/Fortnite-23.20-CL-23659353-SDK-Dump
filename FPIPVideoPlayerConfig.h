// ScriptStruct /Script/PictureInPictureDescriptors.PIPVideoPlayerConfig
// Size: 0x48
struct FPIPVideoPlayerConfig
{
	struct FString mimetype; // 0x0 (0x10)
	struct FString BlurlVUID; // 0x10 (0x10)
	bool bLoopEnabled; // 0x20 (0x1)
	bool bAutoPlay; // 0x21 (0x1)
	unsigned char unreflected_22[0x6]; // 0x22 (0x6) 
	struct FString VideoURL; // 0x28 (0x10)
	bool bShareBlocked; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FDateTime* EventStartTime; // 0x40 (0x8)
};

