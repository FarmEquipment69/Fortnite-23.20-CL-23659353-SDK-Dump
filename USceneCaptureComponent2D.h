// Class /Script/Engine.SceneCaptureComponent2D
// Size: 0xb50
class USceneCaptureComponent2D : public USceneCaptureComponent
{
	struct TEnumAsByte<ECameraProjectionMode> ProjectionType; // 0x358 (0x1)
	unsigned char unreflected_359[0x3]; // 0x359 (0x3) 
	float FOVAngle; // 0x35c (0x4)
	float OrthoWidth; // 0x360 (0x4)
	unsigned char unreflected_364[0x4]; // 0x364 (0x4) 
	class UTextureRenderTarget2D* TextureTarget; // 0x368 (0x8)
	struct TEnumAsByte<ESceneCaptureCompositeMode> CompositeMode; // 0x370 (0x1)
	unsigned char unreflected_371[0xf]; // 0x371 (0xf) 
	struct FPostProcessSettings PostProcessSettings; // 0x380 (0x6e0)
	float PostProcessBlendWeight; // 0xa60 (0x4)
	unsigned char bOverrideCustomNearClippingPlane; // 0xa64 (0x1)
	unsigned char unreflected_a65[0x3]; // 0xa65 (0x3) 
	float CustomNearClippingPlane; // 0xa68 (0x4)
	bool bUseCustomProjectionMatrix; // 0xa6c (0x1)
	unsigned char unreflected_a6d[0x3]; // 0xa6d (0x3) 
	struct FMatrix CustomProjectionMatrix; // 0xa70 (0x80)
	bool bUseFauxOrthoViewPos; // 0xaf0 (0x1)
	bool bEnableOrthographicTiling; // 0xaf1 (0x1)
	unsigned char unreflected_af2[0x2]; // 0xaf2 (0x2) 
	int NumXTiles; // 0xaf4 (0x4)
	int NumYTiles; // 0xaf8 (0x4)
	bool bEnableClipPlane; // 0xafc (0x1)
	unsigned char unreflected_afd[0x3]; // 0xafd (0x3) 
	struct FVector ClipPlaneBase; // 0xb00 (0x18)
	struct FVector ClipPlaneNormal; // 0xb18 (0x18)
	unsigned char bCameraCutThisFrame; // 0xb30 (0x1)
	unsigned char bConsiderUnrenderedOpaquePixelAsFullyTranslucent; // 0xb30 (0x1)
	unsigned char padding_b31[0x1f]; // 0xb31 (0x1f)

	/* Functions */

	// Function /Script/Engine.SceneCaptureComponent2D.RemoveBlendable (Underlying native function: RemoveBlendable 0x9c1aa80)
	void RemoveBlendable(struct TScriptInterface<class IBlendableInterface>& InBlendableObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneCaptureComponent2D.CaptureScene (Underlying native function: CaptureScene 0x9c18e38)
	void CaptureScene(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneCaptureComponent2D.AddOrUpdateBlendable (Underlying native function: AddOrUpdateBlendable 0x9c18d5c)
	void AddOrUpdateBlendable(struct TScriptInterface<class IBlendableInterface>& InBlendableObject, float& InWeight); // (Final | Native | Public | BlueprintCallable)
};

