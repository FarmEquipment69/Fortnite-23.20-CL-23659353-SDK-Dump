// ScriptStruct /Script/GameplayStateMachine.ActiveGameplayStateData
// Size: 0x18
struct FActiveGameplayStateData
{
	class UGameplayState* GameplayState; // 0x0 (0x8)
	struct FGameplayTag PreviousStateId; // 0x8 (0x4)
	float BeginStateDelay; // 0xc (0x4)
	float InitializationTime; // 0x10 (0x4)
	unsigned char padding_14[0x4]; // 0x14 (0x4)
};

