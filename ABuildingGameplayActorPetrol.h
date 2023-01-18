// Class /Script/FortniteGame.BuildingGameplayActorPetrol
// Size: 0xa98
class ABuildingGameplayActorPetrol : public ABuildingGameplayActor
{
	class USphereComponent* SphereCollisionComponent; // 0x9d8 (0x8)
	struct FSplatterCellIndex SplatterIndices; // 0x9e0 (0xc)
	unsigned char unreflected_9ec[0x4]; // 0x9ec (0x4) 
	struct FVector StartingPos; // 0x9f0 (0x18)
	struct FVector TargetPos; // 0xa08 (0x18)
	class UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0xa20 (0x8)
	class UDecalComponent* SplatterDecal; // 0xa28 (0x8)
	class UClass* DamageEffectClass; // 0xa30 (0x8)
	struct TArray<class ABuildingGameplayActorPetrol*> Neighbors; // 0xa38 (0x10)
	float IgniteRange; // 0xa48 (0x4)
	float DamageRange; // 0xa4c (0x4)
	float CurrentSize; // 0xa50 (0x4)
	unsigned char unreflected_a54[0x14]; // 0xa54 (0x14) 
	struct TWeakObjectPtr<class AActor> PrevPetrol; // 0xa68 (0x8)
	struct FVector ImpactDirection; // 0xa70 (0x18)
	bool bIgnited; // 0xa88 (0x1)
	unsigned char unreflected_a89[0x3]; // 0xa89 (0x3) 
	int ProjectileCount; // 0xa8c (0x4)
	float SplatterMinDecalWidth; // 0xa90 (0x4)
	float SplatterMaxDecalWidth; // 0xa94 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.BuildingGameplayActorPetrol.UpdateCurrentSize (Underlying native function: UpdateCurrentSize 0x85e12c8)
	void UpdateCurrentSize(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingGameplayActorPetrol.OnRep_ProjectileCount (Underlying native function: OnRep_ProjectileCount 0x85e005c)
	void OnRepProjectileCount(int& PrevProjectileCount); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingGameplayActorPetrol.OnRep_PrevPetrol (Underlying native function: OnRep_PrevPetrol 0x85dffe0)
	void OnRepPrevPetrol(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingGameplayActorPetrol.OnRep_Ignited (Underlying native function: OnRep_Ignited 0x85dfe78)
	void OnRepIgnited(bool& bPrevIgnited); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingGameplayActorPetrol.OnIgnite (Has no native function)
	void OnIgnite(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorPetrol.OnGrowBigger (Has no native function)
	void OnGrowBigger(int& NewProjectileCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorPetrol.IgniteTimerExpired (Underlying native function: IgniteTimerExpired 0x85deda4)
	void IgniteTimerExpired(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingGameplayActorPetrol.GetTargetSize (Underlying native function: GetTargetSize 0x85deb88)
	float GetTargetSize(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingGameplayActorPetrol.GetProjectileCount (Underlying native function: GetProjectileCount 0x85dea04)
	int GetProjectileCount(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingGameplayActorPetrol.GetCurrentSize (Underlying native function: GetCurrentSize 0x85de6d0)
	float GetCurrentSize(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingGameplayActorPetrol.ClientOnIgnite (Has no native function)
	void ClientOnIgnite(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)
};

