// Class /Script/Engine.PlanarReflection
// Size: 0x2a8
class APlanarReflection : public ASceneCapture
{
	class UPlanarReflectionComponent* PlanarReflectionComponent; // 0x298 (0x8)
	bool bShowPreviewPlane; // 0x2a0 (0x1)
	unsigned char padding_2a1[0x7]; // 0x2a1 (0x7)

	/* Functions */

	// Function /Script/Engine.PlanarReflection.OnInterpToggle (Underlying native function: OnInterpToggle 0x9c144d4)
	void OnInterpToggle(bool& bEnable); // (Final | Native | Public | BlueprintCallable)
};

