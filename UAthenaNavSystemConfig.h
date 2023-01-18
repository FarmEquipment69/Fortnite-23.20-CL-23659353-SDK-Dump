// Class /Script/FortniteAI.AthenaNavSystemConfig
// Size: 0xa0
class UAthenaNavSystemConfig : public UFortNavSystemConfig
{
	struct TArray<struct FNavDataSetVariantSettings> NavDataSetVariants; // 0x60 (0x10)
	unsigned char bUseNavDataSetVariants; // 0x70 (0x1)
	unsigned char bDiscardNavDataFromSublevels; // 0x70 (0x1)
	unsigned char bUseNavigationInvokers; // 0x70 (0x1)
	unsigned char bAllowStaticNavigationInvokerBoxes; // 0x70 (0x1)
	unsigned char bLazyOctree; // 0x70 (0x1)
	unsigned char bUseNavOctTreeInclusionBounds; // 0x70 (0x1)
	unsigned char bPrioritizeNavigationAroundSpawners; // 0x70 (0x1)
	unsigned char bResetDirtyAreasOnInitialBuildingRelease; // 0x70 (0x1)
	unsigned char bSupportRuntimeNavmeshDisabling; // 0x71 (0x1)
	unsigned char bNavOctreeUnlockedByDefaultWhenNotPreloadingNavData; // 0x71 (0x1)
	unsigned char bConfigureDirtyAreaWarningSizeThreshold; // 0x71 (0x1)
	unsigned char unreflected_72[0x2]; // 0x72 (0x2) 
	float DirtyAreaWarningSizeThreshold; // 0x74 (0x4)
	struct TArray<struct FOverriddenSupportedAgentsByReleaseVersion> OverriddenSupportedAgentsByReleaseVersion; // 0x78 (0x10)
	bool bSuspendNavmeshWhenNoPossibleUsers; // 0x88 (0x1)
	unsigned char unreflected_89[0x7]; // 0x89 (0x7) 
	struct TArray<struct FName> AllowedNavBoundsUniqueActorTags; // 0x90 (0x10)
};

