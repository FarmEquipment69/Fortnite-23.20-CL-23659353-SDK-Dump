// Class /Script/FortniteAI.AthenaAIServiceLoot
// Size: 0x470
class UAthenaAIServiceLoot : public UAthenaAIService
{
	struct FVector LootOctreeCenter; // 0x78 (0x18)
	struct FScalableFloat LootOctreeRadius; // 0x90 (0x28)
	struct FScalableFloat SupplyDropStatusUpdateRate; // 0xb8 (0x28)
	struct FScalableFloat RemoveInvalidChestFromOctreeProbability; // 0xe0 (0x28)
	struct FScalableFloat MovingLootTrackingEnabled; // 0x108 (0x28)
	struct FScalableFloat MovingLootUpdateRate; // 0x130 (0x28)
	struct FScalableFloat MovingLootOctreeUpdateDistanceThreshold; // 0x158 (0x28)
	struct TArray<class UClass*> HarvestableActorClassList; // 0x180 (0x10)
	unsigned char unreflected_190[0x210]; // 0x190 (0x210) 
	struct TMap<struct TWeakObjectPtr<class AFortPickup>, struct FMovingLootInfo> MovingLoots; // 0x3a0 (0x50)
	unsigned char unreflected_3f0[0x8]; // 0x3f0 (0x8) 
	struct TArray<struct FCachedSupplyDrop> CachedSupplyDrops; // 0x3f8 (0x10)
	class UFortWorldItem* CachedWorldItem; // 0x408 (0x8)
	class UDataTable* BotBuildingContainerExcludeListDataTable; // 0x410 (0x8)
	unsigned char padding_418[0x58]; // 0x418 (0x58)

	/* Functions */

	// Function /Script/FortniteAI.AthenaAIServiceLoot.UpdateSupplyDropStatus (Underlying native function: UpdateSupplyDropStatus 0xa3e4a5c)
	void UpdateSupplyDropStatus(); // (Final | Native | Private)

	// Function /Script/FortniteAI.AthenaAIServiceLoot.UpdateMovingLoots (Underlying native function: UpdateMovingLoots 0xa3e4a48)
	void UpdateMovingLoots(); // (Final | Native | Private)

	// Function /Script/FortniteAI.AthenaAIServiceLoot.OnGamePhaseStepChanged (Underlying native function: OnGamePhaseStepChanged 0xa3e38f8)
	void OnGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteAI.AthenaAIServiceLoot.K2_RemoveGameplayTagFromLoot (Underlying native function: K2_RemoveGameplayTagFromLoot 0xa3e2fa8)
	void K2RemoveGameplayTagFromLoot(class AActor*& LootActor, struct FGameplayTag& GameplayTag); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIServiceLoot.K2_AddGameplayTagToLoot (Underlying native function: K2_AddGameplayTagToLoot 0xa3e2ed8)
	void K2AddGameplayTagToLoot(class AActor*& LootActor, struct FGameplayTag& GameplayTag); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)
};

