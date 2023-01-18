// Class /Script/AIModule.AIPerceptionComponent
// Size: 0x178
class UAIPerceptionComponent : public UActorComponent
{
	struct TArray<class UAISenseConfig*> SensesConfig; // 0xa0 (0x10)
	class UClass* DominantSense; // 0xb0 (0x8)
	unsigned char unreflected_b8[0x8]; // 0xb8 (0x8) 
	class AAIController* AIOwner; // 0xc0 (0x8)
	unsigned char unreflected_c8[0x80]; // 0xc8 (0x80) 
	struct FMulticastInlineDelegate OnPerceptionUpdated; // 0x148 (0x10)
	struct FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x158 (0x10)
	struct FMulticastInlineDelegate OnTargetPerceptionInfoUpdated; // 0x168 (0x10)

	/* Functions */

	// Function /Script/AIModule.AIPerceptionComponent.SetSenseEnabled (Underlying native function: SetSenseEnabled 0xa1daf74)
	void SetSenseEnabled(class UClass*& SenseClass, bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate (Underlying native function: RequestStimuliListenerUpdate 0xa1dadcc)
	void RequestStimuliListenerUpdate(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.AIPerceptionComponent.OnOwnerEndPlay (Underlying native function: OnOwnerEndPlay 0xa1da79c)
	void OnOwnerEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Public)

	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense (Underlying native function: GetPerceivedHostileActorsBySense 0xa1da300)
	void GetPerceivedHostileActorsBySense(class UClass*& SenseToUse, struct TArray<class AActor*>& OutActors); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActors (Underlying native function: GetPerceivedHostileActors 0xa1da260)
	void GetPerceivedHostileActors(struct TArray<class AActor*>& OutActors); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedActors (Underlying native function: GetPerceivedActors 0xa1d9fe8)
	void GetPerceivedActors(class UClass*& SenseToUse, struct TArray<class AActor*>& OutActors); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.AIPerceptionComponent.GetKnownPerceivedActors (Underlying native function: GetKnownPerceivedActors 0xa1da0cc)
	void GetKnownPerceivedActors(class UClass*& SenseToUse, struct TArray<class AActor*>& OutActors); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors (Underlying native function: GetCurrentlyPerceivedActors 0xa1d9fe8)
	void GetCurrentlyPerceivedActors(class UClass*& SenseToUse, struct TArray<class AActor*>& OutActors); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.AIPerceptionComponent.GetActorsPerception (Underlying native function: GetActorsPerception 0xa1d9da8)
	bool GetActorsPerception(class AActor*& Actor, struct FActorPerceptionBlueprintInfo& Info); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.AIPerceptionComponent.ForgetAll (Underlying native function: ForgetAll 0xa1d9d94)
	void ForgetAll(); // (Final | Native | Public | BlueprintCallable)
};

