// ScriptStruct /Script/ControlRig.RigUnit_Control
// Size: 0x180
struct FRigUnit_Control : FRigUnit
{
	struct FEulerTransform Transform; // 0x8 (0x48)
	struct FTransform Base; // 0x50 (0x60)
	struct FTransform InitTransform; // 0xb0 (0x60)
	struct FTransform Result; // 0x110 (0x60)
	struct FTransformFilter Filter; // 0x170 (0x9)
	unsigned char padding_179[0x7]; // 0x179 (0x7)
};

