// ScriptStruct /Script/AnimGraphRuntime.AnimNode_LegIK
// Size: 0xf8
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase
{
	float ReachPrecision; // 0xc8 (0x4)
	int MaxIterations; // 0xcc (0x4)
	struct TArray<struct FAnimLegIKDefinition> LegsDefinition; // 0xd0 (0x10)
	unsigned char padding_e0[0x18]; // 0xe0 (0x18)
};

