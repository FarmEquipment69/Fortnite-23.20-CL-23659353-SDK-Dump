// ScriptStruct /Script/Engine.NavDataConfig
// Size: 0x80
struct FNavDataConfig : FNavAgentProperties
{
	struct FName Name; // 0x30 (0x4)
	struct FColor Color; // 0x34 (0x4)
	struct FVector DefaultQueryExtent; // 0x38 (0x18)
	class UClass* NavigationDataClass; // 0x50 (0x8)
	struct TWeakObjectPtr<class UClass> NavDataClass; // 0x58 (0x28)
};

