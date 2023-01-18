// ScriptStruct /Script/ControlRig.RigUnit_SetTranslation
// Size: 0x80
struct FRigUnit_SetTranslation : FRigUnitMutable
{
	struct FRigElementKey* Item; // 0x38 (0x8)
	enum EBoneGetterSetterMode Space; // 0x40 (0x1)
	bool bInitial; // 0x41 (0x1)
	unsigned char unreflected_42[0x6]; // 0x42 (0x6) 
	struct FVector Value; // 0x48 (0x18)
	float Weight; // 0x60 (0x4)
	bool bPropagateToChildren; // 0x64 (0x1)
	unsigned char unreflected_65[0x3]; // 0x65 (0x3) 
	struct FCachedRigElement CachedIndex; // 0x68 (0x18)
};

