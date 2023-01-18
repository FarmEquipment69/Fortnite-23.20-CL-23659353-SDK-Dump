// ScriptStruct /Script/ScoutDroneRuntime.ScoutDroneInputTriggerableEvent
// Size: 0x18
struct FScoutDroneInputTriggerableEvent
{
	struct FName InputActionName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class UInputAction* InputAction; // 0x8 (0x8)
	struct FGameplayTag GameplayEventToTrigger; // 0x10 (0x4)
	unsigned char padding_14[0x4]; // 0x14 (0x4)
};

