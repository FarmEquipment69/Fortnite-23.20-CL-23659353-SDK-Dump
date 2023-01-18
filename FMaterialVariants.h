// ScriptStruct /Script/FortniteGame.MaterialVariants
// Size: 0x60
struct FMaterialVariants
{
	struct TWeakObjectPtr<class UMaterialInterface> MaterialToSwap; // 0x0 (0x28)
	struct FName ComponentToOverride; // 0x28 (0x4)
	struct FName CascadeMaterialName; // 0x2c (0x4)
	int MaterialOverrideIndex; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct TWeakObjectPtr<class UMaterialInterface> OverrideMaterial; // 0x38 (0x28)
};

