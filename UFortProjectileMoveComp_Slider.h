// Class /Script/FortniteGame.FortProjectileMoveComp_Slider
// Size: 0x420
class UFortProjectileMoveComp_Slider : public UFortProjectileMovementComponent
{
	unsigned char bWhenLimitingVelocityFavorZ; // 0x3d8 (0x1)
	unsigned char bSuspensionEnabledUp; // 0x3d8 (0x1)
	unsigned char bSuspensionEnabledDown; // 0x3d8 (0x1)
	unsigned char unreflected_3d9[0x3]; // 0x3d9 (0x3) 
	float SuspensionTensionToSpeedScalar; // 0x3dc (0x4)
	float SuspensionTensionBuildUpExponent; // 0x3e0 (0x4)
	float SuspensionTensionEqualizeSpeed; // 0x3e4 (0x4)
	float SuspensionTensionMax; // 0x3e8 (0x4)
	unsigned char padding_3ec[0x34]; // 0x3ec (0x34)

	/* Functions */

	// Function /Script/FortniteGame.FortProjectileMoveComp_Slider.ZeroOutSuspensionTension (Underlying native function: ZeroOutSuspensionTension 0x8703ff0)
	void ZeroOutSuspensionTension(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileMoveComp_Slider.SetSuspensionEnabled (Underlying native function: SetSuspensionEnabled 0x8703614)
	void SetSuspensionEnabled(bool& bInEnableSuspensionUp, bool& bInEnableSuspensionDown); // (Final | Native | Public | BlueprintCallable)
};

