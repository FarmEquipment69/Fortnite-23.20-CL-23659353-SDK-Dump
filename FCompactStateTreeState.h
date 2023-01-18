// ScriptStruct /Script/StateTreeModule.CompactStateTreeState
// Size: 0x1c
struct FCompactStateTreeState
{
	struct FName Name; // 0x0 (0x4)
	struct FStateTreeStateHandle LinkedState; // 0x4 (0x2)
	struct FStateTreeStateHandle Parent; // 0x6 (0x2)
	uint16_t ChildrenBegin; // 0x8 (0x2)
	uint16_t ChildrenEnd; // 0xa (0x2)
	uint16_t EnterConditionsBegin; // 0xc (0x2)
	uint16_t TransitionsBegin; // 0xe (0x2)
	uint16_t TasksBegin; // 0x10 (0x2)
	struct FStateTreeIndex16 ParameterInstanceIndex; // 0x12 (0x2)
	struct FStateTreeIndex16 ParameterDataViewIndex; // 0x14 (0x2)
	unsigned char EnterConditionsNum; // 0x16 (0x1)
	unsigned char TransitionsNum; // 0x17 (0x1)
	unsigned char TasksNum; // 0x18 (0x1)
	enum EStateTreeStateType Type; // 0x19 (0x1)
	unsigned char padding_1a[0x2]; // 0x1a (0x2)
};

