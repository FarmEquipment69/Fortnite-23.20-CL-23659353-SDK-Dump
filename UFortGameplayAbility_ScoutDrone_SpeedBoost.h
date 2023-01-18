// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost
// Size: 0xc58
class UFortGameplayAbility_ScoutDrone_SpeedBoost : public UFortGameplayAbility_ScoutDrone_TargetingBase
{
	struct FGameplayTag DoorBashCueTag; // 0xb68 (0x4)
	unsigned char unreflected_b6c[0x4]; // 0xb6c (0x4) 
	class UClass* DamageGameplayEffectClass; // 0xb70 (0x8)
	struct FGameplayTag DoorBashPawnLaunchGameplayCueTag; // 0xb78 (0x4)
	unsigned char unreflected_b7c[0x4]; // 0xb7c (0x4) 
	struct FScalableFloat DoorBashEnabledHotfix; // 0xb80 (0x28)
	struct FScalableFloat DoorBashSphereRadiusForPawnLaunch; // 0xba8 (0x28)
	struct FScalableFloat DoorBashScalarForPawnLaunch; // 0xbd0 (0x28)
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> DoorBashCollisionTypesForPawn; // 0xbf8 (0x10)
	struct FScalableFloat DoorBashEnabled; // 0xc08 (0x28)
	struct FScalableFloat DamageOnBoostEnabled; // 0xc30 (0x28)

	/* Functions */

	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost.OnDoorBashed (Has no native function)
	void OnDoorBashed(struct FHitResult& HitResult, class UFortBuildingWallDoorComponent*& BashedDoor); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost.OnBoostedIntoActor (Has no native function)
	void OnBoostedIntoActor(struct FHitResult& HitResult); // (Event | Protected | HasOutParms | BlueprintEvent)
};

