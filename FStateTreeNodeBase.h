// ScriptStruct /Script/StateTreeModule.StateTreeNodeBase
// Size: 0x18
struct FStateTreeNodeBase
{
	struct FName Name; // 0x8 (0x4)
	struct FStateTreeIndex16 BindingsBatch; // 0xc (0x2)
	struct FStateTreeIndex16 DataViewIndex; // 0xe (0x2)
	struct FStateTreeIndex16 InstanceIndex; // 0x10 (0x2)
	unsigned char bInstanceIsObject; // 0x12 (0x1)
	unsigned char padding_13[0x5]; // 0x13 (0x5)
};

