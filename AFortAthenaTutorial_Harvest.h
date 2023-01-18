// Class /Script/FortniteGame.FortAthenaTutorial_Harvest
// Size: 0x340
class AFortAthenaTutorial_Harvest : public AFortAthenaTutorialBase
{
	class AFortAthenaTutorialMarker* HarvestMarker; // 0x2f0 (0x8)
	float DoorTargetAppearDelay; // 0x2f8 (0x4)
	unsigned char unreflected_2fc[0x4]; // 0x2fc (0x4) 
	class AActor* DoorTargetVisual; // 0x300 (0x8)
	class ATriggerBox* HarvestTriggerBox; // 0x308 (0x8)
	class AFortStaticMeshActor* BlockerHarvest; // 0x310 (0x8)
	struct FGameplayTagContainer HarvestHUDElementTags; // 0x318 (0x20)
	class ABuildingProp* BuildingToDestroy; // 0x338 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaTutorial_Harvest.OnBuildingDestroyed (Underlying native function: OnBuildingDestroyed 0x856e44c)
	void OnBuildingDestroyed(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaTutorial_Harvest.OnBeginOverlapHarvestTriggerBox (Underlying native function: OnBeginOverlapHarvestTriggerBox 0x856e078)
	void OnBeginOverlapHarvestTriggerBox(class AActor*& OverlappedActor, class AActor*& OtherActor); // (Final | Native | Private)
};

