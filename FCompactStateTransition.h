// ScriptStruct /Script/StateTreeModule.CompactStateTransition
// Size: 0xc
struct FCompactStateTransition
{
	struct FGameplayTag EventTag; // 0x0 (0x4)
	uint16_t ConditionsBegin; // 0x4 (0x2)
	struct FStateTreeStateHandle State; // 0x6 (0x2)
	enum EStateTreeTransitionType Type; // 0x8 (0x1)
	enum EStateTreeTransitionTrigger Trigger; // 0x9 (0x1)
	unsigned char GateDelay; // 0xa (0x1)
	unsigned char ConditionsNum; // 0xb (0x1)
};

