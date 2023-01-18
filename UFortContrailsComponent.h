// Class /Script/FortniteGame.FortContrailsComponent
// Size: 0x168
class UFortContrailsComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnContrailsLoadFinished; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnContrailsActivated; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnContrailsDeactivated; // 0xc0 (0x10)
	float SpawnDelay; // 0xd0 (0x4)
	bool bAlwaysShowContrails; // 0xd4 (0x1)
	unsigned char unreflected_d5[0xb]; // 0xd5 (0xb) 
	class UAthenaSkyDiveContrailItemDefinition* ActiveContrailDefinition; // 0xe0 (0x8)
	struct TWeakObjectPtr<class UFXSystemAsset> ContrailFXOverride; // 0xe8 (0x28)
	class UParticleSystem* VaporEmitterTemplate; // 0x110 (0x8)
	struct TWeakObjectPtr<class UFXSystemComponent> ContrailFXComp; // 0x118 (0x8)
	struct TWeakObjectPtr<class UFXSystemComponent> VaporFXComp; // 0x120 (0x8)
	unsigned char unreflected_128[0x18]; // 0x128 (0x18) 
	enum EPSCPoolMethod PoolingMethod; // 0x140 (0x1)
	unsigned char unreflected_141[0x3]; // 0x141 (0x3) 
	float VelocityInRangeMin; // 0x144 (0x4)
	float VelocityInRangeMax; // 0x148 (0x4)
	float NiagaraParamsOutRangeMin; // 0x14c (0x4)
	float NiagaraParamsOutRangeMax; // 0x150 (0x4)
	float TrailAlphaOutRangeMin; // 0x154 (0x4)
	float TrailAlphaOutRangeMax; // 0x158 (0x4)
	float TrailWidthOutRangeMin; // 0x15c (0x4)
	float TrailWidthOutRangeMax; // 0x160 (0x4)
	unsigned char padding_164[0x4]; // 0x164 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortContrailsComponent.SetContrailFXOverride (Underlying native function: SetContrailFXOverride 0x832f3d4)
	void SetContrailFXOverride(struct TWeakObjectPtr<class UFXSystemAsset>& InContrailFXOverride); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortContrailsComponent.RefreshContrailVisibility (Underlying native function: RefreshContrailVisibility 0x2831980)
	void RefreshContrailVisibility(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortContrailsComponent.HasContrailFXOverrde (Underlying native function: HasContrailFXOverrde 0x832e600)
	bool HasContrailFXOverrde(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortContrailsComponent.HandleParachuteSpawned (Underlying native function: HandleParachuteSpawned 0x2831980)
	void HandleParachuteSpawned(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortContrailsComponent.HandleLanded (Underlying native function: HandleLanded 0x1011eb0)
	void HandleLanded(struct FHitResult& Hit); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortContrailsComponent.HandleEndSkydiving (Underlying native function: HandleEndSkydiving 0x2831980)
	void HandleEndSkydiving(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortContrailsComponent.HandleEndParachuteMovement (Underlying native function: HandleEndParachuteMovement 0x2831980)
	void HandleEndParachuteMovement(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortContrailsComponent.HandleBeginSkydiving (Underlying native function: HandleBeginSkydiving 0x2831980)
	void HandleBeginSkydiving(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortContrailsComponent.HandleBeginParachuteMovement (Underlying native function: HandleBeginParachuteMovement 0x2831980)
	void HandleBeginParachuteMovement(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortContrailsComponent.GetContrailsState (Underlying native function: GetContrailsState 0x832df50)
	enum EFortContrailsState GetContrailsState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortContrailsComponent.GetContrailFXOverride (Underlying native function: GetContrailFXOverride 0x832de18)
	struct TWeakObjectPtr<class UFXSystemAsset> GetContrailFXOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortContrailsComponent.GetContrailFXComponent (Underlying native function: GetContrailFXComponent 0x832ddac)
	class UFXSystemComponent* GetContrailFXComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortContrailsComponent.AreContrailsLoaded (Underlying native function: AreContrailsLoaded 0x832d464)
	bool AreContrailsLoaded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

