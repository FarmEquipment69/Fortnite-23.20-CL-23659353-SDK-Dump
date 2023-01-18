// ScriptStruct /Script/ControlRig.RigUnit_DebugTransformArrayMutableItemSpace
// Size: 0xf0
struct FRigUnit_DebugTransformArrayMutableItemSpace : FRigUnit_DebugBaseMutable
{
	struct TArray<struct FTransform> Transforms; // 0x38 (0x10)
	struct TArray<int> ParentIndices; // 0x48 (0x10)
	enum ERigUnitDebugTransformMode Mode; // 0x58 (0x1)
	unsigned char unreflected_59[0x3]; // 0x59 (0x3) 
	struct FLinearColor Color; // 0x5c (0x10)
	float Thickness; // 0x6c (0x4)
	float Scale; // 0x70 (0x4)
	struct FRigElementKey* Space; // 0x74 (0x8)
	unsigned char unreflected_7c[0x4]; // 0x7c (0x4) 
	struct FTransform WorldOffset; // 0x80 (0x60)
	bool bEnabled; // 0xe0 (0x1)
	unsigned char padding_e1[0xf]; // 0xe1 (0xf)
};

