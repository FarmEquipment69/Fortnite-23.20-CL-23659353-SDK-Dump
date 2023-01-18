// Class /Script/FallTeleportationRuntime.FortFallTeleportComponentBase
// Size: 0x1f0
class UFortFallTeleportComponentBase : public UActorComponent
{
	struct FScalableFloat TeleportEnabled; // 0xa0 (0x28)
	struct FScalableFloat ContinuousTeleportUpdateEnabled; // 0xc8 (0x28)
	struct FScalableFloat ForceTeleportZHeight; // 0xf0 (0x28)
	struct FScalableFloat SphereTraceRadius; // 0x118 (0x28)
	float WalkingLocationUpdateRate; // 0x140 (0x4)
	float ZHeightThresholdCheckRate; // 0x144 (0x4)
	float TeleportZModifier; // 0x148 (0x4)
	float DistanceFromPawnToTraceLocation; // 0x14c (0x4)
	struct TArray<class UClass*> TeleportOnBlocklist; // 0x150 (0x10)
	struct FName NoTeleportActorTag; // 0x160 (0x4)
	unsigned char unreflected_164[0x4]; // 0x164 (0x4) 
	struct FVector SafeManualLocation; // 0x168 (0x18)
	class UClass* TeleportGEClass; // 0x180 (0x8)
	struct FVector TeleportLocation; // 0x188 (0x18)
	struct FVector FallbackLocation; // 0x1a0 (0x18)
	bool bValidFallbackLocation; // 0x1b8 (0x1)
	bool bTeleporting; // 0x1b9 (0x1)
	unsigned char unreflected_1ba[0x2]; // 0x1ba (0x2) 
	int TeleportLimitBeforeFail; // 0x1bc (0x4)
	int TeleportCount; // 0x1c0 (0x4)
	unsigned char unreflected_1c4[0x4]; // 0x1c4 (0x4) 
	class AFortPlayerPawnAthena* OwningPawn; // 0x1c8 (0x8)
	unsigned char padding_1d0[0x20]; // 0x1d0 (0x20)

	/* Functions */

	// Function /Script/FallTeleportationRuntime.FortFallTeleportComponentBase.UpdateLastGroundLocation (Underlying native function: UpdateLastGroundLocation 0x7436a84)
	void UpdateLastGroundLocation(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PrevMovementMode, unsigned char& PreviousCustomMode); // (Final | Native | Protected)

	// Function /Script/FallTeleportationRuntime.FortFallTeleportComponentBase.IsValidActorToTeleportOn (Underlying native function: IsValidActorToTeleportOn 0x74369d0)
	bool IsValidActorToTeleportOn(class AActor*& ActorToTeleportOn); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FallTeleportationRuntime.FortFallTeleportComponentBase.IsTeleportLocationValid (Underlying native function: IsTeleportLocationValid 0x743693c)
	bool IsTeleportLocationValid(struct FVector& LocationToTest); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

