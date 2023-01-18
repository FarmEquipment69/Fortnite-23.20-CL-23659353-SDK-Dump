// Class /Script/FortniteGame.FortAthenaZiplineBase
// Size: 0xa70
class AFortAthenaZiplineBase : public ABuildingGameplayActor
{
	struct TWeakObjectPtr<class AFortPlayerPawn> CachedInteractContextPawn; // 0x9d8 (0x8)
	unsigned char unreflected_9e0[0x10]; // 0x9e0 (0x10) 
	struct FGameplayTag EnterZiplineTag; // 0x9f0 (0x4)
	struct FGameplayTag ExitZiplineTag; // 0x9f4 (0x4)
	struct FScalableFloat ExitZiplineRemoveFromIgnoreWhenMovingTimeDelay; // 0x9f8 (0x28)
	unsigned char padding_a20[0x50]; // 0xa20 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaZiplineBase.UseInteractToEnterZipline (Underlying native function: UseInteractToEnterZipline 0x832fb58)
	bool UseInteractToEnterZipline(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaZiplineBase.ShouldOverrideVelocityDirection (Underlying native function: ShouldOverrideVelocityDirection 0x832f8fc)
	bool ShouldOverrideVelocityDirection(class AFortPlayerPawn*& InteractingPawn, class UPrimitiveComponent*& InteractComponent, float& OutVelocityDirection); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortAthenaZiplineBase.ShouldIgnoreWaterBody (Underlying native function: ShouldIgnoreWaterBody 0x832f830)
	bool ShouldIgnoreWaterBody(class AFortPlayerPawn*& InteractingPawn, class AFortWaterBodyActor*& WaterBody); // (0x00000002 | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortAthenaZiplineBase.OnZipliningStopped (Underlying native function: OnZipliningStopped 0x832f068)
	void OnZipliningStopped(class AFortPlayerPawn*& InteractingPawn, class UPrimitiveComponent*& InteractComponent, float& ZiplineUsageDuration); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaZiplineBase.OnZipliningStarted (Underlying native function: OnZipliningStarted 0x832efa0)
	void OnZipliningStarted(class AFortPlayerPawn*& InteractingPawn, class UPrimitiveComponent*& InteractComponent); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaZiplineBase.IsVariableSpeedEnabled (Underlying native function: IsVariableSpeedEnabled 0x832e768)
	bool IsVariableSpeedEnabled(class AFortPlayerPawn*& InteractingPawn, class UPrimitiveComponent*& InteractComponent); // (0x00000002 | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortAthenaZiplineBase.HandleActorHitWhileMoving (Underlying native function: HandleActorHitWhileMoving 0x832e4f8)
	void HandleActorHitWhileMoving(class AFortPlayerPawn*& InteractingPawn, class AActor*& HitActor, bool& bOutIsHitActorImmobile); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortAthenaZiplineBase.CanBeginZiplining (Underlying native function: CanBeginZiplining 0x832d8a8)
	bool CanBeginZiplining(class AFortPlayerPawn*& InteractingPawn, class UPrimitiveComponent*& InteractComponent); // (0x00000002 | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortAthenaZiplineBase.AuthorityForceEndZiplining (Underlying native function: AuthorityForceEndZiplining 0x832d788)
	void AuthorityForceEndZiplining(class AFortPlayerPawn*& PawnToStop); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaZiplineBase.AttemptOverrideZiplineSocketOffset (Underlying native function: AttemptOverrideZiplineSocketOffset 0x832d620)
	bool AttemptOverrideZiplineSocketOffset(class AFortPlayerPawn*& InteractingPawn, class UPrimitiveComponent*& InteractComponent, struct FVector& BaseSocketOffset, struct FVector& OutSocketOffset); // (0x00000002 | Native | Event | Public | HasOutParms | HasDefaults | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortAthenaZiplineBase.AttempOverrideLaunch (Underlying native function: AttempOverrideLaunch 0x832d47c)
	bool AttempOverrideLaunch(class AFortPlayerPawn*& InteractingPawn, class UPrimitiveComponent*& InteractComponent, bool& bJumped, bool& bReachedEnd, struct FVector& CurrentVelocity); // (0x00000002 | Native | Event | Public | HasOutParms | HasDefaults | BlueprintEvent | Const)
};

