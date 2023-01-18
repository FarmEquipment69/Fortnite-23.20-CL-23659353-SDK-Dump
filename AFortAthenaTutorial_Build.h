// Class /Script/FortniteGame.FortAthenaTutorial_Build
// Size: 0x3a0
class AFortAthenaTutorial_Build : public AFortAthenaTutorialBase
{
	class AActor* Chest; // 0x2f0 (0x8)
	class AFortAthenaTutorialMarker* ChestObjectiveMarker; // 0x2f8 (0x8)
	class AActor* ChestLookMarker; // 0x300 (0x8)
	class AActor* BuildMarker; // 0x308 (0x8)
	class AActor* BuildMarker2; // 0x310 (0x8)
	class ATriggerBox* ChestTriggerBox; // 0x318 (0x8)
	class AFortAthenaTutorialMarker* ChestDirectionArrows; // 0x320 (0x8)
	class AActor* SecurityTapeBuild; // 0x328 (0x8)
	class ABlockingVolume* BuildingBlockingVolume; // 0x330 (0x8)
	class UFortItemDefinition* StairsBuildingItemDef; // 0x338 (0x8)
	class UFortItemDefinition* WoodItemDef; // 0x340 (0x8)
	struct FGameplayTagContainer BuildElementTag; // 0x348 (0x20)
	struct FGameplayTagContainer WoodTag; // 0x368 (0x20)
	class ABuildingGameplayActor* SecondStairsNoBuildZone; // 0x388 (0x8)
	class ATriggerBox* TriggerBox; // 0x390 (0x8)
	unsigned char padding_398[0x8]; // 0x398 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaTutorial_Build.OnPlayerEntersChestTrigger (Underlying native function: OnPlayerEntersChestTrigger 0x856e688)
	void OnPlayerEntersChestTrigger(class AActor*& OverlappedActor, class AActor*& OtherActor); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaTutorial_Build.OnBeginOverlapChestTriggerBox (Underlying native function: OnBeginOverlapChestTriggerBox 0x856e13c)
	void OnBeginOverlapChestTriggerBox(class AActor*& OverlappedActor, class AActor*& OtherActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaTutorial_Build.HandleOnItemCountChanged (Underlying native function: HandleOnItemCountChanged 0x856d800)
	void HandleOnItemCountChanged(class UFortItemDefinition*& Definition, int& Delta); // (Final | Native | Private)
};

