// Class /Script/FortniteGame.FortPetAnimInstance_HighTowerRadish
// Size: 0x960
class UFortPetAnimInstance_HighTowerRadish : public UFortPetAnimInstance
{
	class UFortPlayerAnimInstance* OwnerAnimBP; // 0x728 (0x8)
	struct FVector BodyOffsetTotal; // 0x730 (0x18)
	float OwnerLocomotionDirection; // 0x748 (0x4)
	float OwnerLocomotionSpeed; // 0x74c (0x4)
	bool StoppedMovingOrMeleeForLongEnoughTime; // 0x750 (0x1)
	bool bPetUnderwater; // 0x751 (0x1)
	bool HighTowerRadishLobbySkyDiveDiving; // 0x752 (0x1)
	bool HighTowerRadishLobbySkyDiveGliding; // 0x753 (0x1)
	bool FrontEndIdleTransition; // 0x754 (0x1)
	unsigned char unreflected_755[0x3]; // 0x755 (0x3) 
	float AdditiveTransitionCurve; // 0x758 (0x4)
	float LeftHandIKCurve; // 0x75c (0x4)
	float TurnOffLeans; // 0x760 (0x4)
	float OffsetRootYawFractioned; // 0x764 (0x4)
	float OffsetRootYawSmooth; // 0x768 (0x4)
	bool bIsPlayingEmoteExtra; // 0x76c (0x1)
	bool bIsInVehicle; // 0x76d (0x1)
	unsigned char unreflected_76e[0x2]; // 0x76e (0x2) 
	float InVehicle; // 0x770 (0x4)
	unsigned char unreflected_774[0x3c]; // 0x774 (0x3c) 
	bool bIsSkydivingFE; // 0x7b0 (0x1)
	bool bSlowDownInterp; // 0x7b1 (0x1)
	bool bPetUnderWaterAndNotTargeting; // 0x7b2 (0x1)
	bool bIsOwnerPlayingMeleeAnim; // 0x7b3 (0x1)
	bool bIsSkydivingInGameOrIsParachuteOpen; // 0x7b4 (0x1)
	unsigned char unreflected_7b5[0x3]; // 0x7b5 (0x3) 
	struct FFortPetOffsets BodyOffsetsFromPlayer; // 0x7b8 (0x150)
	struct FVector BodyOffsetWhenSkydivingFE; // 0x908 (0x18)
	struct FVector BodyOffsetWhenNotSkydivingFE; // 0x920 (0x18)
	float BodyOffsetSpringMass; // 0x938 (0x4)
	unsigned char unreflected_93c[0x4]; // 0x93c (0x4) 
	struct FVector BodyOffsetSpringLagFactor; // 0x940 (0x18)
	unsigned char padding_958[0x8]; // 0x958 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPetAnimInstance_HighTowerRadish.OnExitedVehicle (Has no native function)
	void OnExitedVehicle(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPetAnimInstance_HighTowerRadish.OnEnteredVehicle (Has no native function)
	void OnEnteredVehicle(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPetAnimInstance_HighTowerRadish.IsTurningSharply (Underlying native function: IsTurningSharply 0x8844854)
	bool IsTurningSharply(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

