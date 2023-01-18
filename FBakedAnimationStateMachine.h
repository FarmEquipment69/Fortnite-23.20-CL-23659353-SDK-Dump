// ScriptStruct /Script/Engine.BakedAnimationStateMachine
// Size: 0x28
struct FBakedAnimationStateMachine
{
	struct FName MachineName; // 0x0 (0x4)
	int InitialState; // 0x4 (0x4)
	struct TArray<struct FBakedAnimationState> States; // 0x8 (0x10)
	struct TArray<struct FAnimationTransitionBetweenStates> Transitions; // 0x18 (0x10)
};

