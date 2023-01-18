// Class /Script/FortniteGame.FortFloatingPetAnimInstance
// Size: 0xcf0
class UFortFloatingPetAnimInstance : public UCustomCharacterPartAnimInstance
{
	class AFortPlayerPawn* FortPlayerPawn; // 0x6e8 (0x8)
	class USkeletalMeshComponent* PawnSkeletalMesh; // 0x6f0 (0x8)
	struct FFortFloatingPetTranslationStateOffsets PetTranslationStateOffsets; // 0x6f8 (0x1b0)
	struct FFortFloatingPetRotationStateOffsets PetRotationStateOffsets; // 0x8a8 (0x10)
	struct FFortFloatingPetSimpleControls SpringSimpleControls; // 0x8b8 (0x20)
	struct FFortFloatingPetAdvancedControls SpringAdvancedControls; // 0x8d8 (0x208)
	struct FVector CarrierOffsetTotal; // 0xae0 (0x18)
	struct FVector BackpackTargetVector; // 0xaf8 (0x18)
	struct FRotator RotationYawDefinedHoverOffset; // 0xb10 (0x18)
	struct FRotator CarrierOffsetRotationVelocity; // 0xb28 (0x18)
	struct FRotator HoverRotationOffsetTotal; // 0xb40 (0x18)
	float CarrierOffsetRotationVelocityAlpha; // 0xb58 (0x4)
	float BackpackTargetVectorAlphaSmooth; // 0xb5c (0x4)
	struct FVector LocalVelocityGameplay; // 0xb60 (0x18)
	float VelocityZ; // 0xb78 (0x4)
	float MeleeTwistCurveValue; // 0xb7c (0x4)
	float YawDeltaCurrentTick; // 0xb80 (0x4)
	float LocalVelocityYawAngle; // 0xb84 (0x4)
	float RootYawOffset; // 0xb88 (0x4)
	bool bIsSkydivingParachuteJustOpened; // 0xb8c (0x1)
	bool bForceBackpackTargetVectorAlphaOnFromRecentlyFired; // 0xb8d (0x1)
	bool bIsSkydivingDiving; // 0xb8e (0x1)
	bool bAllowTransitionLocomotionAdditiveCrouchTurning; // 0xb8f (0x1)
	bool bIsDiveJumping; // 0xb90 (0x1)
	bool bHasRecentlyFired; // 0xb91 (0x1)
	bool bIsPlayingAnyEmote; // 0xb92 (0x1)
	bool bIsPlayingEmoteNonPlayerTriggeredMontage; // 0xb93 (0x1)
	bool bIsOperatingTurret; // 0xb94 (0x1)
	unsigned char unreflected_b95[0x3]; // 0xb95 (0x3) 
	class UAnimMontage* CurrentMontage; // 0xb98 (0x8)
	class UAnimMontage* EmoteNonPlayerTriggerMontage; // 0xba0 (0x8)
	unsigned char padding_ba8[0x148]; // 0xba8 (0x148)

	/* Functions */

	// Function /Script/FortniteGame.FortFloatingPetAnimInstance.UpdateSpringControls (Underlying native function: UpdateSpringControls 0x8246a74)
	void UpdateSpringControls(float& Stiffness, float& StiffnessInterpSpeed, float& StiffnessInterpSpeedSmooth, float& CriticalDampingFactor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFloatingPetAnimInstance.RecentlyFired (Has no native function)
	void RecentlyFired(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortFloatingPetAnimInstance.ParachuteJustOpened (Has no native function)
	void ParachuteJustOpened(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortFloatingPetAnimInstance.MeleeStopped (Has no native function)
	void MeleeStopped(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortFloatingPetAnimInstance.MeleeStarted (Has no native function)
	void MeleeStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortFloatingPetAnimInstance.CrouchStopped (Has no native function)
	void CrouchStopped(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortFloatingPetAnimInstance.CrouchStarted (Has no native function)
	void CrouchStarted(); // (Event | Public | BlueprintEvent)
};

