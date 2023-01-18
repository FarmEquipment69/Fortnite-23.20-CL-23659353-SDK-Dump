// Class /Script/FortniteGame.CustomCharacterPartAnimInstance_Whiff_Cape
// Size: 0x7d0
class UCustomCharacterPartAnimInstance_Whiff_Cape : public UCustomCharacterPartAnimInstance
{
	float SkydivingVectorForceScalingFactor; // 0x6e8 (0x4)
	unsigned char unreflected_6ec[0x4]; // 0x6ec (0x4) 
	struct FVector DanceYawGravityPositive; // 0x6f0 (0x18)
	struct FVector DanceYawGravityNegative; // 0x708 (0x18)
	struct FVector NonSkyDivingWind; // 0x720 (0x18)
	struct FVector SkydivingScale; // 0x738 (0x18)
	struct FVector NonSkyDivingScale; // 0x750 (0x18)
	bool bIsInTheAir; // 0x768 (0x1)
	unsigned char unreflected_769[0x7]; // 0x769 (0x7) 
	struct FVector WindVector; // 0x770 (0x18)
	struct FVector FinalGravity; // 0x788 (0x18)
	struct FVector CompLinearVelScale; // 0x7a0 (0x18)
	struct FVector CompLinearAccScale; // 0x7b8 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_Whiff_Cape.SetCompLinearScaleForSkydiving (Underlying native function: SetCompLinearScaleForSkydiving 0x882d7a0)
	void SetCompLinearScaleForSkydiving(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_Whiff_Cape.CollectWindVector (Underlying native function: CollectWindVector 0x882ce24)
	void CollectWindVector(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_Whiff_Cape.CollectFinalWindGravity (Underlying native function: CollectFinalWindGravity 0x882ce10)
	void CollectFinalWindGravity(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_Whiff_Cape.CalculateDanceGravity (Underlying native function: CalculateDanceGravity 0x882cd2c)
	struct FVector CalculateDanceGravity(); // (Final | Native | Public | HasDefaults | BlueprintCallable)
};

