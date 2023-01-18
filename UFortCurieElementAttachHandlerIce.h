// Class /Script/IceRuntime.FortCurieElementAttachHandlerIce
// Size: 0xe8
class UFortCurieElementAttachHandlerIce : public UFortCurieElementAttachHandler
{
	float MinWaterContentOnDetach; // 0x90 (0x4)
	float ShatterDamageThreshold; // 0x94 (0x4)
	struct TMap<class ABuildingActor*, float> AggregateDamagePerActor; // 0x98 (0x50)

	/* Functions */

	// Function /Script/IceRuntime.FortCurieElementAttachHandlerIce.ResolveBuildingDamage (Underlying native function: ResolveBuildingDamage 0x744ff68)
	void ResolveBuildingDamage(class ABuildingActor*& DamagedBuildingActor, class AController*& InstigatedBy, class AActor*& DamageCauser); // (Final | Native | Private)

	// Function /Script/IceRuntime.FortCurieElementAttachHandlerIce.HandleBuildingDamaged (Underlying native function: HandleBuildingDamaged 0x744f790)
	void HandleBuildingDamaged(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)
};

