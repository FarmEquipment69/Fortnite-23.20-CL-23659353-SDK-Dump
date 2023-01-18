// ScriptStruct /Script/StateTreeModule.StateTreePropertyIndirection
// Size: 0x10
struct FStateTreePropertyIndirection
{
	struct FStateTreeIndex16 ArrayIndex; // 0x0 (0x2)
	uint16_t Offset; // 0x2 (0x2)
	struct FStateTreeIndex16 NextIndex; // 0x4 (0x2)
	enum EStateTreePropertyAccessType Type; // 0x6 (0x1)
	unsigned char padding_7[0x9]; // 0x7 (0x9)
};

