// ScriptStruct /Script/DataDrivenGameplayEventRouter.GameplayEventDefinition
// Size: 0x10
struct FGameplayEventDefinition
{
	class UScriptStruct* EventType; // 0x0 (0x8)
	bool bIsStateful; // 0x8 (0x1)
	enum EGameplayEventNetPolicy NetPolicy; // 0x9 (0x1)
	unsigned char padding_a[0x6]; // 0xa (0x6)
};

