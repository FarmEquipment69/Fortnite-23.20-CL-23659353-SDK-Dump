// ScriptStruct /Script/ControlRig.RigUnit_SlideChain_WorkData
// Size: 0x48
struct FRigUnit_SlideChain_WorkData
{
	float ChainLength; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<float> ItemSegments; // 0x8 (0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x18 (0x10)
	struct TArray<struct FTransform> Transforms; // 0x28 (0x10)
	struct TArray<struct FTransform> BlendedTransforms; // 0x38 (0x10)
};

