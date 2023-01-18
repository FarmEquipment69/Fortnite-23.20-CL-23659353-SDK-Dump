// Class /Script/FortniteGame.FortWeaponComponent_ScopeAnimation
// Size: 0xe0
class UFortWeaponComponent_ScopeAnimation : public UFortWeaponComponent
{
	struct FGameplayTag TargetingTag; // 0xa0 (0x4)
	float SignificantRotation; // 0xa4 (0x4)
	float SignificantStrafe; // 0xa8 (0x4)
	float XRotOffsetMax; // 0xac (0x4)
	float YRotOffsetMax; // 0xb0 (0x4)
	float XStrafeOffsetMax; // 0xb4 (0x4)
	float InterpSpeed; // 0xb8 (0x4)
	unsigned char padding_bc[0x24]; // 0xbc (0x24)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponComponent_ScopeAnimation.UseNativeCalcScopeOffset (Underlying native function: UseNativeCalcScopeOffset 0x871bf3c)
	bool UseNativeCalcScopeOffset(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponComponent_ScopeAnimation.ResetScopeRotation (Underlying native function: ResetScopeRotation 0x871b83c)
	void ResetScopeRotation(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponComponent_ScopeAnimation.CalcScopeOffset (Underlying native function: CalcScopeOffset 0x87199b4)
	void CalcScopeOffset(float& DeltaSeconds, float& XRecoilOffset, float& YRecoilOffset, float& XADSOffset, float& YADSOffset, float& OutScopeCameraOffsetX, float& OutScopeCameraOffsetY); // (Final | Native | Protected | HasOutParms | BlueprintCallable)
};

