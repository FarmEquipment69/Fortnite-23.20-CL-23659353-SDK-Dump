// Class /Script/FortniteUI.FortDisableAutoSlottingPromptAction
// Size: 0x48
class UFortDisableAutoSlottingPromptAction : public UObject
{
	struct TWeakObjectPtr<class APlayerController> OwningPlayerController; // 0x28 (0x8)
	unsigned char unreflected_30[0x10]; // 0x30 (0x10) 
	struct TWeakObjectPtr<class UGameInstance> RegisteredWithGameInstance; // 0x40 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortDisableAutoSlottingPromptAction.Execute (Has no native function)
	void Execute(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortDisableAutoSlottingPromptAction.CompleteExecution (Underlying native function: CompleteExecution 0xa915c38)
	void CompleteExecution(enum EFortDialogResult& Result, struct FName& ResultName); // (Final | Native | Protected | BlueprintCallable)
};

