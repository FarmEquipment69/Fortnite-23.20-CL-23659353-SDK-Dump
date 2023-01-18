// Class /Script/Engine.StereoLayerComponent
// Size: 0x430
class UStereoLayerComponent : public USceneComponent
{
	unsigned char bLiveTexture; // 0x2a0 (0x1)
	unsigned char bSupportsDepth; // 0x2a0 (0x1)
	unsigned char bNoAlphaChannel; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x7]; // 0x2a1 (0x7) 
	class UTexture* Texture; // 0x2a8 (0x8)
	class UTexture* LeftTexture; // 0x2b0 (0x8)
	unsigned char bQuadPreserveTextureRatio; // 0x2b8 (0x1)
	unsigned char unreflected_2b9[0x7]; // 0x2b9 (0x7) 
	struct FVector2D QuadSize; // 0x2c0 (0x10)
	struct FBox2D UVRect; // 0x2d0 (0x28)
	float CylinderRadius; // 0x2f8 (0x4)
	float CylinderOverlayArc; // 0x2fc (0x4)
	int CylinderHeight; // 0x300 (0x4)
	unsigned char unreflected_304[0x4]; // 0x304 (0x4) 
	struct FEquirectProps EquirectProps; // 0x308 (0x90)
	struct TEnumAsByte<EStereoLayerType> StereoLayerType; // 0x398 (0x1)
	struct TEnumAsByte<EStereoLayerShape> StereoLayerShape; // 0x399 (0x1)
	unsigned char unreflected_39a[0x6]; // 0x39a (0x6) 
	class UStereoLayerShape* Shape; // 0x3a0 (0x8)
	int Priority; // 0x3a8 (0x4)
	unsigned char padding_3ac[0x84]; // 0x3ac (0x84)

	/* Functions */

	// Function /Script/Engine.StereoLayerComponent.SetUVRect (Underlying native function: SetUVRect 0x9c1e960)
	void SetUVRect(struct FBox2D& InUVRect); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.StereoLayerComponent.SetTexture (Underlying native function: SetTexture 0x9c1e8d0)
	void SetTexture(class UTexture*& InTexture); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.StereoLayerComponent.SetQuadSize (Underlying native function: SetQuadSize 0x9c1e790)
	void SetQuadSize(struct FVector2D& InQuadSize); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.StereoLayerComponent.SetPriority (Underlying native function: SetPriority 0x9c1e704)
	void SetPriority(int& InPriority); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.StereoLayerComponent.SetLeftTexture (Underlying native function: SetLeftTexture 0x9c1e5d8)
	void SetLeftTexture(class UTexture*& InTexture); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.StereoLayerComponent.SetEquirectProps (Underlying native function: SetEquirectProps 0x9c1e374)
	void SetEquirectProps(struct FEquirectProps& InScaleBiases); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.StereoLayerComponent.MarkTextureForUpdate (Underlying native function: MarkTextureForUpdate 0x9c1e35c)
	void MarkTextureForUpdate(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.StereoLayerComponent.GetUVRect (Underlying native function: GetUVRect 0x9c1e328)
	struct FBox2D GetUVRect(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StereoLayerComponent.GetTexture (Underlying native function: GetTexture 0x2384678)
	class UTexture* GetTexture(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StereoLayerComponent.GetQuadSize (Underlying native function: GetQuadSize 0x9c1e2e8)
	struct FVector2D GetQuadSize(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StereoLayerComponent.GetPriority (Underlying native function: GetPriority 0x88a120c)
	int GetPriority(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StereoLayerComponent.GetLeftTexture (Underlying native function: GetLeftTexture 0x9c1e2d0)
	class UTexture* GetLeftTexture(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

