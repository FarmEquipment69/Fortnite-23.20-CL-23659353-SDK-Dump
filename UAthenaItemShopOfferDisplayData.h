// Class /Script/FortniteGame.AthenaItemShopOfferDisplayData
// Size: 0x40
class UAthenaItemShopOfferDisplayData : public UPrimaryDataAsset
{
	struct TArray<class UMaterialInterface*> Presentations; // 0x30 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.AthenaItemShopOfferDisplayData.HasNoPresentations (Underlying native function: HasNoPresentations 0x6ce79dc)
	bool HasNoPresentations(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaItemShopOfferDisplayData.AddPresentation (Underlying native function: AddPresentation 0x80921b0)
	void AddPresentation(class UMaterialInterface*& PresentationToAdd); // (Final | Native | Public | BlueprintCallable)
};

