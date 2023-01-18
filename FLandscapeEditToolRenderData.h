// ScriptStruct /Script/Landscape.LandscapeEditToolRenderData
// Size: 0x38
struct FLandscapeEditToolRenderData
{
	class UMaterialInterface* ToolMaterial; // 0x0 (0x8)
	class UMaterialInterface* GizmoMaterial; // 0x8 (0x8)
	int SelectedType; // 0x10 (0x4)
	int DebugChannelR; // 0x14 (0x4)
	int DebugChannelG; // 0x18 (0x4)
	int DebugChannelB; // 0x1c (0x4)
	class UTexture2D* DataTexture; // 0x20 (0x8)
	class UTexture2D* LayerContributionTexture; // 0x28 (0x8)
	class UTexture2D* DirtyTexture; // 0x30 (0x8)
};

