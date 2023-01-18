// Class /Script/FortniteGame.FortSpectatorCameraComponent
// Size: 0xbb0
class UFortSpectatorCameraComponent : public UCineCameraComponent
{
	class AFortPlayerControllerSpectating* SpectatorController; // 0xb40 (0x8)
	struct TWeakObjectPtr<class AActor> IntendedViewTarget; // 0xb48 (0x8)
	class UFortSpectateBlend* CurrentBlend; // 0xb50 (0x8)
	unsigned char unreflected_b58[0x8]; // 0xb58 (0x8) 
	class UCurveVector* ScreenFringeFOVCurve; // 0xb60 (0x8)
	float ZoomRate; // 0xb68 (0x4)
	float FocalLengthInterpSpeed; // 0xb6c (0x4)
	unsigned char padding_b70[0x40]; // 0xb70 (0x40)

	/* Functions */

	// Function /Script/FortniteGame.FortSpectatorCameraComponent.OnFocalLengthSettingChanged (Underlying native function: OnFocalLengthSettingChanged 0x8e5fa20)
	void OnFocalLengthSettingChanged(float& NewFocalLength); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortSpectatorCameraComponent.OnApertureSettingChanged (Underlying native function: OnApertureSettingChanged 0x8e5f99c)
	void OnApertureSettingChanged(float& NewAperture); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortSpectatorCameraComponent.GetAutoCameraCutDistanceThreshold (Underlying native function: GetAutoCameraCutDistanceThreshold 0x8e5e2d0)
	float GetAutoCameraCutDistanceThreshold(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

