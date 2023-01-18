// ScriptStruct /Script/ControlRig.RigTransformElement
// Size: 0x2f0
struct FRigTransformElement : FRigBaseElement
{
	unsigned char unreflected_e8[0x8]; // 0xe8 (0x8) 
	struct FRigCurrentAndInitialTransform Pose; // 0xf0 (0x1c0)
	unsigned char padding_2b0[0x40]; // 0x2b0 (0x40)
};

