// Class /Script/Engine.SceneCaptureComponent
// Size: 0x360
class USceneCaptureComponent : public USceneComponent
{
	enum ESceneCapturePrimitiveRenderMode PrimitiveRenderMode; // 0x2a0 (0x1)
	struct TEnumAsByte<ESceneCaptureSource> CaptureSource; // 0x2a1 (0x1)
	unsigned char bCaptureEveryFrame; // 0x2a2 (0x1)
	unsigned char bCaptureOnMovement; // 0x2a2 (0x1)
	bool bAlwaysPersistRenderingState; // 0x2a3 (0x1)
	unsigned char unreflected_2a4[0x4]; // 0x2a4 (0x4) 
	struct TArray<struct TWeakObjectPtr<class UPrimitiveComponent>> HiddenComponents; // 0x2a8 (0x10)
	struct TArray<class AActor*> HiddenActors; // 0x2b8 (0x10)
	struct TArray<struct TWeakObjectPtr<class UPrimitiveComponent>> ShowOnlyComponents; // 0x2c8 (0x10)
	struct TArray<class AActor*> ShowOnlyActors; // 0x2d8 (0x10)
	float LODDistanceFactor; // 0x2e8 (0x4)
	float MaxViewDistanceOverride; // 0x2ec (0x4)
	int CaptureSortPriority; // 0x2f0 (0x4)
	bool bUseRayTracingIfEnabled; // 0x2f4 (0x1)
	unsigned char unreflected_2f5[0x3]; // 0x2f5 (0x3) 
	struct TArray<struct FEngineShowFlagsSetting> ShowFlagSettings; // 0x2f8 (0x10)
	unsigned char unreflected_308[0x30]; // 0x308 (0x30) 
	struct FString ProfilingEventName; // 0x338 (0x10)
	unsigned char padding_348[0x18]; // 0x348 (0x18)

	/* Functions */

	// Function /Script/Engine.SceneCaptureComponent.ShowOnlyComponent (Underlying native function: ShowOnlyComponent 0x9d0dc68)
	void ShowOnlyComponent(class UPrimitiveComponent*& InComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneCaptureComponent.ShowOnlyActorComponents (Underlying native function: ShowOnlyActorComponents 0x9d0da54)
	void ShowOnlyActorComponents(class AActor*& InActor, bool& bIncludeFromChildActors); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneCaptureComponent.SetCaptureSortPriority (Underlying native function: SetCaptureSortPriority 0x8762f80)
	void SetCaptureSortPriority(int& NewCaptureSortPriority); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneCaptureComponent.RemoveShowOnlyComponent (Underlying native function: RemoveShowOnlyComponent 0x9d0bb08)
	void RemoveShowOnlyComponent(class UPrimitiveComponent*& InComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneCaptureComponent.RemoveShowOnlyActorComponents (Underlying native function: RemoveShowOnlyActorComponents 0x9d0b910)
	void RemoveShowOnlyActorComponents(class AActor*& InActor, bool& bIncludeFromChildActors); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneCaptureComponent.HideComponent (Underlying native function: HideComponent 0x9d0aff0)
	void HideComponent(class UPrimitiveComponent*& InComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneCaptureComponent.HideActorComponents (Underlying native function: HideActorComponents 0x9d0ae04)
	void HideActorComponents(class AActor*& InActor, bool& bIncludeFromChildActors); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneCaptureComponent.ClearShowOnlyComponents (Underlying native function: ClearShowOnlyComponents 0x9d08a84)
	void ClearShowOnlyComponents(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneCaptureComponent.ClearHiddenComponents (Underlying native function: ClearHiddenComponents 0x9d089f4)
	void ClearHiddenComponents(); // (Final | Native | Public | BlueprintCallable)
};

