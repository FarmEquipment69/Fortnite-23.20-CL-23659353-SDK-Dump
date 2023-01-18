// Class /Script/FortniteGame.FortAthenaTutorial_Chest
// Size: 0x350
class AFortAthenaTutorial_Chest : public AFortAthenaTutorialBase
{
	class ABuildingContainer* Chest; // 0x2f0 (0x8)
	struct TArray<class UFortItemDefinition*> ItemsToCollect; // 0x2f8 (0x10)
	struct FGameplayTag InteractButtonTag; // 0x308 (0x4)
	unsigned char unreflected_30c[0x4]; // 0x30c (0x4) 
	class AActor* ChestLookMarker; // 0x310 (0x8)
	class UClass* InteractButtonHighlightType; // 0x318 (0x8)
	class ATriggerBox* TriggerBox; // 0x320 (0x8)
	unsigned char unreflected_328[0x20]; // 0x328 (0x20) 
	float ShowEasyInteractIconDelay; // 0x348 (0x4)
	unsigned char padding_34c[0x4]; // 0x34c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaTutorial_Chest.OnPlayerEntersTrigger (Underlying native function: OnPlayerEntersTrigger 0x856e74c)
	void OnPlayerEntersTrigger(class AActor*& OverlappedActor, class AActor*& OtherActor); // (Final | Native | Public)
};

