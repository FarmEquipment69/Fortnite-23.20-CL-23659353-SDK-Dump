// Class /Script/FortniteGame.FortGameFeatureAction_InputData
// Size: 0xa0
class UFortGameFeatureAction_InputData : public UGameFeatureAction
{
	enum EKeyboardMouseKeybindingsAtRegistrationTime KeyboardMouseKeybindingsRegistrationTime; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct TMap<struct FGameplayTag, struct FFortGameFeatureKeyboardMouseKeybindArray> KeyboardMouseKeybinds; // 0x30 (0x50)
	bool bIgnoreWhenEnhancedInputSettingsOn; // 0x80 (0x1)
	unsigned char padding_81[0x1f]; // 0x81 (0x1f)
};

