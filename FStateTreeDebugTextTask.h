// ScriptStruct /Script/StateTreeModule.StateTreeDebugTextTask
// Size: 0x58
struct FStateTreeDebugTextTask : FStateTreeTaskCommonBase
{
	struct FString Text; // 0x20 (0x10)
	struct FColor TextColor; // 0x30 (0x4)
	float FontScale; // 0x34 (0x4)
	struct FVector Offset; // 0x38 (0x18)
	bool bEnabled; // 0x50 (0x1)
	unsigned char padding_51[0x7]; // 0x51 (0x7)
};

