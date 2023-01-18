// BlueprintGeneratedClass /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C
// Size: 0x5d4
class AWrapPreview_C : public AAthenaWrapPreviewActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x520 (0x8)
	class USkyLightComponent* SkyLightPC; // 0x528 (0x8)
	class USkeletalMeshComponent* AssaultRiflePreview; // 0x530 (0x8)
	class USkeletalMeshComponent* MechPreview; // 0x538 (0x8)
	class USkyLightComponent* SkyLightLowMobile; // 0x540 (0x8)
	class UArrowComponent* Arrow; // 0x548 (0x8)
	class UDirectionalLightComponent* DirectionalLightMobile; // 0x550 (0x8)
	class USpotLightComponent* KeyLightStandaloneForSwitch; // 0x558 (0x8)
	class USpotLightComponent* KeyLigh4; // 0x560 (0x8)
	class USpotLightComponent* KeyLight7; // 0x568 (0x8)
	class USpotLightComponent* KeyLight8; // 0x570 (0x8)
	class USpotLightComponent* KeyLight3; // 0x578 (0x8)
	class USpotLightComponent* RimLowerRight2; // 0x580 (0x8)
	class USpotLightComponent* RimLeft2; // 0x588 (0x8)
	class USpotLightComponent* Bounce2; // 0x590 (0x8)
	class USpotLightComponent* BounceRear2; // 0x598 (0x8)
	class USpotLightComponent* RimTopRight2; // 0x5a0 (0x8)
	class USpotLightComponent* RimBottomLeft2; // 0x5a8 (0x8)
	class USceneComponent* LightingPivot; // 0x5b0 (0x8)
	class UStaticMeshComponent* Plane; // 0x5b8 (0x8)
	bool bLightsScaledForVehicle; // 0x5c0 (0x1)
	unsigned char unreflected_5c1[0x7]; // 0x5c1 (0x7) 
	double DeltaScale; // 0x5c8 (0x8)
	bool IsActive; // 0x5d0 (0x1)
	bool AlwaysOn; // 0x5d1 (0x1)
	bool FloorEverAllowed; // 0x5d2 (0x1)
	bool debugConstructionLighting; // 0x5d3 (0x1)

	/* Functions */

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.UpdateFloorVisibility (Has no native function)
	void UpdateFloorVisibility(bool& CallFuncNotPreBoolReturnValue, bool& CallFuncIsShowingVehicleReturnValue, bool& CallFuncBooleanORReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.SwitchErebusLighting (Has no native function)
	void SwitchErebusLighting(bool& Visibility); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.UpdateLightingScale (Has no native function)
	void UpdateLightingScale(double& UpscaleForVehicle, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncSelectFloatReturnValue, double& CallFuncSelectFloatReturnValue1, bool& CallFuncIsShowingVehicleReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.SetFloorEnabled (Has no native function)
	void SetFloorEnabled(bool& FloorEnabled); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.LightControl (Has no native function)
	void LightControl(bool& Active, bool& CallFuncIsErebusReturnValue, class UFortGameUserSettings*& CallFuncGetFortGameUserSettingsReturnValue, bool& CallFuncIsMobileGameReturnValue, bool& CallFuncIsInPerformanceModeReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanORReturnValue1, bool& CallFuncIsErebusReturnValue1, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue, int& CallFuncGetShadowQualityReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, bool& CallFuncBooleanORReturnValue2, bool& CallFuncBooleanORReturnValue3); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.SwitchPCLighting (Has no native function)
	void SwitchPCLighting(bool& Visibility); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.SwitchMobileLighting (Has no native function)
	void SwitchMobileLighting(bool& NewParam); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.HandleLightingScale (Has no native function)
	void HandleLightingScale(double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue2, double& CallFuncMultiplyDoubleDoubleReturnValue3, double& CallFuncMultiplyDoubleDoubleReturnValue4, double& CallFuncMultiplyDoubleDoubleReturnValue5, double& CallFuncMultiplyDoubleDoubleReturnValue6, double& CallFuncMultiplyDoubleDoubleReturnValue7, double& CallFuncMultiplyDoubleDoubleReturnValue8, double& CallFuncMultiplyDoubleDoubleReturnValue9, struct FVector& CallFuncK2GetComponentScaleReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast1, double& CallFuncMultiplyDoubleDoubleAImplicitCast2, float& CallFuncSetAttenuationRadiusNewRadiusImplicitCast, float& CallFuncSetAttenuationRadiusNewRadiusImplicitCast1, float& CallFuncSetAttenuationRadiusNewRadiusImplicitCast2, double& CallFuncMultiplyDoubleDoubleAImplicitCast3, float& CallFuncSetAttenuationRadiusNewRadiusImplicitCast3, double& CallFuncMultiplyDoubleDoubleAImplicitCast4, float& CallFuncSetAttenuationRadiusNewRadiusImplicitCast4, double& CallFuncMultiplyDoubleDoubleAImplicitCast5, float& CallFuncSetAttenuationRadiusNewRadiusImplicitCast5, double& CallFuncMultiplyDoubleDoubleAImplicitCast6, float& CallFuncSetAttenuationRadiusNewRadiusImplicitCast6, double& CallFuncMultiplyDoubleDoubleAImplicitCast7, float& CallFuncSetAttenuationRadiusNewRadiusImplicitCast7, double& CallFuncMultiplyDoubleDoubleAImplicitCast8, float& CallFuncSetAttenuationRadiusNewRadiusImplicitCast8, double& CallFuncMultiplyDoubleDoubleAImplicitCast9, float& CallFuncSetAttenuationRadiusNewRadiusImplicitCast9); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.UpdateSettings (Has no native function)
	void UpdateSettings(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.OnSetFloorMaterial (Has no native function)
	void OnSetFloorMaterial(class UMaterialInterface*& InMaterialInstance); // (Event | Public | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.OnPreviewVisualsSpawned (Has no native function)
	void OnPreviewVisualsSpawned(bool& bUseSecondaryTransitionEffects, bool& bShowFloor); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.OnUpdateFloorMaterial (Has no native function)
	void OnUpdateFloorMaterial(bool& bEnableAutotestBackground); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.ExecuteUbergraph_WrapPreview (Has no native function)
	void ExecuteUbergraphWrapPreview(int& EntryPoint, struct FVector& CallFuncK2GetActorLocationReturnValue, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue, int& CallFuncGetShadowQualityReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue1, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, class UMaterialInterface*& K2NodeEventInMaterialInstance, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, bool& K2NodeEventbUseSecondaryTransitionEffects, bool& K2NodeEventbShowFloor, bool& CallFuncIsMobileGameReturnValue, class UFortGameUserSettings*& CallFuncGetFortGameUserSettingsReturnValue, bool& CallFuncIsInPerformanceModeReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncBooleanORReturnValue, bool& K2NodeEventbEnableAutotestBackground, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue1, bool& CallFuncIsErebusReturnValue, bool& CallFuncBooleanORReturnValue1, bool& CallFuncBooleanORReturnValue2); // (Final | 0x00008000)
};

