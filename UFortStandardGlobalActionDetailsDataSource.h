// Class /Script/FortniteUI.FortStandardGlobalActionDetailsDataSource
// Size: 0x70
class UFortStandardGlobalActionDetailsDataSource : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	class UFortGlobalUIContext* GlobalUIContext; // 0x30 (0x8)
	class UCommonInputSubsystem* CommonInputSubsystem; // 0x38 (0x8)
	struct TWeakObjectPtr<class AFortPlayerController> FortPlayerController; // 0x40 (0x8)
	unsigned char unreflected_48[0x12]; // 0x48 (0x12) 
	struct FFortGlobalActionDetailsFunctionContext ActionDetailsContext; // 0x5a (0x1)
	unsigned char padding_5b[0x15]; // 0x5b (0x15)

	/* Functions */

	// Function /Script/FortniteUI.FortStandardGlobalActionDetailsDataSource.SetGlobalUIContext (Underlying native function: SetGlobalUIContext 0xa69379c)
	void SetGlobalUIContext(class UFortGlobalUIContext*& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStandardGlobalActionDetailsDataSource.SetGlobalAction (Underlying native function: SetGlobalAction 0xa69371c)
	void SetGlobalAction(enum EFortGlobalAction& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStandardGlobalActionDetailsDataSource.SetCommonInputSubsystem (Underlying native function: SetCommonInputSubsystem 0xa693620)
	void SetCommonInputSubsystem(class UCommonInputSubsystem*& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStandardGlobalActionDetailsDataSource.SetActionDetailsContext (Underlying native function: SetActionDetailsContext 0xa693494)
	void SetActionDetailsContext(struct FFortGlobalActionDetailsFunctionContext& Value); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortStandardGlobalActionDetailsDataSource.HandlePlayerControllerChanged (Underlying native function: HandlePlayerControllerChanged 0xa69266c)
	void HandlePlayerControllerChanged(class UObject*& Source); // (Final | Native | Protected)

	// DelegateFunction /Script/FortniteUI.FortStandardGlobalActionDetailsDataSource.FortNameDataSourceOnChangeInternalDelegate__DelegateSignature (Has no native function)
	void FortNameDataSourceOnChangeInternalDelegateDelegateSignature(class UObject*& Source); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortStandardGlobalActionDetailsDataSource.ConstructWithDefaultContexts (Underlying native function: ConstructWithDefaultContexts 0xa691534)
	static class UFortStandardGlobalActionDetailsDataSource* ConstructWithDefaultContexts(class UObject*& Outer, class UWidget*& ContextWidget, enum EFortGlobalAction& GlobalAction, struct FFortGlobalActionDetailsFunctionContext& ActionDetailsContext); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortStandardGlobalActionDetailsDataSource.Construct (Underlying native function: Construct 0xa6913a8)
	static class UFortStandardGlobalActionDetailsDataSource* Construct(class UObject*& Outer, class UFortGlobalUIContext*& GlobalUIContext, class UCommonInputSubsystem*& CommonInputSubsystem, enum EFortGlobalAction& GlobalAction, struct FFortGlobalActionDetailsFunctionContext& ActionDetailsContext); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

