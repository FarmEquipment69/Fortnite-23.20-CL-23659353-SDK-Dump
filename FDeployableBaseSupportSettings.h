// ScriptStruct /Script/FortniteGame.DeployableBaseSupportSettings
// Size: 0x98
struct FDeployableBaseSupportSettings
{
	bool bUseDeployableBases; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TWeakObjectPtr<class UFortDeployableBaseCloudSaveItemDefinition> DeployableBaseCloudSaveItemDef; // 0x8 (0x28)
	struct TWeakObjectPtr<class UClass> DeployableBasePlot; // 0x30 (0x28)
	struct TWeakObjectPtr<class UFortDeployableBaseSkillTreeUnlocks> SupportedUnlocks; // 0x58 (0x28)
	bool bDeployableBasesReadOnly; // 0x80 (0x1)
	enum EDeployableBaseUseType SupportedUseType; // 0x81 (0x1)
	unsigned char unreflected_82[0x6]; // 0x82 (0x6) 
	struct TArray<class UFortTieredCollectionLayout*> TieredCollectionLayouts; // 0x88 (0x10)
};

