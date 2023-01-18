// Class /Script/AIModule.BehaviorTreeComponent
// Size: 0x290
class UBehaviorTreeComponent : public UBrainComponent
{
	unsigned char unreflected_f8[0x20]; // 0xf8 (0x20) 
	struct TArray<class UBTNode*> NodeInstances; // 0x118 (0x10)
	unsigned char unreflected_128[0x148]; // 0x128 (0x148) 
	class UBehaviorTree* DefaultBehaviorTreeAsset; // 0x270 (0x8)
	unsigned char padding_278[0x18]; // 0x278 (0x18)

	/* Functions */

	// Function /Script/AIModule.BehaviorTreeComponent.SetDynamicSubtree (Underlying native function: SetDynamicSubtree 0xa196cd4)
	void SetDynamicSubtree(struct FGameplayTag& InjectTag, class UBehaviorTree*& BehaviorAsset); // (Native | Public | BlueprintCallable)

	// Function /Script/AIModule.BehaviorTreeComponent.GetTagCooldownEndTime (Underlying native function: GetTagCooldownEndTime 0xa19549c)
	float GetTagCooldownEndTime(struct FGameplayTag& CooldownTag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BehaviorTreeComponent.AddCooldownTagDuration (Underlying native function: AddCooldownTagDuration 0xa1941d0)
	void AddCooldownTagDuration(struct FGameplayTag& CooldownTag, float& CooldownDuration, bool& bAddToExistingDuration); // (Final | Native | Public | BlueprintCallable)
};

