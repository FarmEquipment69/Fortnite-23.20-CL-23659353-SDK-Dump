// Class /Script/FortniteGame.CustomCharacterPartAnimInstance_ClockBackpack_M
// Size: 0x840
class UCustomCharacterPartAnimInstance_ClockBackpack_M : public UCustomCharacterPartAnimInstance
{
	struct FVector BoneAPosition; // 0x6e8 (0x18)
	float AimOffsetMultiplier; // 0x700 (0x4)
	unsigned char unreflected_704[0x4]; // 0x704 (0x4) 
	struct FRotator BackpackRotator; // 0x708 (0x18)
	struct FName BackpackRotatorBoneName; // 0x720 (0x4)
	struct FName BackpackRotatorBaseName; // 0x724 (0x4)
	struct FVector2D BackpackRotatorMapInputRange; // 0x728 (0x10)
	struct FVector2D BackpackRotatorMapOutputRange; // 0x738 (0x10)
	struct FRotator PendulumRotator; // 0x748 (0x18)
	float PendulumFrequency; // 0x760 (0x4)
	float PendulumAmplitude; // 0x764 (0x4)
	float PendulumDynamicsAlpha; // 0x768 (0x4)
	float PendulumDynamicsSpeedThreshold; // 0x76c (0x4)
	float PendulumDynamicsCrouchWalkAlpha; // 0x770 (0x4)
	unsigned char unreflected_774[0x4]; // 0x774 (0x4) 
	struct FVector2D PendulumDynamicsSpeedMapInputRange; // 0x778 (0x10)
	struct FVector2D PendulumDynamicsSpeedMapOutputRange; // 0x788 (0x10)
	struct FRotator HourHandRotator; // 0x798 (0x18)
	float HourHandPitchMultiplier; // 0x7b0 (0x4)
	unsigned char unreflected_7b4[0x4]; // 0x7b4 (0x4) 
	struct FRotator MinuteHandRotator; // 0x7b8 (0x18)
	float MinuteHandPitchMultiplier; // 0x7d0 (0x4)
	bool bIsCuckooOut; // 0x7d4 (0x1)
	bool bCuckooOutOnKillRequested; // 0x7d5 (0x1)
	unsigned char unreflected_7d6[0x2]; // 0x7d6 (0x2) 
	float CuckooDynamicsAlpha; // 0x7d8 (0x4)
	float CuckooOutTimeRemaining; // 0x7dc (0x4)
	float CuckooOutDurationOnKill; // 0x7e0 (0x4)
	float CuckooOutDurationInFrontEnd; // 0x7e4 (0x4)
	int CuckooFrontEndInterval; // 0x7e8 (0x4)
	unsigned char unreflected_7ec[0x4]; // 0x7ec (0x4) 
	struct FVector CurrentLlamaScale; // 0x7f0 (0x18)
	struct FVector DefaultLlamaScale; // 0x808 (0x18)
	struct FVector CuckooOutLlamaScale; // 0x820 (0x18)
	float DefaultLlamaScaleInterpSpeed; // 0x838 (0x4)
	float CuckooOutLlamaScaleInterpSpeed; // 0x83c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_ClockBackpack_M.PopOutCuckooOnKill (Underlying native function: PopOutCuckooOnKill 0x8815d18)
	void PopOutCuckooOnKill(); // (Final | Native | Public | BlueprintCallable)
};

