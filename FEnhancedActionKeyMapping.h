// ScriptStruct /Script/EnhancedInput.EnhancedActionKeyMapping
// Size: 0x98
struct FEnhancedActionKeyMapping
{
	struct FPlayerMappableKeyOptions PlayerMappableOptions; // 0x0 (0x40)
	struct TArray<class UInputTrigger*> Triggers; // 0x40 (0x10)
	struct TArray<class UInputModifier*> Modifiers; // 0x50 (0x10)
	class UInputAction* Action; // 0x60 (0x8)
	struct FKey Key; // 0x68 (0x18)
	unsigned char bShouldBeIgnored; // 0x80 (0x1)
	enum EPlayerMappableKeySettingBehaviors SettingBehavior; // 0x81 (0x1)
	unsigned char unreflected_82[0x6]; // 0x82 (0x6) 
	class UPlayerMappableKeySettings* PlayerMappableKeySettings; // 0x88 (0x8)
	unsigned char bIsPlayerMappable; // 0x90 (0x1)
	unsigned char padding_91[0x7]; // 0x91 (0x7)
};

