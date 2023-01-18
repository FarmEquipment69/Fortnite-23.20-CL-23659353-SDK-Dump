// Class /Script/FortniteGame.FortWeakPointsCoordinatorComponent
// Size: 0xc0
class UFortWeakPointsCoordinatorComponent : public UGameFrameworkComponent
{
	struct FMulticastInlineDelegate OnWeakPointStateChangedDelegate; // 0xa0 (0x10)
	struct TArray<struct FFortWeakPointTypeData> WeakPointTypes; // 0xb0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortWeakPointsCoordinatorComponent.OnWeakPointStateChanged (Underlying native function: OnWeakPointStateChanged 0x901029c)
	void OnWeakPointStateChanged(class AFortWeakPoint*& WeakPoint, enum EFortWeakPointState& NewState); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeakPointsCoordinatorComponent.OnWeakPointDamaged (Underlying native function: OnWeakPointDamaged 0x900fe88)
	void OnWeakPointDamaged(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& HitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortWeakPointsCoordinatorComponent.OnRep_WeakPoints (Underlying native function: OnRep_WeakPoints 0x900f810)
	void OnRepWeakPoints(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeakPointsCoordinatorComponent.DeactivateAllWeakPointsByTag (Underlying native function: DeactivateAllWeakPointsByTag 0x900d208)
	void DeactivateAllWeakPointsByTag(struct FGameplayTag& WeakPointsTag); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeakPointsCoordinatorComponent.ActivateAllWeakPointsByTag (Underlying native function: ActivateAllWeakPointsByTag 0x900c668)
	void ActivateAllWeakPointsByTag(struct FGameplayTag& WeakPointsTag); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)
};

