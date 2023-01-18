// Class /Script/MantisRuntime.FortMantisData
// Size: 0x70
class UFortMantisData : public UDataAsset
{
	bool bShowTargetHealthBar; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	class UClass* TechniqueAbility; // 0x38 (0x8)
	struct TArray<struct FFortGameplayEffectContainer> TechniqueAdditionEffectContainers; // 0x40 (0x10)
	struct TArray<struct FFortMantisTechniqueData> Techniques; // 0x50 (0x10)
	struct TArray<struct FFortMantisTechniqueBranch> Branches; // 0x60 (0x10)
};

