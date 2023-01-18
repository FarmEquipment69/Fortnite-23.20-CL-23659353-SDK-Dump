// ScriptStruct /Script/GameplayDebugger.GameplayDebuggerCategoryConfig
// Size: 0x30
struct FGameplayDebuggerCategoryConfig
{
	struct FString CategoryName; // 0x0 (0x10)
	int SlotIdx; // 0x10 (0x4)
	enum EGameplayDebuggerOverrideMode ActiveInGame; // 0x14 (0x1)
	enum EGameplayDebuggerOverrideMode ActiveInSimulate; // 0x15 (0x1)
	enum EGameplayDebuggerOverrideMode Hidden; // 0x16 (0x1)
	unsigned char unreflected_17[0x1]; // 0x17 (0x1) 
	unsigned char bOverrideSlotIdx; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	struct TArray<struct FGameplayDebuggerInputConfig> InputHandlers; // 0x20 (0x10)
};

