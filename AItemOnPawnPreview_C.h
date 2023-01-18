// BlueprintGeneratedClass /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C
// Size: 0x768
class AItemOnPawnPreview_C : public AFortItemPreviewOnPawnActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x670 (0x8)
	class UArrowComponent* Arrow1; // 0x678 (0x8)
	class UDirectionalLightComponent* DirectionalLightForAtmospherePC; // 0x680 (0x8)
	class USkyLightComponent* SkyLightPC; // 0x688 (0x8)
	class UArrowComponent* Arrow; // 0x690 (0x8)
	class USkyLightComponent* SkyLightLowMobile; // 0x698 (0x8)
	class UDirectionalLightComponent* DirectionalLightMobile; // 0x6a0 (0x8)
	class USpotLightComponent* KeyLightStandaloneForSwitch; // 0x6a8 (0x8)
	class USpotLightComponent* KeyLight5; // 0x6b0 (0x8)
	class USpotLightComponent* KeyLight6; // 0x6b8 (0x8)
	class USpotLightComponent* KeyLigh3; // 0x6c0 (0x8)
	class USpotLightComponent* KeyLight2; // 0x6c8 (0x8)
	class USpotLightComponent* BounceRear1; // 0x6d0 (0x8)
	class USpotLightComponent* RimLowerRight1; // 0x6d8 (0x8)
	class USpotLightComponent* RimLeft1; // 0x6e0 (0x8)
	class USpotLightComponent* RimTopRight1; // 0x6e8 (0x8)
	class USpotLightComponent* RimBottomLeft1; // 0x6f0 (0x8)
	class USpotLightComponent* Bounce1; // 0x6f8 (0x8)
	class USceneComponent* LightTransform; // 0x700 (0x8)
	class UStaticMeshComponent* Plane; // 0x708 (0x8)
	class USkeletalMeshComponent* SampleMesh; // 0x710 (0x8)
	bool AlwaysOn; // 0x718 (0x1)
	bool IsActive; // 0x719 (0x1)
	bool debugConstructionLighting; // 0x71a (0x1)
	unsigned char unreflected_71b[0x5]; // 0x71b (0x5) 
	class UParticleSystemComponent* ObscuringLoopEmitter; // 0x720 (0x8)
	struct FRotator ToonLightRotatio; // 0x728 (0x18)
	bool bIsBattlePassReward; // 0x740 (0x1)
	unsigned char unreflected_741[0x7]; // 0x741 (0x7) 
	struct FTimerHandle* LODStreamingSafetyTimer; // 0x748 (0x8)
	double LODStreamingSafetyDuration; // 0x750 (0x8)
	class UMaterialInterface* DefaultFloorMaterial; // 0x758 (0x8)
	class UMaterialInterface* CustomFloorMaterial; // 0x760 (0x8)

	/* Functions */

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchErebusLighting (Has no native function)
	void SwitchErebusLighting(bool& Visibility, struct TArray<class USpotLightComponent*>& llights); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.SetFloorEnabled (Has no native function)
	void SetFloorEnabled(bool& ShowFloor, bool& CallFuncNotPreBoolReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.LightControl (Has no native function)
	void LightControl(bool& Active, bool& CallFuncIsErebusReturnValue, class UFortGameUserSettings*& CallFuncGetFortGameUserSettingsReturnValue, bool& CallFuncIsMobileGameReturnValue, bool& CallFuncIsInPerformanceModeReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanORReturnValue1, bool& CallFuncIsErebusReturnValue1, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue, int& CallFuncGetShadowQualityReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, bool& CallFuncBooleanORReturnValue2, bool& CallFuncBooleanORReturnValue3); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchPCLighting (Has no native function)
	void SwitchPCLighting(bool& Visibility); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchMobileLighting (Has no native function)
	void SwitchMobileLighting(bool& NewParam); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.UpdateSettings (Has no native function)
	void UpdateSettings(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnSetFloorMaterial (Has no native function)
	void OnSetFloorMaterial(class UMaterialInterface*& InMaterialInstance); // (Event | Public | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnAllLODStreamingComplete (Has no native function)
	void OnAllLODStreamingComplete(); // (Event | Public | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnCurrentVisualsCleanedUp (Has no native function)
	void OnCurrentVisualsCleanedUp(); // (Event | Public | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnPreviewVisualsSpawned (Has no native function)
	void OnPreviewVisualsSpawned(bool& bUseSecondaryTransitionEffects, bool& bShowFloor); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnUpdateFloorMaterial (Has no native function)
	void OnUpdateFloorMaterial(bool& bEnableAutotestBackground); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.Backup_LODStreamingFailed (Has no native function)
	void BackupLODStreamingFailed(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.ExecuteUbergraph_ItemOnPawnPreview (Has no native function)
	void ExecuteUbergraphItemOnPawnPreview(int& EntryPoint, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue, int& CallFuncGetShadowQualityReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, bool& TempboolVariable, class UMaterialInterface*& K2NodeEventInMaterialInstance, struct FVector& CallFuncGetPawnLocationReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue1, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue2, bool& TempboolVariable1, class UAthenaSkyDiveContrailItemDefinition*& K2NodeDynamicCastAsAthenaSkyDiveContrailItemDefinition, bool& K2NodeDynamicCastbSuccess, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FVector& CallFuncGetActorForwardVectorReturnValue, bool& K2NodeEventbUseSecondaryTransitionEffects, bool& K2NodeEventbShowFloor, struct FVector& CallFuncGreaterGreaterVectorRotatorReturnValue, struct FLinearColor& CallFuncConvVectorToLinearColorReturnValue, bool& CallFuncIsMobileGameReturnValue, class UFortGameUserSettings*& CallFuncGetFortGameUserSettingsReturnValue, bool& K2NodeEventbEnableAutotestBackground, bool& CallFuncIsInPerformanceModeReturnValue, bool& CallFuncBooleanORReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, bool& CallFuncIsErebusReturnValue, bool& CallFuncBooleanORReturnValue1, bool& CallFuncK2AttachToComponentReturnValue, bool& CallFuncBooleanORReturnValue2, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, bool& CallFuncIsValidReturnValue, class UMaterialInterface*& K2NodeSelectDefault, bool& CallFuncIsValidReturnValue1, class UMaterialInterface*& K2NodeSelectDefault1, bool& TempboolBExecutionHappenedVariable, bool& TempboolAExecutionHappenedVariable, bool& CallFuncBooleanANDReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

