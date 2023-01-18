// Class /Script/Procedural.ProceduralScatterStaticMeshContentVariation
// Size: 0x168
class UProceduralScatterStaticMeshContentVariation : public UProceduralScatterContentVariation
{
	enum EProceduralScatterStaticMeshMode StaticMeshMode; // 0xe8 (0x1)
	unsigned char unreflected_e9[0x7]; // 0xe9 (0x7) 
	class UStaticMesh* Mesh; // 0xf0 (0x8)
	class UClass* ActorClass; // 0xf8 (0x8)
	struct TArray<class UMaterialInterface*> OverrideMaterials; // 0x100 (0x10)
	class UHISMBuilderSettings* OverrideInstancingSettings; // 0x110 (0x8)
	unsigned char padding_118[0x50]; // 0x118 (0x50)
};

