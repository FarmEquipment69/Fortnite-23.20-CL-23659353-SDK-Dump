// Class /Script/CRDBossRuntime.FortPawnComponent_DynamicDamageZones
// Size: 0xf0
class UFortPawnComponent_DynamicDamageZones : public UFortPawnComponent
{
	struct FMulticastInlineDelegate OnDamageZoneDamaged; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnDamageZoneActivated; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnDamageZoneDeactivated; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnDamageZoneThresholdReached; // 0xd0 (0x10)
	struct TArray<struct FPawnDamageZoneInfo> ZoneList; // 0xe0 (0x10)

	/* Functions */

	// Function /Script/CRDBossRuntime.FortPawnComponent_DynamicDamageZones.SetDamageZoneType (Underlying native function: SetDamageZoneType 0x55999c0)
	void SetDamageZoneType(struct FName& DamageZoneName, struct TEnumAsByte<EFortDamageZone>& DamageZone); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CRDBossRuntime.FortPawnComponent_DynamicDamageZones.OnPawnDamaged (Underlying native function: OnPawnDamaged 0x55995f0)
	void OnPawnDamaged(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/CRDBossRuntime.FortPawnComponent_DynamicDamageZones.GetDamageZoneType (Underlying native function: GetDamageZoneType 0x5599250)
	struct TEnumAsByte<EFortDamageZone> GetDamageZoneType(struct FHitResult& InHitResult); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CRDBossRuntime.FortPawnComponent_DynamicDamageZones.DeactivateDamageZone (Underlying native function: DeactivateDamageZone 0x5598520)
	void DeactivateDamageZone(struct FName& DamageZoneName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CRDBossRuntime.FortPawnComponent_DynamicDamageZones.DeactivateAllDamageZones (Underlying native function: DeactivateAllDamageZones 0x5598500)
	void DeactivateAllDamageZones(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CRDBossRuntime.FortPawnComponent_DynamicDamageZones.AddDamageZoneInfo (Underlying native function: AddDamageZoneInfo 0x5597e30)
	void AddDamageZoneInfo(struct FPawnDamageZoneInfo& Info); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CRDBossRuntime.FortPawnComponent_DynamicDamageZones.ActivateDamageZone (Underlying native function: ActivateDamageZone 0x5597a70)
	void ActivateDamageZone(struct FName& DamageZoneName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CRDBossRuntime.FortPawnComponent_DynamicDamageZones.ActivateAllDamageZones (Underlying native function: ActivateAllDamageZones 0x5597a50)
	void ActivateAllDamageZones(); // (Final | Native | Public | BlueprintCallable)
};

