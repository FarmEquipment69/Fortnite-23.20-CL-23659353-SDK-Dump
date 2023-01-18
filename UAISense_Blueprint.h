// Class /Script/AIModule.AISense_Blueprint
// Size: 0xa8
class UAISense_Blueprint : public UAISense
{
	class UClass* ListenerDataType; // 0x80 (0x8)
	struct TArray<class UAIPerceptionComponent*> ListenerContainer; // 0x88 (0x10)
	struct TArray<class UAISenseEvent*> UnprocessedEvents; // 0x98 (0x10)

	/* Functions */

	// Function /Script/AIModule.AISense_Blueprint.OnUpdate (Has no native function)
	float OnUpdate(struct TArray<class UAISenseEvent*>& EventsToProcess); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/AIModule.AISense_Blueprint.OnListenerUpdated (Has no native function)
	void OnListenerUpdated(class AActor*& ActorListener, class UAIPerceptionComponent*& PerceptionComponent); // (Event | Public | BlueprintEvent)

	// Function /Script/AIModule.AISense_Blueprint.OnListenerUnregistered (Has no native function)
	void OnListenerUnregistered(class AActor*& ActorListener, class UAIPerceptionComponent*& PerceptionComponent); // (Event | Public | BlueprintEvent)

	// Function /Script/AIModule.AISense_Blueprint.OnListenerRegistered (Has no native function)
	void OnListenerRegistered(class AActor*& ActorListener, class UAIPerceptionComponent*& PerceptionComponent); // (Event | Public | BlueprintEvent)

	// Function /Script/AIModule.AISense_Blueprint.K2_OnNewPawn (Has no native function)
	void K2OnNewPawn(class APawn*& NewPawn); // (Event | Public | BlueprintEvent)

	// Function /Script/AIModule.AISense_Blueprint.GetAllListenerComponents (Underlying native function: GetAllListenerComponents 0xa1e31a0)
	void GetAllListenerComponents(struct TArray<class UAIPerceptionComponent*>& ListenerComponents); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.AISense_Blueprint.GetAllListenerActors (Underlying native function: GetAllListenerActors 0xa1e3104)
	void GetAllListenerActors(struct TArray<class AActor*>& ListenerActors); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

