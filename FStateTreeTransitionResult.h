// ScriptStruct /Script/StateTreeModule.StateTreeTransitionResult
// Size: 0x2c
struct FStateTreeTransitionResult
{
	struct FStateTreeActiveStates CurrentActiveStates; // 0x0 (0x12)
	enum EStateTreeRunStatus CurrentRunStatus; // 0x12 (0x1)
	unsigned char unreflected_13[0x1]; // 0x13 (0x1) 
	struct FStateTreeStateHandle TargetState; // 0x14 (0x2)
	struct FStateTreeActiveStates NextActiveStates; // 0x16 (0x12)
	struct FStateTreeStateHandle CurrentState; // 0x28 (0x2)
	enum EStateTreeStateChangeType ChangeType; // 0x2a (0x1)
	unsigned char padding_2b[0x1]; // 0x2b (0x1)
};

