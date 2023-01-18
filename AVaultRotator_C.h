// BlueprintGeneratedClass /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C
// Size: 0x540
class AVaultRotator_C : public AItemPreviewRotator
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3c0 (0x8)
	class UDirectionalLightComponent* DirectionalLightMobile; // 0x3c8 (0x8)
	class UDirectionalLightComponent* DirectionalLightLOWPC; // 0x3d0 (0x8)
	class USceneComponent* DirectionalLights; // 0x3d8 (0x8)
	class USkyLightComponent* SkyLightLowMobile; // 0x3e0 (0x8)
	class USkyLightComponent* SkyLight; // 0x3e8 (0x8)
	class USkyLightComponent* SkyLightLOWPC; // 0x3f0 (0x8)
	class UArrowComponent* Arrow; // 0x3f8 (0x8)
	class UPostProcessComponent* PostProcessMobile; // 0x400 (0x8)
	class UPostProcessComponent* PostProcessLOWPC; // 0x408 (0x8)
	class USceneComponent* GenericLighting; // 0x410 (0x8)
	float TimelineZoomZoomLevel6FFD6729471BD965D850258DA1C0AF39; // 0x418 (0x4)
	struct TEnumAsByte<ETimelineDirection> TimelineZoomDirection6FFD6729471BD965D850258DA1C0AF39; // 0x41c (0x1)
	unsigned char unreflected_41d[0x3]; // 0x41d (0x3) 
	class UTimelineComponent* TimelineZoom; // 0x420 (0x8)
	struct FVector CameraTurn180to360CameraRotationOffsetDF51680448A0BDB5D459C9BB5786D714; // 0x428 (0x18)
	struct FVector CameraTurn180to360CameraPositionOffsetDF51680448A0BDB5D459C9BB5786D714; // 0x440 (0x18)
	float CameraTurn180to360DirectionRotationDF51680448A0BDB5D459C9BB5786D714; // 0x458 (0x4)
	float CameraTurn180to360FoVDF51680448A0BDB5D459C9BB5786D714; // 0x45c (0x4)
	struct TEnumAsByte<ETimelineDirection> CameraTurn180to360DirectionDF51680448A0BDB5D459C9BB5786D714; // 0x460 (0x1)
	unsigned char unreflected_461[0x7]; // 0x461 (0x7) 
	class UTimelineComponent* CameraTurn180to360; // 0x468 (0x8)
	struct FVector CameraTurn0to180CameraRotationOffsetEEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x470 (0x18)
	struct FVector CameraTurn0to180CameraPositionOffsetEEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x488 (0x18)
	float CameraTurn0to180DirectionalRotationEEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x4a0 (0x4)
	float CameraTurn0to180FoVEEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x4a4 (0x4)
	struct TEnumAsByte<ETimelineDirection> CameraTurn0to180DirectionEEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x4a8 (0x1)
	unsigned char unreflected_4a9[0x7]; // 0x4a9 (0x7) 
	class UTimelineComponent* CameraTurn0to180; // 0x4b0 (0x8)
	unsigned char unreflected_4b8[0x8]; // 0x4b8 (0x8) 
	struct FTransform InitialCameraTransform; // 0x4c0 (0x60)
	class USoundBase* ClockwiseSound; // 0x520 (0x8)
	class USoundBase* CounterClockwiseSound; // 0x528 (0x8)
	bool DebugMobileLighting; // 0x530 (0x1)
	bool DebugLightingPC; // 0x531 (0x1)
	bool IsActive; // 0x532 (0x1)
	bool AlwaysOn; // 0x533 (0x1)
	bool DebugLightingLOWDetailPC; // 0x534 (0x1)
	unsigned char unreflected_535[0x3]; // 0x535 (0x3) 
	double TargetZoomLevel; // 0x538 (0x8)

	/* Functions */

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.PlaySoundWhenEnabled (Has no native function)
	void PlaySoundWhenEnabled(class USoundBase*& sound, bool& CallFuncIsSoundEnabledReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.SetBackgroundColor (Has no native function)
	void SetBackgroundColor(struct FLinearColor& RGBA0, struct FLinearColor& RGBA1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.ToggleBackgroundText (Has no native function)
	void ToggleBackgroundText(bool& bDisplayText); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.LightControl (Has no native function)
	void LightControl(bool& Active, bool& CallFuncIsMobileGameReturnValue, bool& CallFuncIsErebusReturnValue, bool& CallFuncIsErebusReturnValue1, bool& CallFuncBooleanORReturnValue, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue, int& CallFuncGetShadowQualityReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, bool& CallFuncBooleanORReturnValue1, bool& CallFuncBooleanORReturnValue2); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.SwitchPCLighting (Has no native function)
	void SwitchPCLighting(bool& Visibility); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.SwitchPCLighting_LOWDetail (Has no native function)
	void SwitchPCLightingLOWDetail(bool& Visibility); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.SwitchMobileLighting (Has no native function)
	void SwitchMobileLighting(bool& Visibility); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.SetBackgroundString (Has no native function)
	void SetBackgroundString(struct FText& CustomText, class UUI_Background_Strings_C*& CallFuncCreateReturnValue, bool& CallFuncTextIsEmptyReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.CameraTurn_0_to_180__FinishedFunc (Has no native function)
	void CameraTurn0to180FinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.CameraTurn_0_to_180__UpdateFunc (Has no native function)
	void CameraTurn0to180UpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.CameraTurn_180_to_360__FinishedFunc (Has no native function)
	void CameraTurn180to360FinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.CameraTurn_180_to_360__UpdateFunc (Has no native function)
	void CameraTurn180to360UpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.Timeline_Zoom__FinishedFunc (Has no native function)
	void TimelineZoomFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.Timeline_Zoom__UpdateFunc (Has no native function)
	void TimelineZoomUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.UpdateSettings (Has no native function)
	void UpdateSettings(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.OnCameraTransitionReady (Has no native function)
	void OnCameraTransitionReady(bool& bPrimaryToSecondary, class UFortAccountItemDefinition*& PrimaryRequestedItem, struct FSceneTransitionOptions& Options); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.OnTargetZoomLevelSet (Has no native function)
	void OnTargetZoomLevelSet(float& TargetZoomLevel); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.OnSetBackgroundMessageText (Has no native function)
	void OnSetBackgroundMessageText(struct FText& BackgroundMessageText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.OnUpdateBackgroundColor (Has no native function)
	void OnUpdateBackgroundColor(bool& bEnableAutotestBackground); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.ExecuteUbergraph_VaultRotator (Has no native function)
	void ExecuteUbergraphVaultRotator(int& EntryPoint, bool& CallFuncIsErebusReturnValue, struct TEnumAsByte<ETimelineDirection>& TempbyteVariable, struct TEnumAsByte<ETimelineDirection>& TempbyteVariable1, bool& K2NodeSwitchEnumCmpSuccess, struct FDelegate& K2NodeCreateDelegateOutputDelegate, float& CallFuncGetTimelineLengthReturnValue, float& CallFuncGetTimelineLengthReturnValue1, float& CallFuncGetPlaybackPositionReturnValue, float& CallFuncGetPlaybackPositionReturnValue1, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue1, double& K2NodeSelectDefault, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue, int& CallFuncGetShadowQualityReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, struct FRotator& CallFuncMakeRotatorReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FRotator& CallFuncMakeRotatorReturnValue1, double& K2NodeSelectDefault1, struct FTransform& CallFuncMakeTransformReturnValue, struct FInterpolatedTransitionCamera& CallFuncGetInterpolatedTransitionCameraPositionReturnValue, struct FRotator& CallFuncMakeRotatorReturnValue2, struct FHitResult& CallFuncK2SetRelativeTransformSweepHitResult, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, struct FRotator& CallFuncMakeRotatorReturnValue3, struct FTransform& CallFuncMakeTransformReturnValue1, struct FInterpolatedTransitionCamera& CallFuncGetInterpolatedTransitionCameraPositionReturnValue1, struct FHitResult& CallFuncK2SetRelativeTransformSweepHitResult1, struct FHitResult& CallFuncK2SetRelativeRotationSweepHitResult, struct FHitResult& CallFuncK2SetRelativeRotationSweepHitResult1, bool& K2NodeEventbPrimaryToSecondary, class UFortAccountItemDefinition*& K2NodeEventPrimaryRequestedItem, struct FSceneTransitionOptions& K2NodeEventOptions, bool& CallFuncIsMobileGameReturnValue, bool& CallFuncBooleanORReturnValue, bool& K2NodeSwitchEnumCmpSuccess1, bool& CallFuncBooleanORReturnValue1, bool& CallFuncBooleanORReturnValue2, float& K2NodeEventTargetZoomLevel, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, bool& CallFuncLessEqualDoubleDoubleReturnValue, bool& CallFuncLessDoubleDoubleReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, struct FText& K2NodeEventBackgroundMessageText, bool& K2NodeEventbEnableAutotestBackground, double& CallFuncGreaterEqualDoubleDoubleAImplicitCast, double& CallFuncLessEqualDoubleDoubleAImplicitCast, double& CallFuncSubtractDoubleDoubleAImplicitCast, double& CallFuncSubtractDoubleDoubleAImplicitCast1, double& CallFuncSubtractDoubleDoubleBImplicitCast, double& K2NodeSelectForwardImplicitCast, double& K2NodeSelectForwardImplicitCast1, double& CallFuncSubtractDoubleDoubleBImplicitCast1, float& CallFuncGetInterpolatedTransitionCameraPositionProgressThroughTransitionSecsImplicitCast, float& CallFuncMakeRotatorRollImplicitCast, float& CallFuncMakeRotatorPitchImplicitCast, float& CallFuncMakeRotatorYawImplicitCast, float& CallFuncGetInterpolatedTransitionCameraPositionProgressThroughTransitionSecsImplicitCast1, float& CallFuncMakeRotatorRollImplicitCast1, float& CallFuncMakeRotatorPitchImplicitCast1, float& CallFuncMakeRotatorYawImplicitCast1, double& K2NodeVariableSetTargetZoomLevelImplicitCast, float& K2NodeVariableSetZoomLevelImplicitCast, float& K2NodeVariableSetZoomLevelImplicitCast1, double& CallFuncGreaterDoubleDoubleBImplicitCast, double& CallFuncLessDoubleDoubleBImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

