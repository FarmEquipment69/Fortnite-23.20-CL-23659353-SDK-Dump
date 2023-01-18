// Class /Script/EnhancedInput.InputAction
// Size: 0x78
class UInputAction : public UDataAsset
{
	struct FText ActionDescription; // 0x30 (0x18)
	bool bConsumeInput; // 0x48 (0x1)
	bool bTriggerWhenPaused; // 0x49 (0x1)
	bool bReserveAllMappings; // 0x4a (0x1)
	enum EInputActionValueType ValueType; // 0x4b (0x1)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct TArray<class UInputTrigger*> Triggers; // 0x50 (0x10)
	struct TArray<class UInputModifier*> Modifiers; // 0x60 (0x10)
	class UPlayerMappableKeySettings* PlayerMappableKeySettings; // 0x70 (0x8)
};

