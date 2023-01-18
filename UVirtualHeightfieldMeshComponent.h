// Class /Script/VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
// Size: 0x5c0
class UVirtualHeightfieldMeshComponent : public UPrimitiveComponent
{
	struct TWeakObjectPtr<class ARuntimeVirtualTextureVolume> VirtualTexture; // 0x540 (0x28)
	class ARuntimeVirtualTextureVolume* VirtualTextureRef; // 0x568 (0x8)
	class UObject* VirtualTextureThumbnail; // 0x570 (0x8)
	bool bCopyBoundsButton; // 0x578 (0x1)
	unsigned char unreflected_579[0x7]; // 0x579 (0x7) 
	class UHeightfieldMinMaxTexture* MinMaxTexture; // 0x580 (0x8)
	int NumMinMaxTextureBuildLevels; // 0x588 (0x4)
	bool bBuildMinMaxTextureButton; // 0x58c (0x1)
	unsigned char unreflected_58d[0x3]; // 0x58d (0x3) 
	class UMaterialInterface* Material; // 0x590 (0x8)
	float Lod0ScreenSize; // 0x598 (0x4)
	float Lod0Distribution; // 0x59c (0x4)
	float LodDistribution; // 0x5a0 (0x4)
	float LodBiasScale; // 0x5a4 (0x4)
	int NumForceLoadLods; // 0x5a8 (0x4)
	int NumOcclusionLods; // 0x5ac (0x4)
	bool bHiddenInEditor; // 0x5b0 (0x1)
	unsigned char padding_5b1[0xf]; // 0x5b1 (0xf)

	/* Functions */

	// Function /Script/VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.GatherHideFlags (Underlying native function: GatherHideFlags 0x7f9d058)
	void GatherHideFlags(bool& InOutHidePrimitivesInEditor, bool& InOutHidePrimitivesInGame); // (Final | Native | Protected | HasOutParms | Const)
};

