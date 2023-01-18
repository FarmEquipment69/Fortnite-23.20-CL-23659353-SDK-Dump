// ScriptStruct /Script/EnhancedInput.InputActionInstance
// Size: 0x60
struct FInputActionInstance
{
	class UInputAction* SourceAction; // 0x0 (0x8)
	unsigned char unreflected_8[0xb]; // 0x8 (0xb) 
	enum ETriggerEvent TriggerEvent; // 0x13 (0x1)
	float LastTriggeredWorldTime; // 0x14 (0x4)
	struct TArray<class UInputTrigger*> Triggers; // 0x18 (0x10)
	struct TArray<class UInputModifier*> Modifiers; // 0x28 (0x10)
	unsigned char unreflected_38[0x20]; // 0x38 (0x20) 
	float ElapsedProcessedTime; // 0x58 (0x4)
	float ElapsedTriggeredTime; // 0x5c (0x4)
};

