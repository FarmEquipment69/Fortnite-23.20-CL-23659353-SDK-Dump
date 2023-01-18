// Class /Script/FortniteGame.CCP_AnimInstance_Backpack_Downpour
// Size: 0x930
class UCCP_AnimInstance_Backpack_Downpour : public UCustomCharacterPartAnimInstance
{
	struct FCCP_Backpack_Downpour_AmbientMovementSettings Spike1TranslationSettings; // 0x6e8 (0x48)
	struct FCCP_Backpack_Downpour_AmbientMovementSettings Spike2TranslationSettings; // 0x730 (0x48)
	struct FCCP_Backpack_Downpour_AmbientMovementSettings Spike3TranslationSettings; // 0x778 (0x48)
	struct FCCP_Backpack_Downpour_AmbientMovementSettings Spike1RotationSettings; // 0x7c0 (0x48)
	struct FCCP_Backpack_Downpour_AmbientMovementSettings Spike2RotationSettings; // 0x808 (0x48)
	struct FCCP_Backpack_Downpour_AmbientMovementSettings Spike3RotationSettings; // 0x850 (0x48)
	struct FVector AmbientTransSpike1; // 0x898 (0x18)
	struct FVector AmbientTransSpike2; // 0x8b0 (0x18)
	struct FVector AmbientTransSpike3; // 0x8c8 (0x18)
	struct FRotator AmbientRotSpike1; // 0x8e0 (0x18)
	struct FRotator AmbientRotSpike2; // 0x8f8 (0x18)
	struct FRotator AmbientRotSpike3; // 0x910 (0x18)
	unsigned char padding_928[0x8]; // 0x928 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.CCP_AnimInstance_Backpack_Downpour.AmbientMovementEx (Underlying native function: AmbientMovementEx 0x881480c)
	void AmbientMovementEx(struct FVector& VectorOut, struct FRotator& RotateOut, float& TimeOffset, struct FVector& Period, struct FVector& Magnitude, float& PeriodMultiplier, float& MagnitudeMultiplier, float& RotateMultiplier); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CCP_AnimInstance_Backpack_Downpour.AmbientMovement (Underlying native function: AmbientMovement 0x8814634)
	void AmbientMovement(struct FVector& VectorOut, struct FRotator& RotateOut, struct FCCP_Backpack_Downpour_AmbientMovementSettings& Settings); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

