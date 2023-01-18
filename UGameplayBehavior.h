// Class /Script/GameplayBehaviorsModule.GameplayBehavior
// Size: 0x88
class UGameplayBehavior : public UObject
{
	unsigned char unreflected_28[0x14]; // 0x28 (0x14) 
	struct FGameplayTag ActionTag; // 0x3c (0x4)
	unsigned char unreflected_40[0x18]; // 0x40 (0x18) 
	struct TArray<class AActor*> RelevantActors; // 0x58 (0x10)
	class AActor* TransientSmartObjectOwner; // 0x68 (0x8)
	class AActor* TransientAvatar; // 0x70 (0x8)
	struct TArray<class UGameplayTask*> ActiveTasks; // 0x78 (0x10)

	/* Functions */

	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_TriggerBehavior (Underlying native function: K2_TriggerBehavior 0x7f711fc)
	void K2TriggerBehavior(class AActor*& Avatar, class UGameplayBehaviorConfig*& Config, class AActor*& SmartObjectOwner); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredPawn (Has no native function)
	void K2OnTriggeredPawn(class APawn*& Avatar, class UGameplayBehaviorConfig*& Config, class AActor*& SmartObjectOwner); // (Event | Public | BlueprintEvent)

	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredCharacter (Has no native function)
	void K2OnTriggeredCharacter(class ACharacter*& Avatar, class UGameplayBehaviorConfig*& Config, class AActor*& SmartObjectOwner); // (Event | Public | BlueprintEvent)

	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggered (Has no native function)
	void K2OnTriggered(class AActor*& Avatar, class UGameplayBehaviorConfig*& Config, class AActor*& SmartObjectOwner); // (Event | Public | BlueprintEvent)

	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedPawn (Has no native function)
	void K2OnFinishedPawn(class APawn*& Avatar, bool& bWasInterrupted); // (Event | Public | BlueprintEvent)

	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedCharacter (Has no native function)
	void K2OnFinishedCharacter(class ACharacter*& Avatar, bool& bWasInterrupted); // (Event | Public | BlueprintEvent)

	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnFinished (Has no native function)
	void K2OnFinished(class AActor*& Avatar, bool& bWasInterrupted); // (Event | Public | BlueprintEvent)

	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_GetNextActorIndexInSequence (Underlying native function: K2_GetNextActorIndexInSequence 0x7f7114c)
	int K2GetNextActorIndexInSequence(int& CurrentIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_EndBehavior (Underlying native function: K2_EndBehavior 0x7f710c8)
	void K2EndBehavior(class AActor*& Avatar); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_AbortBehavior (Underlying native function: K2_AbortBehavior 0x7f71044)
	void K2AbortBehavior(class AActor*& Avatar); // (Final | Native | Public | BlueprintCallable)
};

