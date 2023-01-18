// BlueprintGeneratedClass /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C
// Size: 0x548
class AItemPreviewSideSwap_C : public AItemPreviewSwapper
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3c8 (0x8)
	class UPostProcessComponent* PostProcessMobile; // 0x3d0 (0x8)
	class USkyLightComponent* SkyLightLowMobile; // 0x3d8 (0x8)
	class USkyLightComponent* SkyLight; // 0x3e0 (0x8)
	class USkyLightComponent* SkyLightLOWPC; // 0x3e8 (0x8)
	class UArrowComponent* Arrow; // 0x3f0 (0x8)
	class UPostProcessComponent* PostProcessLOWPC; // 0x3f8 (0x8)
	class UDirectionalLightComponent* DirectionalLightLOWPC; // 0x400 (0x8)
	class UDirectionalLightComponent* DirectionalLightMobile; // 0x408 (0x8)
	class USceneComponent* DirectionalLights; // 0x410 (0x8)
	class USceneComponent* GenericLighting; // 0x418 (0x8)
	float Timeline1RotationOffsetLerpF81FDC884C74C17EBF78B0B928138870; // 0x420 (0x4)
	struct TEnumAsByte<ETimelineDirection> Timeline1DirectionF81FDC884C74C17EBF78B0B928138870; // 0x424 (0x1)
	unsigned char unreflected_425[0x3]; // 0x425 (0x3) 
	class UTimelineComponent* Timeline1; // 0x428 (0x8)
	float Timeline0ZoomLevelF92CF88A423F8300F5A67CB744A0DA45; // 0x430 (0x4)
	struct TEnumAsByte<ETimelineDirection> Timeline0DirectionF92CF88A423F8300F5A67CB744A0DA45; // 0x434 (0x1)
	unsigned char unreflected_435[0x3]; // 0x435 (0x3) 
	class UTimelineComponent* Timeline0; // 0x438 (0x8)
	struct FVector MoveOutRightLocation89D9209D4024EFFF08326CBAE53949F1; // 0x440 (0x18)
	struct TEnumAsByte<ETimelineDirection> MoveOutRightDirection89D9209D4024EFFF08326CBAE53949F1; // 0x458 (0x1)
	unsigned char unreflected_459[0x7]; // 0x459 (0x7) 
	class UTimelineComponent* MoveOutRight; // 0x460 (0x8)
	struct FVector MoveInRightLocation3FE1D8EB4B6BCBA0C3D120B521728FCE; // 0x468 (0x18)
	struct TEnumAsByte<ETimelineDirection> MoveInRightDirection3FE1D8EB4B6BCBA0C3D120B521728FCE; // 0x480 (0x1)
	unsigned char unreflected_481[0x7]; // 0x481 (0x7) 
	class UTimelineComponent* MoveInRight; // 0x488 (0x8)
	struct FVector MoveInLeftLocationB344DA1A46B3CB2F19E2E0A1F7E36A47; // 0x490 (0x18)
	struct TEnumAsByte<ETimelineDirection> MoveInLeftDirectionB344DA1A46B3CB2F19E2E0A1F7E36A47; // 0x4a8 (0x1)
	unsigned char unreflected_4a9[0x7]; // 0x4a9 (0x7) 
	class UTimelineComponent* MoveInLeft; // 0x4b0 (0x8)
	struct FVector MoveOutLeftLocation6890893D4037128B5CB3B2AE9A4AE0A1; // 0x4b8 (0x18)
	struct TEnumAsByte<ETimelineDirection> MoveOutLeftDirection6890893D4037128B5CB3B2AE9A4AE0A1; // 0x4d0 (0x1)
	unsigned char unreflected_4d1[0x7]; // 0x4d1 (0x7) 
	class UTimelineComponent* MoveOutLeft; // 0x4d8 (0x8)
	bool DebugMobileLighting; // 0x4e0 (0x1)
	bool DebugLightingPC; // 0x4e1 (0x1)
	bool IsActive; // 0x4e2 (0x1)
	bool AlwaysOn; // 0x4e3 (0x1)
	bool DebugLightingLOWDetailPC; // 0x4e4 (0x1)
	unsigned char unreflected_4e5[0x3]; // 0x4e5 (0x3) 
	struct FMulticastInlineDelegate OnNewItemSpawned; // 0x4e8 (0x10)
	double CurrentZoomLevel; // 0x4f8 (0x8)
	double TargetZoomLevel; // 0x500 (0x8)
	struct FRotator TargetRotationOffset; // 0x508 (0x18)
	struct FRotator OrigRotationOffset; // 0x520 (0x18)
	class UFortAccountItemDefinition* PrimaryRequestedItem; // 0x538 (0x8)
	class UFortAccountItemDefinition* PreviousRequestedItem; // 0x540 (0x8)

	/* Functions */

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.LightControl (Has no native function)
	void LightControl(bool& Active, bool& CallFuncIsMobileGameReturnValue, class UFortGameUserSettings*& CallFuncGetFortGameUserSettingsReturnValue, bool& CallFuncIsErebusReturnValue, bool& CallFuncIsInPerformanceModeReturnValue, bool& CallFuncIsErebusReturnValue1, bool& CallFuncBooleanORReturnValue, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue, bool& CallFuncBooleanORReturnValue1, int& CallFuncGetShadowQualityReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, bool& CallFuncBooleanORReturnValue2, bool& CallFuncBooleanORReturnValue3); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchPCLighting (Has no native function)
	void SwitchPCLighting(bool& Visibility); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchPCLighting_LOWDetail (Has no native function)
	void SwitchPCLightingLOWDetail(bool& Visibility, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchMobileLighting (Has no native function)
	void SwitchMobileLighting(bool& Visibility, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutLeft__FinishedFunc (Has no native function)
	void MoveOutLeftFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutLeft__UpdateFunc (Has no native function)
	void MoveOutLeftUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInLeft__FinishedFunc (Has no native function)
	void MoveInLeftFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInLeft__UpdateFunc (Has no native function)
	void MoveInLeftUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInRight__FinishedFunc (Has no native function)
	void MoveInRightFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInRight__UpdateFunc (Has no native function)
	void MoveInRightUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutRight__FinishedFunc (Has no native function)
	void MoveOutRightFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutRight__UpdateFunc (Has no native function)
	void MoveOutRightUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_0__FinishedFunc (Has no native function)
	void Timeline0FinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_0__UpdateFunc (Has no native function)
	void Timeline0UpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_1__FinishedFunc (Has no native function)
	void Timeline1FinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_1__UpdateFunc (Has no native function)
	void Timeline1UpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnReadyToSwap (Has no native function)
	void OnReadyToSwap(class UFortAccountItemDefinition*& PrimaryRequestedItem, struct FSceneTransitionOptions& Options); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnNewSceneRequested (Has no native function)
	void OnNewSceneRequested(class UFortAccountItemDefinition*& PrimaryRequestedItem, struct FSceneTransitionOptions& TransitionOptions); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.UpdateSettings (Has no native function)
	void UpdateSettings(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnTargetZoomLevelSet (Has no native function)
	void OnTargetZoomLevelSet(float& TargetZoomLevel); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnTargetRotationOffsetSet (Has no native function)
	void OnTargetRotationOffsetSet(struct FRotator& TargetRotationOffset); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.ExecuteUbergraph_ItemPreviewSideSwap (Has no native function)
	void ExecuteUbergraphItemPreviewSideSwap(int& EntryPoint, struct FTransform& CallFuncMakeTransformReturnValue, struct FTransform& CallFuncMakeTransformReturnValue1, struct FTransform& CallFuncMakeTransformReturnValue2, struct FTransform& CallFuncMakeTransformReturnValue3, bool& K2NodeSwitchEnumCmpSuccess, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& TempboolAExecutionHappenedVariable, bool& CallFuncEqualEqualRotatorRotatorReturnValue, bool& TempboolBExecutionHappenedVariable, bool& CallFuncBooleanANDReturnValue, class UFortAccountItemDefinition*& K2NodeEventPrimaryRequestedItem1, struct FSceneTransitionOptions& K2NodeEventOptions, bool& CallFuncIsValidReturnValue, bool& K2NodeSwitchEnumCmpSuccess1, enum EFortItemType& CallFuncGetItemTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncEqualEqualByteByteReturnValue1, bool& CallFuncEqualEqualByteByteReturnValue2, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanORReturnValue1, bool& CallFuncNotPreBoolReturnValue, class UFortAccountItemDefinition*& K2NodeEventPrimaryRequestedItem, struct FSceneTransitionOptions& K2NodeEventTransitionOptions, bool& K2NodeSwitchEnumCmpSuccess2, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue, int& CallFuncGetShadowQualityReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, bool& CallFuncIsMobileGameReturnValue, struct FTransform& CallFuncMakeTransformReturnValue4, struct FTransform& CallFuncMakeTransformReturnValue5, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, bool& CallFuncLessEqualDoubleDoubleReturnValue, float& K2NodeEventTargetZoomLevel, bool& TempboolBExecutionHappenedVariable1, bool& TempboolAExecutionHappenedVariable1, bool& CallFuncLessDoubleDoubleReturnValue, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncGreaterDoubleDoubleReturnValue, class UFortGameUserSettings*& CallFuncGetFortGameUserSettingsReturnValue, bool& CallFuncIsInPerformanceModeReturnValue, bool& CallFuncBooleanORReturnValue2, bool& CallFuncBooleanORReturnValue3, struct FRotator& K2NodeEventTargetRotationOffset, struct FRotator& CallFuncRLerpReturnValue, double& CallFuncLessEqualDoubleDoubleAImplicitCast, double& CallFuncGreaterEqualDoubleDoubleAImplicitCast, double& K2NodeVariableSetTargetZoomLevelImplicitCast, float& K2NodeVariableSetZoomLevelImplicitCast, double& CallFuncGreaterDoubleDoubleBImplicitCast, double& CallFuncLessDoubleDoubleBImplicitCast); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.On New Item Spawned__DelegateSignature (Has no native function)
	void OnNewItemSpawnedDelegateSignature(bool& ShouldShowFloor); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

