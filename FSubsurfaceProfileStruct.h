// ScriptStruct /Script/Engine.SubsurfaceProfileStruct
// Size: 0x9c
struct FSubsurfaceProfileStruct
{
	struct FLinearColor SurfaceAlbedo; // 0x0 (0x10)
	struct FLinearColor MeanFreePathColor; // 0x10 (0x10)
	float MeanFreePathDistance; // 0x20 (0x4)
	float WorldUnitScale; // 0x24 (0x4)
	bool bEnableBurley; // 0x28 (0x1)
	bool bEnableMeanFreePath; // 0x29 (0x1)
	unsigned char unreflected_2a[0x2]; // 0x2a (0x2) 
	struct FLinearColor Tint; // 0x2c (0x10)
	float ScatterRadius; // 0x3c (0x4)
	struct FLinearColor SubsurfaceColor; // 0x40 (0x10)
	struct FLinearColor FalloffColor; // 0x50 (0x10)
	struct FLinearColor BoundaryColorBleed; // 0x60 (0x10)
	float ExtinctionScale; // 0x70 (0x4)
	float NormalScale; // 0x74 (0x4)
	float ScatteringDistribution; // 0x78 (0x4)
	float IOR; // 0x7c (0x4)
	float Roughness0; // 0x80 (0x4)
	float Roughness1; // 0x84 (0x4)
	float LobeMix; // 0x88 (0x4)
	struct FLinearColor TransmissionTintColor; // 0x8c (0x10)
};

