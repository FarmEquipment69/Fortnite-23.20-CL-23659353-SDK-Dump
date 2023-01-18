// Class /Script/SuperstormRuntime.TempestTornadoForcesComponent
// Size: 0x530
class UTempestTornadoForcesComponent : public UGameFrameworkComponent
{
	struct FMulticastInlineDelegate OnActorAddedToTornadoForces; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnActorRemovedFromTornadoForces; // 0xb0 (0x10)
	struct FDataTableRowHandle ConfigHandle; // 0xc0 (0x10)
	struct TArray<struct FGameplayTag> PhysicsPresetTagsAngularDampingToOverride; // 0xd0 (0x10)
	struct FScalableFloat AngularDampingOverride; // 0xe0 (0x28)
	class UClass* PawnInGE; // 0x108 (0x8)
	struct TMap<enum EFortPhysicsObjectType, struct FScalableFloat> ObjectTypeToMaxCapCount; // 0x110 (0x50)
	struct FGameplayTagContainer TagsToIgnore; // 0x160 (0x20)
	class UClass* RecentlyRemovedGE; // 0x180 (0x8)
	class UTargetingPreset* TargetingPreset; // 0x188 (0x8)
	struct FGameplayTag DamageSetByCallerTag; // 0x190 (0x4)
	unsigned char unreflected_194[0x4]; // 0x194 (0x4) 
	class UClass* PeriodicDamageGE; // 0x198 (0x8)
	class UClass* BurstDamageGE; // 0x1a0 (0x8)
	struct FGameplayTag TornadoActiveCue; // 0x1a8 (0x4)
	struct FGameplayTag PlayerNearCue; // 0x1ac (0x4)
	struct FGameplayTag PawnInCue; // 0x1b0 (0x4)
	unsigned char unreflected_1b4[0x4]; // 0x1b4 (0x4) 
	struct FScalableFloat PlayerNearRange; // 0x1b8 (0x28)
	struct FGameplayTagContainer BlockAbilitiesWithTag; // 0x1e0 (0x20)
	struct FTornadoClientSimulationArray ActorsToClientSimulate; // 0x200 (0x118)
	unsigned char unreflected_318[0x118]; // 0x318 (0x118) 
	struct FTargetingRequestHandle AsyncTargetingHandle; // 0x430 (0x4)
	unsigned char unreflected_434[0x4]; // 0x434 (0x4) 
	struct TSet<class AFortPlayerPawn*> PreviouslyNearPlayers; // 0x438 (0x50)
	unsigned char padding_488[0xa8]; // 0x488 (0xa8)

	/* Functions */

	// Function /Script/SuperstormRuntime.TempestTornadoForcesComponent.OnVehicleInTornadoPlayerExit (Underlying native function: OnVehicleInTornadoPlayerExit 0x76e48a0)
	void OnVehicleInTornadoPlayerExit(class AFortPlayerControllerAthena*& PlayerController, class AFortAthenaVehicle*& Vehicle); // (Final | Native | Private)

	// Function /Script/SuperstormRuntime.TempestTornadoForcesComponent.IsActorInTornado (Underlying native function: IsActorInTornado 0x76e478c)
	bool IsActorInTornado(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

