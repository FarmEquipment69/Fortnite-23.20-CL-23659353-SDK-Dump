// ScriptStruct /Script/Engine.HLODProxyMesh
// Size: 0x30
struct FHLODProxyMesh
{
	struct TLazyObjectPtr<class ALODActor> LODActor; // 0x0 (0x1c)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	class UStaticMesh* StaticMesh; // 0x20 (0x8)
	struct FName Key; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

