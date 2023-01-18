// Class /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase
// Size: 0xbf0
class AFortScriptedObjectMovement_MovableObjectBase : public ABuildingGameplayActor
{
	unsigned char unreflected_9d8[0x78]; // 0x9d8 (0x78) 
	int EditorSkipMasterPathIndex; // 0xa50 (0x4)
	int EditorSkipSubPathIndex; // 0xa54 (0x4)
	int EditorNumStepsPerClick; // 0xa58 (0x4)
	unsigned char unreflected_a5c[0x24]; // 0xa5c (0x24) 
	class UFortScriptedObjectMovement_SlotDefinition* AssignedSlotDefinition; // 0xa80 (0x8)
	struct FScriptedObjectMovement_DynamicPathContext MovementPath; // 0xa88 (0x38)
	unsigned char unreflected_ac0[0x8]; // 0xac0 (0x8) 
	class UStaticMesh* ScriptedObjectMesh; // 0xac8 (0x8)
	unsigned char unreflected_ad0[0x18]; // 0xad0 (0x18) 
	bool bDebugStaticMovement; // 0xae8 (0x1)
	bool bWaitingForBeginPlaySkip; // 0xae9 (0x1)
	unsigned char unreflected_aea[0x6]; // 0xaea (0x6) 
	class AScriptedObjectMovement_StaticPath* StaticFollowPath; // 0xaf0 (0x8)
	unsigned char unreflected_af8[0x8]; // 0xaf8 (0x8) 
	struct FScriptedObjectMovement_StaticPathStepData CurrentStepData; // 0xb00 (0xf0)

	/* Functions */

	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.SetCanEverAffectNavigation (Underlying native function: SetCanEverAffectNavigation 0x72d2c78)
	void SetCanEverAffectNavigation(bool& bCanEverAffectNavigation, class UActorComponent*& TargetActorComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.OnRep_CurrentStepData (Underlying native function: OnRep_CurrentStepData 0x72d2c64)
	void OnRepCurrentStepData(); // (Final | Native | Private)

	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.NotifyStaticPathStepComplete (Underlying native function: NotifyStaticPathStepComplete 0x72d2be4)
	void NotifyStaticPathStepComplete(bool& bReachedBeginPlaySkipStep); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.HandleSlotDefinitionSlotted (Underlying native function: HandleSlotDefinitionSlotted 0x72d2b2c)
	void HandleSlotDefinitionSlotted(class UFortScriptedObjectMovement_SlotDefinition*& SlotDefinition); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetStaticPathZOffsetHeight (Underlying native function: GetStaticPathZOffsetHeight 0x72d2304)
	float GetStaticPathZOffsetHeight(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetStaticPathTravelingBounds (Underlying native function: GetStaticPathTravelingBounds 0x72d2278)
	void GetStaticPathTravelingBounds(struct FVector& OutBoxExtent); // (Native | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetScriptedObjectStaticMeshComponent (Underlying native function: GetScriptedObjectStaticMeshComponent 0x72d2250)
	class UStaticMeshComponent* GetScriptedObjectStaticMeshComponent(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_TryJumpToStartStep (Underlying native function: Editor_TryJumpToStartStep 0x72d2228)
	void EditorTryJumpToStartStep(); // (Final | Native | Public)

	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_ResetObject (Underlying native function: Editor_ResetObject 0x72d21b8)
	void EditorResetObject(); // (Final | Native | Public)

	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_PreviousStep (Underlying native function: Editor_PreviousStep 0x26daa0c)
	void EditorPreviousStep(); // (Final | Native | Public)

	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_NextStep (Underlying native function: Editor_NextStep 0x26daa0c)
	void EditorNextStep(); // (Final | Native | Public)

	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_DebugLogStaticPathTravelIndex (Underlying native function: Editor_DebugLogStaticPathTravelIndex 0x72d21a4)
	void EditorDebugLogStaticPathTravelIndex(); // (Final | Native | Public)

	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_ClearResetObjectLocation (Underlying native function: Editor_ClearResetObjectLocation 0x72d2180)
	void EditorClearResetObjectLocation(); // (Final | Native | Public)

	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.ConfigureStaticMeshToSlotDefinition (Underlying native function: ConfigureStaticMeshToSlotDefinition 0x72d20ac)
	void ConfigureStaticMeshToSlotDefinition(class UFortScriptedObjectMovement_SlotDefinition*& SlotDefinition, class UStaticMeshComponent*& StaticMeshComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.CheatDrawKeyframes (Underlying native function: CheatDrawKeyframes 0x26daa0c)
	void CheatDrawKeyframes(); // (Final | Native | Public)

	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Cheat_NetMulticast_SendDebugTimerInfo (Underlying native function: Cheat_NetMulticast_SendDebugTimerInfo 0x72d1fe4)
	void CheatNetMulticastSendDebugTimerInfo(float& ServerTimeWhenQueryInvoked, float& RemainingTime); // (Net | NetReliable | Native | Event | NetMulticast | Public)

	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.BlockOverlappingStaticPathSteps (Underlying native function: BlockOverlappingStaticPathSteps 0x72d1fbc)
	bool BlockOverlappingStaticPathSteps(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.BeginMovingToStaticPathNode (Underlying native function: BeginMovingToStaticPathNode 0x72d1efc)
	void BeginMovingToStaticPathNode(struct FScriptedObjectMovement_StaticPathStepData& StepData); // (Native | Event | Public | HasOutParms | BlueprintEvent)
};

