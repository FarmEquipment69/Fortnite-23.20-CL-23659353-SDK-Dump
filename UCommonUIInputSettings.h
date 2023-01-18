// Class /Script/CommonUI.CommonUIInputSettings
// Size: 0x78
class UCommonUIInputSettings : public UObject
{
	bool bLinkCursorToGamepadFocus; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	int UIActionProcessingPriority; // 0x2c (0x4)
	struct TArray<struct FUIInputAction> InputActions; // 0x30 (0x10)
	struct TArray<struct FUIInputAction> ActionOverrides; // 0x40 (0x10)
	struct FCommonAnalogCursorSettings AnalogCursorSettings; // 0x50 (0x24)
	unsigned char padding_74[0x4]; // 0x74 (0x4)
};

