// ScriptStruct /Script/GameplayStateMachine.GameplayStateSettings
// Size: 0x20
struct FGameplayStateSettings
{
	class UClass* StateClass; // 0x0 (0x8)
	struct FGameplayTag StateId; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct TArray<struct FGameplayStateTransition> StateTransitions; // 0x10 (0x10)
};

