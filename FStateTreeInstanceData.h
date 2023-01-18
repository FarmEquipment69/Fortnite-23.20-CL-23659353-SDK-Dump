// ScriptStruct /Script/StateTreeModule.StateTreeInstanceData
// Size: 0x30
struct FStateTreeInstanceData
{
	struct FInstancedStructArray InstanceStructs; // 0x0 (0x10)
	struct TArray<class UObject*> InstanceObjects; // 0x10 (0x10)
	struct FStateTreeEventQueue EventQueue; // 0x20 (0x10)
};

