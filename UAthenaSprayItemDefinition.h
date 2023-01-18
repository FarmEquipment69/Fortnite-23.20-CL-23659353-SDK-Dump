// Class /Script/FortniteGame.AthenaSprayItemDefinition
// Size: 0xa60
class UAthenaSprayItemDefinition : public UAthenaDanceItemDefinition
{
	struct TWeakObjectPtr<class UMaterialInterface> DecalMaterial; // 0xa08 (0x28)
	struct FName ProgressiveCosmeticStatName; // 0xa30 (0x4)
	bool bUseBannerAsTexture; // 0xa34 (0x1)
	unsigned char unreflected_a35[0x3]; // 0xa35 (0x3) 
	struct TWeakObjectPtr<class UTexture2D> DecalTexture; // 0xa38 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.AthenaSprayItemDefinition.ShouldUseBannerAsTexture (Underlying native function: ShouldUseBannerAsTexture 0x87635c8)
	bool ShouldUseBannerAsTexture(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaSprayItemDefinition.GetDecalTexture (Underlying native function: GetDecalTexture 0x8760664)
	struct TWeakObjectPtr<class UTexture2D> GetDecalTexture(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaSprayItemDefinition.GetDecalMaterial (Underlying native function: GetDecalMaterial 0x876052c)
	struct TWeakObjectPtr<class UMaterialInterface> GetDecalMaterial(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

