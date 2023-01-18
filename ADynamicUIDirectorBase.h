// Class /Script/DynamicUI.DynamicUIDirectorBase
// Size: 0x2b8
class ADynamicUIDirectorBase : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct TArray<class UDynamicUIScene*> DefaultScenes; // 0x290 (0x10)
	struct TWeakObjectPtr<class ULocalPlayer> OwningLocalPlayer; // 0x2a0 (0x8)
	bool bAddEventRouter; // 0x2a8 (0x1)
	bool bEnabledDuringReplay; // 0x2a9 (0x1)
	unsigned char unreflected_2aa[0x6]; // 0x2aa (0x6) 
	class UGameplayEventRouterComponent* EventRouter; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/DynamicUI.DynamicUIDirectorBase.RemoveScene (Underlying native function: RemoveScene 0x70aff5c)
	void RemoveScene(class UDynamicUIScene*& Scene); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DynamicUI.DynamicUIDirectorBase.GetOwningLocalPlayerController (Underlying native function: GetOwningLocalPlayerController 0x1ac8010)
	class APlayerController* GetOwningLocalPlayerController(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DynamicUI.DynamicUIDirectorBase.GetOwningLocalPlayer (Underlying native function: GetOwningLocalPlayer 0x70afef0)
	class ULocalPlayer* GetOwningLocalPlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DynamicUI.DynamicUIDirectorBase.GetOwnedEventRouter (Underlying native function: GetOwnedEventRouter 0x52e34b0)
	class UGameplayEventRouterComponent* GetOwnedEventRouter(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DynamicUI.DynamicUIDirectorBase.AddScene (Underlying native function: AddScene 0x261d8f8)
	void AddScene(class UDynamicUIScene*& Scene); // (Final | Native | Public | BlueprintCallable)
};

