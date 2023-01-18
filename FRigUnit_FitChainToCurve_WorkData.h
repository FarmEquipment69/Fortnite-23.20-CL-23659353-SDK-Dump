// ScriptStruct /Script/ControlRig.RigUnit_FitChainToCurve_WorkData
// Size: 0x98
struct FRigUnit_FitChainToCurve_WorkData
{
	float ChainLength; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FVector> ItemPositions; // 0x8 (0x10)
	struct TArray<float> ItemSegments; // 0x18 (0x10)
	struct TArray<struct FVector> CurvePositions; // 0x28 (0x10)
	struct TArray<float> CurveSegments; // 0x38 (0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x48 (0x10)
	struct TArray<int> ItemRotationA; // 0x58 (0x10)
	struct TArray<int> ItemRotationB; // 0x68 (0x10)
	struct TArray<float> ItemRotationT; // 0x78 (0x10)
	struct TArray<struct FTransform> ItemLocalTransforms; // 0x88 (0x10)
};

