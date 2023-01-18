// ScriptStruct /Script/FortniteGameFramework.StateChangeDataArray
// Size: 0x120
struct FStateChangeDataArray : FFastArraySerializer
{
	struct TArray<struct FStateChangeData> StateChangeDataList; // 0x108 (0x10)
	class UStateTreeManagerComponent* StateTreeManagerComponent; // 0x118 (0x8)
};

