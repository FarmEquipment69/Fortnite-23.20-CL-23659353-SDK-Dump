// Class /Script/Landscape.LandscapeSplineControlPoint
// Size: 0xd8
class ULandscapeSplineControlPoint : public UObject
{
	struct FVector Location; // 0x28 (0x18)
	struct FRotator Rotation; // 0x40 (0x18)
	float Width; // 0x58 (0x4)
	float LayerWidthRatio; // 0x5c (0x4)
	float SideFalloff; // 0x60 (0x4)
	float LeftSideFalloffFactor; // 0x64 (0x4)
	float RightSideFalloffFactor; // 0x68 (0x4)
	float LeftSideLayerFalloffFactor; // 0x6c (0x4)
	float RightSideLayerFalloffFactor; // 0x70 (0x4)
	float EndFalloff; // 0x74 (0x4)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x78 (0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x88 (0x10)
	struct FBox Bounds; // 0x98 (0x38)
	class UControlPointMeshComponent* LocalMeshComponent; // 0xd0 (0x8)
};

