// Class /Script/Engine.RuntimeVirtualTextureComponent
// Size: 0x330
class URuntimeVirtualTextureComponent : public USceneComponent
{
	struct TWeakObjectPtr<class AActor> BoundsAlignActor; // 0x2a0 (0x28)
	bool bSetBoundsButton; // 0x2c8 (0x1)
	bool bSnapBoundsToLandscape; // 0x2c9 (0x1)
	unsigned char unreflected_2ca[0x6]; // 0x2ca (0x6) 
	class URuntimeVirtualTexture* VirtualTexture; // 0x2d0 (0x8)
	bool bEnableScalability; // 0x2d8 (0x1)
	unsigned char unreflected_2d9[0x3]; // 0x2d9 (0x3) 
	uint32_t ScalabilityGroup; // 0x2dc (0x4)
	bool bHidePrimitives; // 0x2e0 (0x1)
	unsigned char unreflected_2e1[0x7]; // 0x2e1 (0x7) 
	class UVirtualTextureBuilder* StreamingTexture; // 0x2e8 (0x8)
	int StreamLowMips; // 0x2f0 (0x4)
	bool bBuildStreamingMipsButton; // 0x2f4 (0x1)
	struct TEnumAsByte<ETextureLossyCompressionAmount> LossyCompressionAmount; // 0x2f5 (0x1)
	bool bUseStreamingLowMipsInEditor; // 0x2f6 (0x1)
	bool bBuildDebugStreamingMips; // 0x2f7 (0x1)
	unsigned char padding_2f8[0x38]; // 0x2f8 (0x38)

	/* Functions */

	// Function /Script/Engine.RuntimeVirtualTextureComponent.Invalidate (Underlying native function: Invalidate 0x9d0b0f4)
	void Invalidate(struct FBoxSphereBounds& WorldBounds); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

