// Class /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent
// Size: 0x138
class USpecialEventCursorWeaponComponent : public UFortWeaponComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct FMulticastInlineDelegate OnCursorPawnComponentSet; // 0xa8 (0x10)
	class UClass* CursorPawnComponentClass; // 0xb8 (0x8)
	struct FGameplayTag CursorModeTag; // 0xc0 (0x4)
	bool bAlignFXToCursor; // 0xc4 (0x1)
	unsigned char unreflected_c5[0x3]; // 0xc5 (0x3) 
	class AFortWeapon* OwningWeapon; // 0xc8 (0x8)
	class AFortPlayerPawn* Pawn; // 0xd0 (0x8)
	class USpecialEventCursorPawnComponent* CursorPawnComponent; // 0xd8 (0x8)
	unsigned char padding_e0[0x58]; // 0xe0 (0x58)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnRep_CursorPawnComponent (Underlying native function: OnRep_CursorPawnComponent 0x76c5600)
	void OnRepCursorPawnComponent(); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnPlayImpactFX (Underlying native function: OnPlayImpactFX 0x76c5028)
	void OnPlayImpactFX(class AFortWeapon*& Weapon, struct FHitResult& HitResult, class UFXSystemComponent*& FXSystemComponent); // (Final | Native | Private | HasOutParms)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnGetAimRotOverride (Underlying native function: OnGetAimRotOverride 0x76c4390)
	void OnGetAimRotOverride(class AFortWeapon*& Weapon, enum EFortAbilityTargetingSource& TargetingSource, struct FRotator& OutOverride, bool& bOutExecutionResult); // (Final | Native | Private | HasOutParms | HasDefaults)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnBeamFired (Underlying native function: OnBeamFired 0x76c4008)
	void OnBeamFired(class AFortWeapon*& Weapon, bool& bUsePersistentBeam, class UFXSystemComponent*& PSC, struct FVector& BeamOrigin, struct FVector& HitLocation); // (Final | Native | Private | HasOutParms | HasDefaults)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetSpecialEventCursorPawnComponentForWeapon (Underlying native function: GetSpecialEventCursorPawnComponentForWeapon 0x76c2ed4)
	static class USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponentForWeapon(class AFortWeapon*& Weapon); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetSpecialEventCursorPawnComponentForCurrentWeapon (Underlying native function: GetSpecialEventCursorPawnComponentForCurrentWeapon 0x76c2e44)
	static class USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponentForCurrentWeapon(class AFortPlayerPawn*& Pawn); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCursorPawnComponent (Underlying native function: GetCursorPawnComponent 0x76c248c)
	class USpecialEventCursorPawnComponent* GetCursorPawnComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCurrentSpecialEventCursorWeaponComponent (Underlying native function: GetCurrentSpecialEventCursorWeaponComponent 0x76c2300)
	static class USpecialEventCursorWeaponComponent* GetCurrentSpecialEventCursorWeaponComponent(class AFortPlayerPawn*& Pawn); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCurrentHitResult (Underlying native function: GetCurrentHitResult 0x76c2240)
	bool GetCurrentHitResult(struct FHitResult& OutHitResult); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable | Const)
};

