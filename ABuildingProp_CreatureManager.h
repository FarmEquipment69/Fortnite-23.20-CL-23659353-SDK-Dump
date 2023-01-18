// Class /Script/FortniteGame.BuildingProp_CreatureManager
// Size: 0xfa0
class ABuildingProp_CreatureManager : public ABuildingProp
{
	struct TArray<struct TWeakObjectPtr<class UClass>> AITypeOptions; // 0xee8 (0x10)
	struct TWeakObjectPtr<class UClass> SelectedAIType; // 0xef8 (0x28)
	float SelectedOverrideAggroDistance; // 0xf20 (0x4)
	int SelectedOverrideHealth; // 0xf24 (0x4)
	int SelectedOverrideScoreValue; // 0xf28 (0x4)
	enum EScoreDistributionType SelectedOverrideScoreDistribution; // 0xf2c (0x1)
	enum ECreatureManagerAffectedTargets SelectedAffectedTargetsType; // 0xf2d (0x1)
	unsigned char unreflected_f2e[0x2]; // 0xf2e (0x2) 
	float SelectedOverrideDamage; // 0xf30 (0x4)
	float SelectedEnvironmentalDamageOverride; // 0xf34 (0x4)
	float SelectedMovementSpeedMultiplier; // 0xf38 (0x4)
	unsigned char unreflected_f3c[0x4]; // 0xf3c (0x4) 
	class UClass* DamageOverrideEffect; // 0xf40 (0x8)
	class UClass* EnvironmentalDamageOverrideEffect; // 0xf48 (0x8)
	class UClass* MovementSpeedOverrideEffect; // 0xf50 (0x8)
	class UClass* MaxHealthOverrideEffect; // 0xf58 (0x8)
	struct FGameplayTag DamageOverrideTag; // 0xf60 (0x4)
	struct FGameplayTag MovementOverrideTag; // 0xf64 (0x4)
	struct FGameplayTag MaxHealthOverrideTag; // 0xf68 (0x4)
	bool bImmuneToWeaponKnockback; // 0xf6c (0x1)
	unsigned char unreflected_f6d[0x3]; // 0xf6d (0x3) 
	class UClass* WeaponKnockbackImmunityEffect; // 0xf70 (0x8)
	class UFortCreativeCreatureManagerInfoComponent* CreatureInfoComponent; // 0xf78 (0x8)
	class UFortGameplayTriggerMessageComponent* CreatureAIDiedTriggerComponent; // 0xf80 (0x8)
	unsigned char padding_f88[0x18]; // 0xf88 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_CreatureManager.SkeletalMeshLoadComplete (Has no native function)
	void SkeletalMeshLoadComplete(class UMaterialInterface*& Material, class USkeletalMesh*& Mesh); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CreatureManager.SetupConfigurables (Has no native function)
	void SetupConfigurables(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CreatureManager.OnManagedCreatureDied (Has no native function)
	void OnManagedCreatureDied(class AController*& InstigatingController, class AActor*& DamagedActor); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CreatureManager.NotifyDeviceEnableChanged (Underlying native function: NotifyDeviceEnableChanged 0x860b7a4)
	void NotifyDeviceEnableChanged(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CreatureManager.MinigameStateChange (Underlying native function: MinigameStateChange 0x860a5a4)
	void MinigameStateChange(class AFortMinigame*& Minigame, enum EFortMinigameState& NewMinigameState); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CreatureManager.LoadSkeletalMeshDisplayOption (Underlying native function: LoadSkeletalMeshDisplayOption 0x860a564)
	void LoadSkeletalMeshDisplayOption(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CreatureManager.CreatureManagerComponentAIHasDied (Underlying native function: CreatureManagerComponentAIHasDied 0x8607c18)
	void CreatureManagerComponentAIHasDied(class AController*& InstigatingController, class AActor*& FortAIPawn); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingProp_CreatureManager.AdjustCollisionOfStaticMesh (Underlying native function: AdjustCollisionOfStaticMesh 0x8606e0c)
	void AdjustCollisionOfStaticMesh(bool& bIgnore, class UStaticMeshComponent*& Mesh); // (Final | Native | Public | BlueprintCallable)
};

