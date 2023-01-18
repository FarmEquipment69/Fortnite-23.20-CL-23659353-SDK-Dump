// ScriptStruct /Script/FortniteGame.FortGameFeatureKeyboardMouseKeybindInfo
// Size: 0x40
struct FFortGameFeatureKeyboardMouseKeybindInfo
{
	struct FName ActionName; // 0x0 (0x4)
	enum EFortInputActionGroup ActionGroup; // 0x4 (0x1)
	enum ESubGame SubGameUsedIn; // 0x5 (0x1)
	unsigned char unreflected_6[0x2]; // 0x6 (0x2) 
	struct FText LocalizedCategory; // 0x8 (0x18)
	struct FText LocalizedName; // 0x20 (0x18)
	bool bIsAxisMapping; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	float AxisInputScale; // 0x3c (0x4)
};

