// Class /Script/Water.WaterZone
// Size: 0x318
class AWaterZone : public AActor
{
	class UTextureRenderTarget2D* WaterInfoTexture; // 0x288 (0x8)
	struct TArray<struct TWeakObjectPtr<class UWaterBodyComponent>> OwnedWaterBodies; // 0x290 (0x10)
	struct FIntPoint* RenderTargetResolution; // 0x2a0 (0x8)
	class UWaterMeshComponent* WaterMesh; // 0x2a8 (0x8)
	struct FVector2D ZoneExtent; // 0x2b0 (0x10)
	float CaptureZOffset; // 0x2c0 (0x4)
	bool bHalfPrecisionTexture; // 0x2c4 (0x1)
	unsigned char unreflected_2c5[0x3]; // 0x2c5 (0x3) 
	int VelocityBlurRadius; // 0x2c8 (0x4)
	unsigned char unreflected_2cc[0x4]; // 0x2cc (0x4) 
	struct FVector TessellatedWaterMeshExtent; // 0x2d0 (0x18)
	uint32_t NonTessellatedLODSectionScale; // 0x2e8 (0x4)
	int OverlapPriority; // 0x2ec (0x4)
	bool bEnableNonTessellatedLODMesh; // 0x2f0 (0x1)
	unsigned char padding_2f1[0x27]; // 0x2f1 (0x27)
};

