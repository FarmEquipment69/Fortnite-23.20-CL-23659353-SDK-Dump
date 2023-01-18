// ScriptStruct /Script/AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// Size: 0x168
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase
{
	struct FReferenceBoneFrame BaseFrame; // 0xc8 (0x30)
	struct FReferenceBoneFrame TwistFrame; // 0xf8 (0x30)
	struct FAxis TwistPlaneNormalAxis; // 0x128 (0x20)
	float RangeMax; // 0x148 (0x4)
	float RemappedMin; // 0x14c (0x4)
	float RemappedMax; // 0x150 (0x4)
	struct FAnimCurveParam* Curve; // 0x154 (0x8)
	unsigned char padding_15c[0xc]; // 0x15c (0xc)
};

