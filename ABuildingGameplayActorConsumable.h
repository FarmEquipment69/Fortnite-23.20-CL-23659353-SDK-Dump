// Class /Script/FortniteGame.BuildingGameplayActorConsumable
// Size: 0xa48
class ABuildingGameplayActorConsumable : public ABuildingGameplayActor
{
	class UClass* OnConsumeGameplayEffect; // 0x9d8 (0x8)
	class UClass* OnConsumeMontageAbility; // 0x9e0 (0x8)
	class UAnimMontage* OnConsumeMontage; // 0x9e8 (0x8)
	bool bSpawnerCalculateRandomRotation; // 0x9f0 (0x1)
	unsigned char unreflected_9f1[0x7]; // 0x9f1 (0x7) 
	class UParticleSystem* DeathParticles; // 0x9f8 (0x8)
	class USoundBase* DeathSound; // 0xa00 (0x8)
	float MaxDrawDistanceStw; // 0xa08 (0x4)
	float MaxDrawDistanceAthena; // 0xa0c (0x4)
	struct FName StatNameWhenConsumed; // 0xa10 (0x4)
	unsigned char unreflected_a14[0x4]; // 0xa14 (0x4) 
	struct FGameplayTagContainer FailedReason; // 0xa18 (0x20)
	class UAnimMontage* SearchAnim; // 0xa38 (0x8)
	unsigned char unreflected_a40[0x4]; // 0xa40 (0x4) 
	bool bReplicateLongInteractionDetails; // 0xa44 (0x1)
	unsigned char padding_a45[0x3]; // 0xa45 (0x3)

	/* Functions */

	// Function /Script/FortniteGame.BuildingGameplayActorConsumable.PrepareOnConsumeGameplayEffectSpec (Underlying native function: PrepareOnConsumeGameplayEffectSpec 0x85e0614)
	void PrepareOnConsumeGameplayEffectSpec(struct FGameplayEffectSpecHandle& SpecHandle); // (Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorConsumable.OnServerNotifyStartLongUse (Has no native function)
	void OnServerNotifyStartLongUse(class AFortPlayerPawn*& InteractingPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorConsumable.OnServerNotifyEndLongUse (Has no native function)
	void OnServerNotifyEndLongUse(class AFortPlayerPawn*& InteractingPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorConsumable.OnInteractAllowedToConsume (Underlying native function: OnInteractAllowedToConsume 0x85df954)
	bool OnInteractAllowedToConsume(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorConsumable.OnGatherOrInteract (Has no native function)
	void OnGatherOrInteract(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorConsumable.OnAllowedToConsumeFailed (Underlying native function: OnAllowedToConsumeFailed 0x85df834)
	void OnAllowedToConsumeFailed(class AFortPawn*& InteractingPawn); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorConsumable.MakeOnConsumeGameplayEffectSpec (Underlying native function: MakeOnConsumeGameplayEffectSpec 0x85df690)
	struct FGameplayEffectSpecHandle MakeOnConsumeGameplayEffectSpec(class AActor*& EventCauser, int& Level); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorConsumable.GetOnConsumeMontageAbility (Underlying native function: GetOnConsumeMontageAbility 0x85de9a0)
	class UClass* GetOnConsumeMontageAbility(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingGameplayActorConsumable.GetOnConsumeMontage (Underlying native function: GetOnConsumeMontage 0x85de93c)
	class UAnimMontage* GetOnConsumeMontage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingGameplayActorConsumable.GetOnConsumeGameplayEffect (Underlying native function: GetOnConsumeGameplayEffect 0x85de8d8)
	class UClass* GetOnConsumeGameplayEffect(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingGameplayActorConsumable.GetDeathFXTransform (Underlying native function: GetDeathFXTransform 0x85de6e8)
	struct FTransform GetDeathFXTransform(); // (Native | Event | Public | HasDefaults | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingGameplayActorConsumable.DetermineOnConsumeMontageAbility (Underlying native function: DetermineOnConsumeMontageAbility 0x85de080)
	class UClass* DetermineOnConsumeMontageAbility(); // (Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingGameplayActorConsumable.DetermineOnConsumeMontage (Underlying native function: DetermineOnConsumeMontage 0x84152d8)
	class UAnimMontage* DetermineOnConsumeMontage(); // (Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingGameplayActorConsumable.DetermineOnConsumeGameplayEffect (Underlying native function: DetermineOnConsumeGameplayEffect 0x85de050)
	class UClass* DetermineOnConsumeGameplayEffect(); // (Native | Event | Protected | BlueprintEvent | Const)
};

