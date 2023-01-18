// ScriptStruct /Script/Engine.PrimitiveComponentInstanceData
// Size: 0x130
struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData
{
	unsigned char unreflected_b8[0x8]; // 0xb8 (0x8) 
	struct FTransform ComponentTransform; // 0xc0 (0x60)
	int VisibilityId; // 0x120 (0x4)
	unsigned char unreflected_124[0x4]; // 0x124 (0x4) 
	class UPrimitiveComponent* LODParent; // 0x128 (0x8)
};

