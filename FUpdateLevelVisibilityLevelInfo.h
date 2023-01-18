// ScriptStruct /Script/Engine.UpdateLevelVisibilityLevelInfo
// Size: 0x10
struct FUpdateLevelVisibilityLevelInfo
{
	struct FName PackageName; // 0x0 (0x4)
	struct FName Filename; // 0x4 (0x4)
	struct FNetLevelVisibilityTransactionId VisibilityRequestId; // 0x8 (0x4)
	unsigned char bIsVisible; // 0xc (0x1)
	unsigned char bTryMakeVisible; // 0xc (0x1)
	unsigned char padding_d[0x3]; // 0xd (0x3)
};

