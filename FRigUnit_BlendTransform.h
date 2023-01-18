// ScriptStruct /Script/ControlRig.RigUnit_BlendTransform
// Size: 0xe0
struct FRigUnit_BlendTransform : FRigUnit
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform Source; // 0x10 (0x60)
	struct TArray<struct FBlendTarget> Targets; // 0x70 (0x10)
	struct FTransform Result; // 0x80 (0x60)
};

