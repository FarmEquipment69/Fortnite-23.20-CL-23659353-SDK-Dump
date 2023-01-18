// Class /Script/FortniteGame.AsyncTraceQueue
// Size: 0x50
class UAsyncTraceQueue : public UObject
{
	unsigned char unreflected_50[0x50]; 

	/* Functions */

	// Function /Script/FortniteGame.AsyncTraceQueue.ThrottledAsyncTrace_SourceTarget (Underlying native function: ThrottledAsyncTrace_SourceTarget 0x8267d40)
	void ThrottledAsyncTraceSourceTarget(class UObject*& WorldContextObject, bool& bUseLocalCameraAsSource, class AActor*& SourceActor, struct FVector& SourceOffset, class AActor*& TargetActor, struct FVector& TargetOffset, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<ECollisionChannel>& CollisionChannel, struct FDelegate& CompletionFunction); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.AsyncTraceQueue.ThrottledAsyncTrace (Underlying native function: ThrottledAsyncTrace 0x8267b10)
	void ThrottledAsyncTrace(class UObject*& WorldContextObject, struct FVector& StartLocation, struct FVector& EndLocation, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<ECollisionChannel>& CollisionChannel, struct FDelegate& CompletionFunction); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.AsyncTraceQueue.AsyncTrace_Immediate (Underlying native function: AsyncTrace_Immediate 0x8264d14)
	static void AsyncTraceImmediate(class UObject*& WorldContextObject, struct FVector& StartLocation, struct FVector& EndLocation, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<ECollisionChannel>& CollisionChannel, struct FDelegate& CompletionFunction); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

