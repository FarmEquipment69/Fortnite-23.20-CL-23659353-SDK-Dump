// Class /Script/TargetingSystem.TargetingSubsystem
// Size: 0x50
class UTargetingSubsystem : public UGameInstanceSubsystem
{
	unsigned char unreflected_30[0x10]; // 0x30 (0x10) 
	struct TArray<struct FTargetingRequestHandle> AsyncTargetingRequests; // 0x40 (0x10)

	/* Functions */

	// Function /Script/TargetingSystem.TargetingSubsystem.StartAsyncTargetingRequest (Underlying native function: StartAsyncTargetingRequest 0x73124e8)
	void StartAsyncTargetingRequest(class UTargetingPreset*& TargetingPreset, struct FTargetingSourceContext& InSourceContext, struct FDelegate& CompletionDynamicDelegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TargetingSystem.TargetingSubsystem.GetTargetingSourceContext (Underlying native function: GetTargetingSourceContext 0x7311ff0)
	static struct FTargetingSourceContext GetTargetingSourceContext(struct FTargetingRequestHandle& TargetingHandle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TargetingSystem.TargetingSubsystem.GetTargetingResultsActors (Underlying native function: GetTargetingResultsActors 0x7311e44)
	static void GetTargetingResultsActors(struct FTargetingRequestHandle& TargetingHandle, struct TArray<class AActor*>& Targets); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TargetingSystem.TargetingSubsystem.GetTargetingResults (Underlying native function: GetTargetingResults 0x7311ca0)
	static void GetTargetingResults(struct FTargetingRequestHandle& TargetingHandle, struct TArray<struct FHitResult>& OutTargets); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TargetingSystem.TargetingSubsystem.ExecuteTargetingRequest (Underlying native function: ExecuteTargetingRequest 0x73116b8)
	void ExecuteTargetingRequest(class UTargetingPreset*& TargetingPreset, struct FTargetingSourceContext& InSourceContext, struct FDelegate& CompletionDynamicDelegate); // (Final | Native | Public | HasOutParms | BlueprintCallable | Const)
};

