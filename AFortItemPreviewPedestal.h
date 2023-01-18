// Class /Script/FortniteUI.FortItemPreviewPedestal
// Size: 0x4e8
class AFortItemPreviewPedestal : public AFortItemPlacementActor
{
	unsigned char unreflected_478[0x8]; // 0x478 (0x8) 
	struct TWeakObjectPtr<class APlayerController> ContextualPlayerController; // 0x480 (0x8)
	class UFortHero* TemporaryHeroInstance; // 0x488 (0x8)
	struct TArray<class UCustomCharacterPart*> AdditionalCharacterParts; // 0x490 (0x10)
	unsigned char unreflected_4a0[0x28]; // 0x4a0 (0x28) 
	class USceneComponent* WeaponPlacementComponent; // 0x4c8 (0x8)
	class UChildActorComponent* PreviewActorComponent; // 0x4d0 (0x8)
	class UStaticMeshComponent* PreviewStaticMeshComponent; // 0x4d8 (0x8)
	class USkeletalMeshComponent* PreviewSkelMeshComponent; // 0x4e0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortItemPreviewPedestal.PreviewItemBP (Underlying native function: PreviewItemBP 0xa73d7bc)
	void PreviewItemBP(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemPreviewPedestal.ClearDisplay (Underlying native function: ClearDisplay 0xa73be8c)
	void ClearDisplay(); // (Final | Native | Public | BlueprintCallable)
};

