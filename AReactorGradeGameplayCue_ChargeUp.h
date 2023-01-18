// Class /Script/MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp
// Size: 0x9e8
class AReactorGradeGameplayCue_ChargeUp : public AFortGameplayCueNotify_Loop
{
	class AFortPawn* Pawn; // 0x960 (0x8)
	class UFortWeaponFxComponent_ChargeAimLocation* CachedAimLocationComponent; // 0x968 (0x8)
	struct FVector FoundEndPoint; // 0x970 (0x18)
	struct FScalableFloat MinHitDistance; // 0x988 (0x28)
	struct FScalableFloat HitObjectsLimit; // 0x9b0 (0x28)
	unsigned char unreflected_9d8[0x4]; // 0x9d8 (0x4) 
	struct TEnumAsByte<ECollisionChannel> TraceChannel; // 0x9dc (0x1)
	unsigned char padding_9dd[0xb]; // 0x9dd (0xb)

	/* Functions */

	// Function /Script/MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.UpdateAimEndPoint (Underlying native function: UpdateAimEndPoint 0x7295038)
	void UpdateAimEndPoint(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.OnEndPointUpdated (Has no native function)
	void OnEndPointUpdated(struct FVector& FoundPoint); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.GetFoundEndPoint (Underlying native function: GetFoundEndPoint 0x7294c0c)
	struct FVector GetFoundEndPoint(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

