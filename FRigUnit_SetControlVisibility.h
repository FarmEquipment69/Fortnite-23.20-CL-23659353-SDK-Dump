// ScriptStruct /Script/ControlRig.RigUnit_SetControlVisibility
// Size: 0x68
struct FRigUnit_SetControlVisibility : FRigUnitMutable
{
	struct FRigElementKey* Item; // 0x38 (0x8)
	struct FString Pattern; // 0x40 (0x10)
	bool bVisible; // 0x50 (0x1)
	unsigned char unreflected_51[0x7]; // 0x51 (0x7) 
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x58 (0x10)
};

