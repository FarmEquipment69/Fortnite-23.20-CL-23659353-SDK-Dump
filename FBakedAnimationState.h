// ScriptStruct /Script/Engine.BakedAnimationState
// Size: 0x58
struct FBakedAnimationState
{
	struct FName StateName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FBakedStateExitTransition> Transitions; // 0x8 (0x10)
	int StateRootNodeIndex; // 0x18 (0x4)
	int StartNotify; // 0x1c (0x4)
	int EndNotify; // 0x20 (0x4)
	int FullyBlendedNotify; // 0x24 (0x4)
	bool bIsAConduit; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	int EntryRuleNodeIndex; // 0x2c (0x4)
	struct TArray<int> PlayerNodeIndices; // 0x30 (0x10)
	struct TArray<int> LayerNodeIndices; // 0x40 (0x10)
	bool bAlwaysResetOnEntry; // 0x50 (0x1)
	unsigned char padding_51[0x7]; // 0x51 (0x7)
};

