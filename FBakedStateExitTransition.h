// ScriptStruct /Script/Engine.BakedStateExitTransition
// Size: 0x28
struct FBakedStateExitTransition
{
	int CanTakeDelegateIndex; // 0x0 (0x4)
	int CustomResultNodeIndex; // 0x4 (0x4)
	int TransitionIndex; // 0x8 (0x4)
	bool bDesiredTransitionReturnValue; // 0xc (0x1)
	bool bAutomaticRemainingTimeRule; // 0xd (0x1)
	unsigned char unreflected_e[0x2]; // 0xe (0x2) 
	struct FName SyncGroupNameToRequireValidMarkersRule; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TArray<int> PoseEvaluatorLinks; // 0x18 (0x10)
};

