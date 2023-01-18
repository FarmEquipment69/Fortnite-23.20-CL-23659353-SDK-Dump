// Class /Script/Engine.HierarchicalInstancedStaticMeshComponent
// Size: 0x8e0
class UHierarchicalInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
	unsigned char unreflected_750[0x8]; // 0x750 (0x8) 
	unsigned char bUseTranslatedInstanceSpace; // 0x758 (0x1)
	unsigned char unreflected_759[0x7]; // 0x759 (0x7) 
	struct FVector TranslatedInstanceSpaceOrigin; // 0x760 (0x18)
	struct TArray<int> SortedInstances; // 0x778 (0x10)
	int NumBuiltInstances; // 0x788 (0x4)
	unsigned char unreflected_78c[0x4]; // 0x78c (0x4) 
	struct FBox BuiltInstanceBounds; // 0x790 (0x38)
	struct FBox UnbuiltInstanceBounds; // 0x7c8 (0x38)
	struct TArray<struct FBox> UnbuiltInstanceBoundsList; // 0x800 (0x10)
	unsigned char bEnableDensityScaling; // 0x810 (0x1)
	unsigned char unreflected_811[0x7]; // 0x811 (0x7) 
	int OcclusionLayerNumNodes; // 0x818 (0x4)
	unsigned char unreflected_81c[0x4]; // 0x81c (0x4) 
	struct FBoxSphereBounds CacheMeshExtendedBounds; // 0x820 (0x38)
	bool bDisableCollision; // 0x858 (0x1)
	unsigned char unreflected_859[0x3]; // 0x859 (0x3) 
	int InstanceCountToRender; // 0x85c (0x4)
	unsigned char padding_860[0x80]; // 0x860 (0x80)
};

