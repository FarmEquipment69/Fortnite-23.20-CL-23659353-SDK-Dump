// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl
// Size: 0x38
class UFortAthenaAIRuntimeParameters_BehaviorTreeControl : public UFortAthenaAIRuntimeParameters
{
	uint32_t BehaviorTreeControls; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl.IsBehaviorTreeBranchActive (Underlying native function: IsBehaviorTreeBranchActive 0xa3acc4c)
	bool IsBehaviorTreeBranchActive(enum EBehaviorTreeBranches& Behavior); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl.EnableBehaviorTreeBranch (Underlying native function: EnableBehaviorTreeBranch 0xa3ab7a4)
	void EnableBehaviorTreeBranch(enum EBehaviorTreeBranches& Behavior); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl.DisableBehaviorTreeBranch (Underlying native function: DisableBehaviorTreeBranch 0xa3ab69c)
	void DisableBehaviorTreeBranch(enum EBehaviorTreeBranches& Behavior); // (Final | Native | Public | BlueprintCallable)
};

