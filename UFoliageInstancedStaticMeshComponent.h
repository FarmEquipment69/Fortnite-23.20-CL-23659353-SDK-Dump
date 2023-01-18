// Class /Script/Foliage.FoliageInstancedStaticMeshComponent
// Size: 0x910
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
	struct FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x8d8 (0x10)
	struct FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x8e8 (0x10)
	bool bEnableDiscardOnLoad; // 0x8f8 (0x1)
	unsigned char unreflected_8f9[0x3]; // 0x8f9 (0x3) 
	struct FGuid GenerationGuid; // 0x8fc (0x10)
	unsigned char padding_90c[0x4]; // 0x90c (0x4)
};

