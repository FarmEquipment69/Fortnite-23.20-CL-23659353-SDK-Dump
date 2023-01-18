// ScriptStruct /Script/ContextualAnimation.ContextualAnimSceneSection
// Size: 0x78
struct FContextualAnimSceneSection
{
	struct FName Name; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FContextualAnimSet> AnimSets; // 0x8 (0x10)
	struct TMap<struct FName, struct FContextualAnimIKTargetDefContainer> RoleToIKTargetDefsMap; // 0x18 (0x50)
	struct TArray<struct FContextualAnimSetPivotDefinition> AnimSetPivotDefinitions; // 0x68 (0x10)
};

