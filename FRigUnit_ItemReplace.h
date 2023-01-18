// ScriptStruct /Script/ControlRig.RigUnit_ItemReplace
// Size: 0x20
struct FRigUnit_ItemReplace : FRigUnit_ItemBase
{
	struct FRigElementKey* Item; // 0x8 (0x8)
	struct FName Old; // 0x10 (0x4)
	struct FName New; // 0x14 (0x4)
	struct FRigElementKey* Result; // 0x18 (0x8)
};

