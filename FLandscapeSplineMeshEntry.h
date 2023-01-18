// ScriptStruct /Script/Landscape.LandscapeSplineMeshEntry
// Size: 0x58
struct FLandscapeSplineMeshEntry
{
	class UStaticMesh* Mesh; // 0x0 (0x8)
	struct TArray<class UMaterialInterface*> MaterialOverrides; // 0x8 (0x10)
	unsigned char bCenterH; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	struct FVector2D CenterAdjust; // 0x20 (0x10)
	unsigned char bScaleToWidth; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FVector Scale; // 0x38 (0x18)
	struct TEnumAsByte<LandscapeSplineMeshOrientation> Orientation; // 0x50 (0x1)
	struct TEnumAsByte<ESplineMeshAxis> ForwardAxis; // 0x51 (0x1)
	struct TEnumAsByte<ESplineMeshAxis> UpAxis; // 0x52 (0x1)
	unsigned char padding_53[0x5]; // 0x53 (0x5)
};

