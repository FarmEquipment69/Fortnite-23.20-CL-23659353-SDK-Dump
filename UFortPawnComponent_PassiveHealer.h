// Class /Script/FortniteGame.FortPawnComponent_PassiveHealer
// Size: 0x2e8
class UFortPawnComponent_PassiveHealer : public UFortPawnComponent
{
	struct FScalableFloat PassiveHealerGreetingDistance; // 0xa0 (0x28)
	struct FScalableFloat PassiveHealerGreetingDuration; // 0xc8 (0x28)
	struct TWeakObjectPtr<class UDataTable> PassiveHealerActivitiesTable; // 0xf0 (0x28)
	struct TArray<class UClass*> GameplayEffectsToApply; // 0x118 (0x10)
	struct FItemAndCount HealItem; // 0x128 (0x20)
	struct FScalableFloat HealingIntervalDuration; // 0x148 (0x28)
	struct FScalableFloat HealItemEquipDuration; // 0x170 (0x28)
	struct FScalableFloat HealItemThrowHoldDuration; // 0x198 (0x28)
	struct FScalableFloat HealItemWaitAfterThrowDuration; // 0x1c0 (0x28)
	struct FName PassiveHealerInteractionCollisionProfile; // 0x1e8 (0x4)
	unsigned char unreflected_1ec[0x4]; // 0x1ec (0x4) 
	struct FVector PassiveHealerInteractionBoxExtent; // 0x1f0 (0x18)
	struct FVector PassiveHealerInteractionBoxOffset; // 0x208 (0x18)
	class UClass* GreetingTextWidgetComponentClass; // 0x220 (0x8)
	struct FDataTableRowHandle OverrideLootInfo; // 0x228 (0x10)
	class UFortGameStateComponent_AffiliationManager* AffiliationManager; // 0x238 (0x8)
	class UBoxComponent* InteractCollisionComponent; // 0x240 (0x8)
	unsigned char bPassiveHealingRunning; // 0x248 (0x1)
	unsigned char unreflected_249[0x3]; // 0x249 (0x3) 
	struct FPrimaryAssetId* SelectedEmotePrimaryAssetId; // 0x24c (0x8)
	unsigned char unreflected_254[0x4]; // 0x254 (0x4) 
	struct FText SelectedInteractText; // 0x258 (0x18)
	struct FText SelectedGreetingText; // 0x270 (0x18)
	float GreetingDistanceSqr; // 0x288 (0x4)
	unsigned char unreflected_28c[0x4]; // 0x28c (0x4) 
	struct TArray<struct FFortPassiveHealerPawnInfo> HealingPawns; // 0x290 (0x10)
	class UWidgetComponent* GreetingTextWidgetComponent; // 0x2a0 (0x8)
	unsigned char unreflected_2a8[0x10]; // 0x2a8 (0x10) 
	class UFortWorldItem* FortWorldHealItem; // 0x2b8 (0x8)
	unsigned char padding_2c0[0x28]; // 0x2c0 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortPawnComponent_PassiveHealer.Stop (Underlying native function: Stop 0x26daa0c)
	void Stop(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawnComponent_PassiveHealer.Start (Underlying native function: Start 0x26daa0c)
	void Start(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawnComponent_PassiveHealer.OnRep_PassiveHealingRunning (Underlying native function: OnRep_PassiveHealingRunning 0x870229c)
	void OnRepPassiveHealingRunning(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPawnComponent_PassiveHealer.OnHealedPlayerStoppedEmote (Underlying native function: OnHealedPlayerStoppedEmote 0x870198c)
	void OnHealedPlayerStoppedEmote(class UFortItemDefinition*& MontageItemDef, class AFortPawn*& PawnEmoting); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPawnComponent_PassiveHealer.OnHealedPlayerStartedEmote (Underlying native function: OnHealedPlayerStartedEmote 0x870172c)
	void OnHealedPlayerStartedEmote(class UFortItemDefinition*& MontageItemDef, class AFortPawn*& PawnEmoting); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPawnComponent_PassiveHealer.GetGreetingPassiveHealingText (Underlying native function: GetGreetingPassiveHealingText 0x28b2e9c)
	struct FText GetGreetingPassiveHealingText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

