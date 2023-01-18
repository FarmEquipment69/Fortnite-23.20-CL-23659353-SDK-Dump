// ScriptStruct /Script/ControlRig.RigUnit_AimItem_Target
// Size: 0x48
struct FRigUnit_AimItem_Target
{
	float Weight; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector Axis; // 0x8 (0x18)
	struct FVector Target; // 0x20 (0x18)
	enum EControlRigVectorKind Kind; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	struct FRigElementKey* Space; // 0x3c (0x8)
	unsigned char padding_44[0x4]; // 0x44 (0x4)
};

