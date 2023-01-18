// ScriptStruct /Script/FortniteGame.FortItemViewSettings
// Size: 0x50
struct FFortItemViewSettings
{
	bool UsesPlacementActor; // 0x0 (0x1)
	bool UsesFixedCamera; // 0x1 (0x1)
	bool SupportsZooming; // 0x2 (0x1)
	unsigned char unreflected_3[0x1]; // 0x3 (0x1) 
	float DefaultZoomLevel; // 0x4 (0x4)
	struct FFloatRange ZoomRange; // 0x8 (0x10)
	enum EFortItemViewRotationMode RotationMode; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	struct FRotator CameraRotationOffset; // 0x20 (0x18)
	struct FVector MeshBoundsCenterOffset; // 0x38 (0x18)
};

