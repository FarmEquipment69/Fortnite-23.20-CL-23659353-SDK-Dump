// ScriptStruct /Script/Engine.HierarchicalSimplification
// Size: 0x2d0
struct FHierarchicalSimplification
{
	float TransitionScreenSize; // 0x0 (0x4)
	float OverrideDrawDistance; // 0x4 (0x4)
	unsigned char bUseOverrideDrawDistance; // 0x8 (0x1)
	unsigned char bAllowSpecificExclusion; // 0x8 (0x1)
	unsigned char bOnlyGenerateClustersForVolumes; // 0x8 (0x1)
	unsigned char bReusePreviousLevelClusters; // 0x8 (0x1)
	enum EHierarchicalSimplificationMethod SimplificationMethod; // 0x9 (0x1)
	unsigned char unreflected_a[0x2]; // 0xa (0x2) 
	struct FMeshProxySettings ProxySetting; // 0xc (0xd0)
	struct FMeshMergingSettings MergeSetting; // 0xdc (0xd0)
	struct FMeshApproximationSettings ApproximateSettings; // 0x1ac (0x118)
	float DesiredBoundRadius; // 0x2c4 (0x4)
	float DesiredFillingPercentage; // 0x2c8 (0x4)
	int MinNumberOfActorsToBuild; // 0x2cc (0x4)
};

