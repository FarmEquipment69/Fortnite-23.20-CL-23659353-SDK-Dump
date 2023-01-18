// ScriptStruct /Script/FullBodyIK.FBIKDebugOption
// Size: 0x80
struct FFBIKDebugOption
{
	bool bDrawDebugHierarchy; // 0x0 (0x1)
	bool bColorAngularMotionStrength; // 0x1 (0x1)
	bool bColorLinearMotionStrength; // 0x2 (0x1)
	bool bDrawDebugAxes; // 0x3 (0x1)
	bool bDrawDebugEffector; // 0x4 (0x1)
	bool bDrawDebugConstraints; // 0x5 (0x1)
	unsigned char unreflected_6[0xa]; // 0x6 (0xa) 
	struct FTransform DrawWorldOffset; // 0x10 (0x60)
	float DrawSize; // 0x70 (0x4)
	unsigned char padding_74[0xc]; // 0x74 (0xc)
};

