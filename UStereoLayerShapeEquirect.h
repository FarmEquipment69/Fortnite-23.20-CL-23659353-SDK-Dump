// Class /Script/Engine.StereoLayerShapeEquirect
// Size: 0xb8
class UStereoLayerShapeEquirect : public UStereoLayerShape
{
	struct FBox2D LeftUVRect; // 0x28 (0x28)
	struct FBox2D RightUVRect; // 0x50 (0x28)
	struct FVector2D LeftScale; // 0x78 (0x10)
	struct FVector2D RightScale; // 0x88 (0x10)
	struct FVector2D LeftBias; // 0x98 (0x10)
	struct FVector2D RightBias; // 0xa8 (0x10)

	/* Functions */

	// Function /Script/Engine.StereoLayerShapeEquirect.SetEquirectProps (Underlying native function: SetEquirectProps 0x9c1e45c)
	void SetEquirectProps(struct FEquirectProps& InScaleBiases); // (Final | Native | Public | BlueprintCallable)
};

