// ScriptStruct /Script/FortniteUI.FortErrorInfo
// Size: 0x70
struct FFortErrorInfo
{
	struct FText Operation; // 0x0 (0x18)
	struct FText ErrorMessage; // 0x18 (0x18)
	struct FString ErrorCode; // 0x30 (0x10)
	enum EFortErrorSeverity ErrorSeverity; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	struct FText ContinueButtonText; // 0x48 (0x18)
	unsigned char padding_60[0x10]; // 0x60 (0x10)
};

