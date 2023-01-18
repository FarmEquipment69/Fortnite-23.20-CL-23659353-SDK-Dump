// Class /Script/Landscape.LandscapeSplineSegment
// Size: 0xb8
class ULandscapeSplineSegment : public UObject
{
	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28 (0x10) (ARRAY) 
	struct FInterpCurveVector SplineInfo; // 0x48 (0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x60 (0x10)
	struct FBox Bounds; // 0x70 (0x38)
	struct TArray<class USplineMeshComponent*> LocalMeshComponents; // 0xa8 (0x10)
};

