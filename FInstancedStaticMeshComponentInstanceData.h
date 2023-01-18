// ScriptStruct /Script/Engine.InstancedStaticMeshComponentInstanceData
// Size: 0x190
struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData
{
	class UStaticMesh* StaticMesh; // 0xb8 (0x8)
	struct FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xc0 (0x70)
	struct TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x130 (0x10)
	struct TArray<float> PerInstanceSMCustomData; // 0x140 (0x10)
	unsigned char unreflected_150[0x20]; // 0x150 (0x20) 
	int InstancingRandomSeed; // 0x170 (0x4)
	unsigned char unreflected_174[0x4]; // 0x174 (0x4) 
	struct TArray<struct FInstancedStaticMeshRandomSeed*> AdditionalRandomSeeds; // 0x178 (0x10)
	bool bHasPerInstanceHitProxies; // 0x188 (0x1)
	unsigned char padding_189[0x7]; // 0x189 (0x7)
};

