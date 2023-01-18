// Class /Script/ModularGameplay.GameFrameworkInitStateInterface
// Size: 0x28
class IGameFrameworkInitStateInterface : public IInterface
{

	/* Functions */

	// Function /Script/ModularGameplay.GameFrameworkInitStateInterface.UnregisterInitStateDelegate (Underlying native function: UnregisterInitStateDelegate 0x6a9ca40)
	bool UnregisterInitStateDelegate(struct FDelegate& Delegate); // (Native | Public | BlueprintCallable)

	// Function /Script/ModularGameplay.GameFrameworkInitStateInterface.RegisterAndCallForInitStateChange (Underlying native function: RegisterAndCallForInitStateChange 0x6a9c250)
	bool RegisterAndCallForInitStateChange(struct FGameplayTag& RequiredState, struct FDelegate& Delegate, bool& bCallImmediately); // (Native | Public | BlueprintCallable)

	// Function /Script/ModularGameplay.GameFrameworkInitStateInterface.HasReachedInitState (Underlying native function: HasReachedInitState 0x6a9bd20)
	bool HasReachedInitState(struct FGameplayTag& DesiredState); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ModularGameplay.GameFrameworkInitStateInterface.GetInitState (Underlying native function: GetInitState 0x6a9bcf4)
	struct FGameplayTag GetInitState(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ModularGameplay.GameFrameworkInitStateInterface.GetFeatureName (Underlying native function: GetFeatureName 0x6a9bcc8)
	struct FName GetFeatureName(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

