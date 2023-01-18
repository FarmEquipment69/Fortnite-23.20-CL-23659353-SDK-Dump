// ScriptStruct /Script/ControlRig.RigPreferredEulerAngles
// Size: 0x38
struct FRigPreferredEulerAngles
{
	enum EEulerRotationOrder RotationOrder; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FVector Current; // 0x8 (0x18)
	struct FVector Initial; // 0x20 (0x18)
};

