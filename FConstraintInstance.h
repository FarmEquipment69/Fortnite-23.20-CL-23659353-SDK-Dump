// ScriptStruct /Script/Engine.ConstraintInstance
// Size: 0x268
struct FConstraintInstance : FConstraintInstanceBase
{
	struct FName JointName; // 0x38 (0x4)
	struct FName ConstraintBone1; // 0x3c (0x4)
	struct FName ConstraintBone2; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FVector Pos1; // 0x48 (0x18)
	struct FVector PriAxis1; // 0x60 (0x18)
	struct FVector SecAxis1; // 0x78 (0x18)
	struct FVector Pos2; // 0x90 (0x18)
	struct FVector PriAxis2; // 0xa8 (0x18)
	struct FVector SecAxis2; // 0xc0 (0x18)
	struct FRotator AngularRotationOffset; // 0xd8 (0x18)
	unsigned char bScaleLinearLimits; // 0xf0 (0x1)
	unsigned char unreflected_f1[0x7]; // 0xf1 (0x7) 
	struct FConstraintProfileProperties ProfileInstance; // 0xf8 (0x160)
	unsigned char padding_258[0x10]; // 0x258 (0x10)
};

