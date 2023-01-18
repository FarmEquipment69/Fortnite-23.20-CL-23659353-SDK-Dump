// ScriptStruct /Script/AnimGraphRuntime.AnimNode_SplineIK
// Size: 0x268
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase
{
	struct FBoneReference StartBone; // 0xc8 (0xc)
	struct FBoneReference EndBone; // 0xd4 (0xc)
	enum ESplineBoneAxis BoneAxis; // 0xe0 (0x1)
	bool bAutoCalculateSpline; // 0xe1 (0x1)
	unsigned char unreflected_e2[0x2]; // 0xe2 (0x2) 
	int PointCount; // 0xe4 (0x4)
	struct TArray<struct FTransform> ControlPoints; // 0xe8 (0x10)
	float Roll; // 0xf8 (0x4)
	float TwistStart; // 0xfc (0x4)
	float TwistEnd; // 0x100 (0x4)
	unsigned char unreflected_104[0x4]; // 0x104 (0x4) 
	struct FAlphaBlend TwistBlend; // 0x108 (0x30)
	float Stretch; // 0x138 (0x4)
	float Offset; // 0x13c (0x4)
	unsigned char padding_140[0x128]; // 0x140 (0x128)
};

