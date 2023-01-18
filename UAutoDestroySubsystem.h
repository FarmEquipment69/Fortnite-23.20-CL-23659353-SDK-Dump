// Class /Script/Engine.AutoDestroySubsystem
// Size: 0x50
class UAutoDestroySubsystem : public UTickableWorldSubsystem
{
	struct TArray<class AActor*> ActorsToPoll; // 0x40 (0x10)

	/* Functions */

	// Function /Script/Engine.AutoDestroySubsystem.OnActorEndPlay (Underlying native function: OnActorEndPlay 0x9d7b46c)
	void OnActorEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Private)
};

