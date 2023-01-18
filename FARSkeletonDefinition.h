// ScriptStruct /Script/AugmentedReality.ARSkeletonDefinition
// Size: 0x28
struct FARSkeletonDefinition
{
	int NumJoints; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FName> JointNames; // 0x8 (0x10)
	struct TArray<int> ParentIndices; // 0x18 (0x10)
};

