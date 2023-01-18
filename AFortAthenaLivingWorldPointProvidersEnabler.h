// Class /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler
// Size: 0x340
class AFortAthenaLivingWorldPointProvidersEnabler : public AActor
{
	struct TArray<struct TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> EnabledLinkedPointProviders; // 0x288 (0x10)
	struct TArray<struct TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> AvailableLinkedPointProviders; // 0x298 (0x10)
	struct FGameplayTagContainer EnablerTags; // 0x2a8 (0x20)
	struct TArray<struct TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> LinkedPointProviders; // 0x2c8 (0x10)
	struct FScalableFloat PointProvidersToEnable; // 0x2d8 (0x28)
	struct FScalableFloat EvaluateAutomatically; // 0x300 (0x28)
	unsigned char unreflected_328[0x8]; // 0x328 (0x8) 
	struct FMulticastInlineDelegate OnCompletedEvaluationDelegate; // 0x330 (0x10)

	/* Functions */

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.RemoveClosestPointProvidersToPoint (Underlying native function: RemoveClosestPointProvidersToPoint 0x723bc6c)
	void RemoveClosestPointProvidersToPoint(struct FVector& Point, float& MaximumDistance, int& PointsToDisable); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCurrentPlaylistLoaded (Underlying native function: OnCurrentPlaylistLoaded 0x71a6dd0)
	void OnCurrentPlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)

	// DelegateFunction /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCompletedEvaluation__DelegateSignature (Has no native function)
	void OnCompletedEvaluationDelegateSignature(struct TArray<struct TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>>& EnabledPointProviders); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.HasCompletedEvaluation (Underlying native function: HasCompletedEvaluation 0x7238fc4)
	bool HasCompletedEvaluation(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnablerTags (Underlying native function: GetEnablerTags 0x7238b04)
	struct FGameplayTagContainer GetEnablerTags(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnabledLinkedPointProviders (Underlying native function: GetEnabledLinkedPointProviders 0x7238ae8)
	struct TArray<struct TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> GetEnabledLinkedPointProviders(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.EvaluateAndEnablePointProviders (Underlying native function: EvaluateAndEnablePointProviders 0x26daa0c)
	void EvaluateAndEnablePointProviders(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.DoesStartEnabled (Underlying native function: DoesStartEnabled 0x7238994)
	bool DoesStartEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

