// Class /Script/HmxUtl.BehaviorTreeActor
// Size: 0x2a0
class ABehaviorTreeActor : public AActor
{
	class UBehaviorTree* BehaviorTree; // 0x288 (0x8)
	unsigned char padding_290[0x10]; // 0x290 (0x10)

	/* Functions */

	// Function /Script/HmxUtl.BehaviorTreeActor.RunBehaviorTree (Underlying native function: RunBehaviorTree 0x5583370)
	bool RunBehaviorTree(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxUtl.BehaviorTreeActor.GetBlackboard (Underlying native function: GetBlackboard 0x5582f10)
	class UBlackboardComponent* GetBlackboard(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

