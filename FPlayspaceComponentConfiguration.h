// ScriptStruct /Script/PlayspaceSystem.PlayspaceComponentConfiguration
// Size: 0x90
struct FPlayspaceComponentConfiguration
{
	struct TWeakObjectPtr<class UClass> PlayspaceComponentClass; // 0x0 (0x28)
	enum EPlayspaceComponentCreationType CreationType; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct FGameplayTagQuery TagQuery; // 0x30 (0x48)
	struct FVector Location; // 0x78 (0x18)
};

