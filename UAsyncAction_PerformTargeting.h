// Class /Script/TargetingSystem.AsyncAction_PerformTargeting
// Size: 0x68
class UAsyncAction_PerformTargeting : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate Targeted; // 0x30 (0x10)
	class UTargetingPreset* TargetingPreset; // 0x40 (0x8)
	struct TWeakObjectPtr<class AActor> WeakSourceActor; // 0x48 (0x8)
	struct TArray<class AActor*> InitialTargets; // 0x50 (0x10)
	unsigned char bUseAsyncTargeting; // 0x60 (0x1)
	unsigned char padding_61[0x7]; // 0x61 (0x7)

	/* Functions */

	// Function /Script/TargetingSystem.AsyncAction_PerformTargeting.PerformTargetingRequest (Underlying native function: PerformTargetingRequest 0x73123ec)
	static class UAsyncAction_PerformTargeting* PerformTargetingRequest(class AActor*& SourceActor, class UTargetingPreset*& TargetingPreset, bool& bUseAsyncTargeting); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TargetingSystem.AsyncAction_PerformTargeting.PerformFilteringRequest (Underlying native function: PerformFilteringRequest 0x7312280)
	static class UAsyncAction_PerformTargeting* PerformFilteringRequest(class AActor*& SourceActor, class UTargetingPreset*& TargetingPreset, bool& bUseAsyncTargeting, struct TArray<class AActor*>& InTargets); // (Final | Native | Static | Public | BlueprintCallable)
};

