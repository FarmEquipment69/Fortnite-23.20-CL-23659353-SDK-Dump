// ScriptStruct /Script/MassEntity.MassProcessorExecutionOrder
// Size: 0x28
struct FMassProcessorExecutionOrder
{
	struct FName ExecuteInGroup; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FName> ExecuteBefore; // 0x8 (0x10)
	struct TArray<struct FName> ExecuteAfter; // 0x18 (0x10)
};

