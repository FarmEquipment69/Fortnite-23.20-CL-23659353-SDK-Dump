// Class /Script/FortniteGame.FortWeaponCameraAnimation
// Size: 0x48
class UFortWeaponCameraAnimation : public UCameraModifier
{

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponCameraAnimation.UseNativeImplementation (Underlying native function: UseNativeImplementation 0x868cf18)
	bool UseNativeImplementation(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponCameraAnimation.GetInputParams (Has no native function)
	void GetInputParams(float& StartTime, float& PreviousDeltaFOV, float& IntensityTimer, float& TimeBetweenShots); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponCameraAnimation.GetCameraShakeData (Has no native function)
	bool GetCameraShakeData(class UCurveFloat*& RollCurve, class UCurveFloat*& FOVCurve, class UCurveFloat*& RollNoiseCurve, class UCurveFloat*& ContinuousFireIntensityCurve, float& RollNoiseTimescale); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

