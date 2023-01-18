// ScriptStruct /Script/ControlRig.RigUnit_DebugTransformArrayMutable
// Size: 0xf0
struct FRigUnit_DebugTransformArrayMutable : FRigUnit_DebugBaseMutable
{
	struct TArray<struct FTransform> Transforms; // 0x38 (0x10)
	enum ERigUnitDebugTransformMode Mode; // 0x48 (0x1)
	unsigned char unreflected_49[0x3]; // 0x49 (0x3) 
	struct FLinearColor Color; // 0x4c (0x10)
	float Thickness; // 0x5c (0x4)
	float Scale; // 0x60 (0x4)
	struct FName Space; // 0x64 (0x4)
	unsigned char unreflected_68[0x8]; // 0x68 (0x8) 
	struct FTransform WorldOffset; // 0x70 (0x60)
	bool bEnabled; // 0xd0 (0x1)
	unsigned char unreflected_d1[0x7]; // 0xd1 (0x7) 
	struct FRigUnit_DebugTransformArrayMutable_WorkData WorkData; // 0xd8 (0x10)
	unsigned char padding_e8[0x8]; // 0xe8 (0x8)
};

