// Class /Script/FortniteGame.AsyncOverlapQueue
// Size: 0x50
class UAsyncOverlapQueue : public UObject
{
	unsigned char unreflected_50[0x50]; 

	/* Functions */

	// Function /Script/FortniteGame.AsyncOverlapQueue.ThrottledAsyncSphereOverlapActors (Underlying native function: ThrottledAsyncSphereOverlapActors 0x826777c)
	void ThrottledAsyncSphereOverlapActors(class AActor*& ContextActor, struct FVector& Location, float& Radius, bool& bCheckLineOfSight, struct TArray<class AActor*>& ActorsToIgnore, struct FDelegate& ShouldCancelProcess, struct FDelegate& ProcessHitActorFunction, struct FDelegate& CompletionFunction, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, struct TEnumAsByte<ECollisionChannel>& TraceChannel); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.AsyncOverlapQueue.AsyncSphereOverlapActors (Underlying native function: AsyncSphereOverlapActors 0x8264a48)
	static void AsyncSphereOverlapActors(class AActor*& ContextActor, struct FVector& Location, float& Radius, struct TArray<class AActor*>& ActorsToIgnore, struct FDelegate& ShouldCancelProcess, struct FDelegate& ProcessHitActorFunction, struct FDelegate& CompletionFunction, struct TEnumAsByte<ECollisionChannel>& TraceChannel); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

