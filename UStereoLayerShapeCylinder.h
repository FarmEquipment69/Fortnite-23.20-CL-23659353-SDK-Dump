// Class /Script/Engine.StereoLayerShapeCylinder
// Size: 0x38
class UStereoLayerShapeCylinder : public UStereoLayerShape
{
	float Radius; // 0x28 (0x4)
	float OverlayArc; // 0x2c (0x4)
	int Height; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)

	/* Functions */

	// Function /Script/Engine.StereoLayerShapeCylinder.SetRadius (Underlying native function: SetRadius 0x9c1e834)
	void SetRadius(float& InRadius); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.StereoLayerShapeCylinder.SetOverlayArc (Underlying native function: SetOverlayArc 0x9c1e668)
	void SetOverlayArc(float& InOverlayArc); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.StereoLayerShapeCylinder.SetHeight (Underlying native function: SetHeight 0x9c1e544)
	void SetHeight(int& InHeight); // (Final | Native | Public | BlueprintCallable)
};

