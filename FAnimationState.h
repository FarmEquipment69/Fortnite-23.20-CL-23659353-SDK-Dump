// ScriptStruct /Script/Engine.AnimationState
// Size: 0x28
struct FAnimationState : FAnimationStateBase
{
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FAnimationTransitionRule> Transitions; // 0x8 (0x10)
	int StateRootNodeIndex; // 0x18 (0x4)
	int StartNotify; // 0x1c (0x4)
	int EndNotify; // 0x20 (0x4)
	int FullyBlendedNotify; // 0x24 (0x4)
};

