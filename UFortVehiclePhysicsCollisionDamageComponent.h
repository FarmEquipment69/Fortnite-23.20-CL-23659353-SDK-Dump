// Class /Script/FortniteGame.FortVehiclePhysicsCollisionDamageComponent
// Size: 0x110
class UFortVehiclePhysicsCollisionDamageComponent : public UActorComponent
{
	bool bAllowHitPawns; // 0xa0 (0x1)
	bool bAllowHitBuildingPieces; // 0xa1 (0x1)
	bool bDoMultiSweep; // 0xa2 (0x1)
	bool bOnlyAffectBuildingsIfKillingDamage; // 0xa3 (0x1)
	float ClientIgnoreBuildingActorsTime; // 0xa4 (0x4)
	bool bUpdateTimeoutIgnoreBuildingActors; // 0xa8 (0x1)
	bool bAlignLookAheadDirectionWithVehicleYAxis; // 0xa9 (0x1)
	bool bAlignLookAheadDirectionWithVehicleZAxis; // 0xaa (0x1)
	unsigned char unreflected_ab[0x1]; // 0xab (0x1) 
	struct FName BoxTraceSingleName; // 0xac (0x4)
	struct FName DestructionTraceSocket; // 0xb0 (0x4)
	struct FName DestructionTraceSocketRear; // 0xb4 (0x4)
	struct TEnumAsByte<ECollisionChannel> TraceChannel; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x3]; // 0xb9 (0x3) 
	float MaxDestructionAngle; // 0xbc (0x4)
	float MinDestructionSpeedKmh; // 0xc0 (0x4)
	unsigned char unreflected_c4[0x4]; // 0xc4 (0x4) 
	class UClass* DamageGE; // 0xc8 (0x8)
	struct TArray<struct FHitBuildingDamageOverride> OverriddenDamageData; // 0xd0 (0x10)
	struct TArray<struct FPotentiallyDestroyedBuilding> PotentiallyDestroyedBuildings; // 0xe0 (0x10)
	float VehicleApproxHalfLength; // 0xf0 (0x4)
	unsigned char unreflected_f4[0x4]; // 0xf4 (0x4) 
	class AFortAthenaVehicle* CachedOwnerVehicle; // 0xf8 (0x8)
	class UFortPhysicsVehicleConfigs* CachedVehicleConfigs; // 0x100 (0x8)
	float LastOnSKComponentHitTime; // 0x108 (0x4)
	unsigned char padding_10c[0x4]; // 0x10c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortVehiclePhysicsCollisionDamageComponent.HandleOnSKComponentHit (Underlying native function: HandleOnSKComponentHit 0x2785568)
	void HandleOnSKComponentHit(class UPrimitiveComponent*& HitComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Final | Native | Private | HasOutParms | HasDefaults)
};

