// Class /Script/FortniteGame.FortConstructorBASE
// Size: 0x1258
class AFortConstructorBASE : public ABuildingProp
{
	struct TArray<struct FBASEGameplayEffect> BASEBuildingApplicationEffects; // 0xee8 (0x10)
	struct TArray<struct FBASEGameplayEffect> BASEFriendlyApplicationEffects; // 0xef8 (0x10)
	struct TArray<struct FBASEGameplayEffect> BASEFriendlyApplicationTrapEffects; // 0xf08 (0x10)
	struct TArray<struct FBASEGameplayEffect> BASEEnemyApplicationEffects; // 0xf18 (0x10)
	struct FGameplayTag InBASETag; // 0xf28 (0x4)
	int NodesToAffect; // 0xf2c (0x4)
	int BaseLevel; // 0xf30 (0x4)
	unsigned char unreflected_f34[0x4]; // 0xf34 (0x4) 
	struct TArray<struct FPatternBASEEffect> BASEEffectPatterns; // 0xf38 (0x10)
	struct FFortBaseWeaponStats DamageStats; // 0xf48 (0x148)
	unsigned char padding_1090[0x1c8]; // 0x1090 (0x1c8)

	/* Functions */

	// Function /Script/FortniteGame.FortConstructorBASE.StopBuildingActorVisuals (Has no native function)
	void StopBuildingActorVisuals(class ABuildingSMActor*& BuildingActor, class UStaticMeshComponent*& EffectMeshComp); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortConstructorBASE.StartBuildingActorVisuals (Has no native function)
	void StartBuildingActorVisuals(class ABuildingSMActor*& BuildingActor, class UStaticMeshComponent*& EffectMeshComp); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortConstructorBASE.OnPlaced (Has no native function)
	void OnPlaced(class UAbilitySystemComponent*& InstigatorAbilitySystemComponent); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortConstructorBASE.OnPawnRemovedFromBase (Has no native function)
	void OnPawnRemovedFromBase(class AFortPawn*& Pawn); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortConstructorBASE.OnPawnAddedToBase (Has no native function)
	void OnPawnAddedToBase(class AFortPawn*& Pawn); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortConstructorBASE.OnNeighborEndPlay (Underlying native function: OnNeighborEndPlay 0x82886e8)
	void OnNeighborEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortConstructorBASE.OnNeighborDied (Underlying native function: OnNeighborDied 0x8487b00)
	void OnNeighborDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteGame.FortConstructorBASE.OnBasePawnDied (Underlying native function: OnBasePawnDied 0x8eabd00)
	void OnBasePawnDied(class AFortPawn*& Pawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortConstructorBASE.OnBasePawnDestroyed (Underlying native function: OnBasePawnDestroyed 0x8eabd00)
	void OnBasePawnDestroyed(class AFortPawn*& Pawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortConstructorBASE.OnBaseCollisionUnTouched (Underlying native function: OnBaseCollisionUnTouched 0x8eabaec)
	void OnBaseCollisionUnTouched(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortConstructorBASE.OnBaseCollisionTouched (Underlying native function: OnBaseCollisionTouched 0x8eab7c4)
	void OnBaseCollisionTouched(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortConstructorBASE.GetResourceAmountsBasedOnUpgradeTier (Underlying native function: GetResourceAmountsBasedOnUpgradeTier 0x8eaa83c)
	void GetResourceAmountsBasedOnUpgradeTier(int& TierOneUpgradeAmount, int& TierTwoUpgradeAmount, int& TierThreeUpgradeAmount, int& WoodResult, int& StoneResult, int& MetalResult); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortConstructorBASE.GetBuildingActorsInBase (Underlying native function: GetBuildingActorsInBase 0x8ea9d40)
	struct TArray<class ABuildingSMActor*> GetBuildingActorsInBase(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortConstructorBASE.AddNeighborToBaseOnFinishedConstruction (Underlying native function: AddNeighborToBaseOnFinishedConstruction 0x8ea8968)
	void AddNeighborToBaseOnFinishedConstruction(class ABuildingSMActor*& PlaceOn); // (Final | Native | Private)
};

