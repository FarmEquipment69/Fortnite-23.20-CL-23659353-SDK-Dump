// ScriptStruct /Script/StateTreeModule.StateTreePropertySegment
// Size: 0xc
struct FStateTreePropertySegment
{
	struct FName Name; // 0x0 (0x4)
	struct FStateTreeIndex16 ArrayIndex; // 0x4 (0x2)
	struct FStateTreeIndex16 NextIndex; // 0x6 (0x2)
	enum EStateTreePropertyAccessType Type; // 0x8 (0x1)
	unsigned char padding_9[0x3]; // 0x9 (0x3)
};

