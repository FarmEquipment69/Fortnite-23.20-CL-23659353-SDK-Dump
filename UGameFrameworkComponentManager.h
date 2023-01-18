// Class /Script/ModularGameplay.GameFrameworkComponentManager
// Size: 0x238
class UGameFrameworkComponentManager : public UGameInstanceSubsystem
{
	unsigned char unreflected_238[0x238]; 

	/* Functions */

	// Function /Script/ModularGameplay.GameFrameworkComponentManager.UnregisterClassInitStateDelegate (Underlying native function: UnregisterClassInitStateDelegate 0x6a9c75c)
	bool UnregisterClassInitStateDelegate(struct TWeakObjectPtr<class UClass>& ActorClass, struct FDelegate& DelegateToRemove); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ModularGameplay.GameFrameworkComponentManager.UnregisterActorInitStateDelegate (Underlying native function: UnregisterActorInitStateDelegate 0x6a9c534)
	bool UnregisterActorInitStateDelegate(class AActor*& Actor, struct FDelegate& DelegateToRemove); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ModularGameplay.GameFrameworkComponentManager.SendExtensionEvent (Underlying native function: SendExtensionEvent 0x6a9c3f4)
	void SendExtensionEvent(class AActor*& Receiver, struct FName& EventName, bool& bOnlyInGameWorlds); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ModularGameplay.GameFrameworkComponentManager.RemoveReceiver (Underlying native function: RemoveReceiver 0x6a9c378)
	void RemoveReceiver(class AActor*& Receiver); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForClassInitState (Underlying native function: RegisterAndCallForClassInitState 0x6a9c050)
	bool RegisterAndCallForClassInitState(struct TWeakObjectPtr<class UClass>& ActorClass, struct FName& FeatureName, struct FGameplayTag& RequiredState, struct FDelegate& Delegate, bool& bCallImmediately); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForActorInitState (Underlying native function: RegisterAndCallForActorInitState 0x6a9bdb0)
	bool RegisterAndCallForActorInitState(class AActor*& Actor, struct FName& FeatureName, struct FGameplayTag& RequiredState, struct FDelegate& Delegate, bool& bCallImmediately); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ModularGameplay.GameFrameworkComponentManager.AddReceiver (Underlying native function: AddReceiver 0x6a9bbd4)
	void AddReceiver(class AActor*& Receiver, bool& bAddOnlyInGameWorlds); // (Final | Native | Public | BlueprintCallable)
};

