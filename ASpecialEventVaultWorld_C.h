// BlueprintGeneratedClass /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C
// Size: 0x3c8
class ASpecialEventVaultWorld_C : public AVaultWorld_C
{
	unsigned char unreflected_341[0x7]; // 0x341 (0x7) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x348 (0x8)
	class UStaticMeshComponent* floor; // 0x350 (0x8)
	float ItemDetailsXOffset1EDCEF5F41216A9DADD25897C8B68493; // 0x358 (0x4)
	struct TEnumAsByte<ETimelineDirection> ItemDetailsDirection1EDCEF5F41216A9DADD25897C8B68493; // 0x35c (0x1)
	unsigned char unreflected_35d[0x3]; // 0x35d (0x3) 
	class UTimelineComponent* ItemDetails; // 0x360 (0x8)
	float FloorVisibilityFloorMask37382717410D795E9E7E0990FC3EFCC2; // 0x368 (0x4)
	struct TEnumAsByte<ETimelineDirection> FloorVisibilityDirection37382717410D795E9E7E0990FC3EFCC2; // 0x36c (0x1)
	unsigned char unreflected_36d[0x3]; // 0x36d (0x3) 
	class UTimelineComponent* FloorVisibility; // 0x370 (0x8)
	float BackgroundEffectsSetStreaks7B5688E44724D9F68D3C20A520093829; // 0x378 (0x4)
	struct TEnumAsByte<ETimelineDirection> BackgroundEffectsDirection7B5688E44724D9F68D3C20A520093829; // 0x37c (0x1)
	unsigned char unreflected_37d[0x3]; // 0x37d (0x3) 
	class UTimelineComponent* BackgroundEffects; // 0x380 (0x8)
	float TransitionForwardFXTransitionFadeFDB9DC244ED5578954F07A87EDA84CA5; // 0x388 (0x4)
	float TransitionForwardPreTransitionOffsetFDB9DC244ED5578954F07A87EDA84CA5; // 0x38c (0x4)
	float TransitionForwardForwardFDB9DC244ED5578954F07A87EDA84CA5; // 0x390 (0x4)
	struct TEnumAsByte<ETimelineDirection> TransitionForwardDirectionFDB9DC244ED5578954F07A87EDA84CA5; // 0x394 (0x1)
	unsigned char unreflected_395[0x3]; // 0x395 (0x3) 
	class UTimelineComponent* TransitionForward; // 0x398 (0x8)
	float TransitionBackwardfxTransitionfade9CCDE9524354AF859735079DD2ED12AA; // 0x3a0 (0x4)
	float TransitionBackwardPreTransitionOffset9CCDE9524354AF859735079DD2ED12AA; // 0x3a4 (0x4)
	float TransitionBackwardBackward9CCDE9524354AF859735079DD2ED12AA; // 0x3a8 (0x4)
	struct TEnumAsByte<ETimelineDirection> TransitionBackwardDirection9CCDE9524354AF859735079DD2ED12AA; // 0x3ac (0x1)
	unsigned char unreflected_3ad[0x3]; // 0x3ad (0x3) 
	class UTimelineComponent* TransitionBackward; // 0x3b0 (0x8)
	class UMaterialInstance* FloorMI; // 0x3b8 (0x8)
	class UMaterialInstanceDynamic* FloorMID; // 0x3c0 (0x8)

	/* Functions */

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionBackgroundBackward (Has no native function)
	void TransitionBackgroundBackward(double& Backward, double& PreTransitionOffset, double& FXTransitionFade, class UMaterialInstanceDynamic*& Mid, double& CallFuncLerpReturnValue, double& CallFuncLerpReturnValue1, double& CallFuncLerpReturnValue2, double& CallFuncLerpReturnValue3, double& CallFuncLerpReturnValue4, double& CallFuncLerpReturnValue5, double& CallFuncLerpReturnValue6, double& CallFuncLerpReturnValue7, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast1, float& CallFuncSetScalarParameterValueValueImplicitCast2, float& CallFuncSetScalarParameterValueValueImplicitCast3, float& CallFuncSetScalarParameterValueValueImplicitCast4, float& CallFuncSetScalarParameterValueValueImplicitCast5, float& CallFuncSetScalarParameterValueValueImplicitCast6, float& CallFuncSetScalarParameterValueValueImplicitCast7, float& CallFuncSetScalarParameterValueValueImplicitCast8, float& CallFuncSetScalarParameterValueValueImplicitCast9); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionBackgroundForward (Has no native function)
	void TransitionBackgroundForward(double& Forward, double& PreTransitionOffset, double& FXTransitionFade, class UMaterialInstanceDynamic*& Mid, double& CallFuncLerpReturnValue, double& CallFuncLerpReturnValue1, double& CallFuncLerpReturnValue2, double& CallFuncLerpReturnValue3, double& CallFuncLerpReturnValue4, double& CallFuncLerpReturnValue5, double& CallFuncLerpReturnValue6, double& CallFuncLerpReturnValue7, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast1, float& CallFuncSetScalarParameterValueValueImplicitCast2, float& CallFuncSetScalarParameterValueValueImplicitCast3, float& CallFuncSetScalarParameterValueValueImplicitCast4, float& CallFuncSetScalarParameterValueValueImplicitCast5, float& CallFuncSetScalarParameterValueValueImplicitCast6, float& CallFuncSetScalarParameterValueValueImplicitCast7, float& CallFuncSetScalarParameterValueValueImplicitCast8, float& CallFuncSetScalarParameterValueValueImplicitCast9); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.SetupBackgroundMaterial (Has no native function)
	void SetupBackgroundMaterial(class UTexture2D*& TextureBackground, struct FVaultWorldBackgroundData& BackgroundInfo, class UMaterialInstanceDynamic*& Mid, struct FName& TempnameVariable, bool& CallFuncIsValidReturnValue, struct FName& TempnameVariable1, bool& TempboolVariable, struct FName& TempnameVariable2, struct FName& TempnameVariable3, bool& TempboolVariable1, struct FName& K2NodeSelectDefault, struct FName& K2NodeSelectDefault1, struct FName& TempnameVariable4, struct FName& TempnameVariable5, bool& TempboolVariable2, struct FName& K2NodeSelectDefault2); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(class AFortStaticMeshActor*& K2NodeDynamicCastAsFortStaticMeshActor, bool& K2NodeDynamicCastbSuccess); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionForward__FinishedFunc (Has no native function)
	void TransitionForwardFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionForward__UpdateFunc (Has no native function)
	void TransitionForwardUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionBackward__FinishedFunc (Has no native function)
	void TransitionBackwardFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionBackward__UpdateFunc (Has no native function)
	void TransitionBackwardUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.Background-Effects__FinishedFunc (Has no native function)
	void BackgroundEffectsFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.Background-Effects__UpdateFunc (Has no native function)
	void BackgroundEffectsUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.Floor-Visibility__FinishedFunc (Has no native function)
	void FloorVisibilityFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.Floor-Visibility__UpdateFunc (Has no native function)
	void FloorVisibilityUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.ItemDetails__FinishedFunc (Has no native function)
	void ItemDetailsFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.ItemDetails__UpdateFunc (Has no native function)
	void ItemDetailsUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnTransitionBackground (Has no native function)
	void OnTransitionBackground(bool& bPlayForward, enum EBackgroundIntensityLevel& IntensityTransition); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnSetupBackground (Has no native function)
	void OnSetupBackground(class UTexture2D*& LoadedBackgroundTexture, struct FVaultWorldBackgroundData& BackgroundInfo); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnUpdateDisplay (Has no native function)
	void OnUpdateDisplay(bool& bShowFloor, bool& bShowEffects); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnInitialBackgroundTransition (Has no native function)
	void OnInitialBackgroundTransition(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnTransitionItemDetails (Has no native function)
	void OnTransitionItemDetails(bool& bShowItemDetails); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnUpdateMaterialIndex (Has no native function)
	void OnUpdateMaterialIndex(int& MaterialIndex); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.ExecuteUbergraph_SpecialEventVaultWorld (Has no native function)
	void ExecuteUbergraphSpecialEventVaultWorld(int& EntryPoint, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, bool& K2NodeEventbPlayForward, enum EBackgroundIntensityLevel& K2NodeEventIntensityTransition, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncNotPreBoolReturnValue1, class UTexture2D*& K2NodeEventLoadedBackgroundTexture, struct FVaultWorldBackgroundData& K2NodeEventBackgroundInfo, bool& K2NodeEventbShowFloor, bool& K2NodeEventbShowEffects, bool& K2NodeEventbShowItemDetails, bool& CallFuncNotPreBoolReturnValue2, int& K2NodeEventMaterialIndex, bool& CallFuncEqualEqualIntIntReturnValue, double& CallFuncSelectFloatReturnValue, double& CallFuncTransitionBackgroundForwardFXTransitionFadeImplicitCast, double& CallFuncTransitionBackgroundForwardFXTransitionFadeImplicitCast1, double& CallFuncTransitionBackgroundForwardPreTransitionOffsetImplicitCast, double& CallFuncTransitionBackgroundForwardPreTransitionOffsetImplicitCast1, double& CallFuncTransitionBackgroundForwardForwardImplicitCast, double& CallFuncTransitionBackgroundForwardForwardImplicitCast1, double& CallFuncTransitionBackgroundBackwardFXTransitionFadeImplicitCast, double& CallFuncTransitionBackgroundBackwardFXTransitionFadeImplicitCast1, double& CallFuncTransitionBackgroundBackwardPreTransitionOffsetImplicitCast, double& CallFuncTransitionBackgroundBackwardPreTransitionOffsetImplicitCast1, double& CallFuncTransitionBackgroundBackwardBackwardImplicitCast, double& CallFuncTransitionBackgroundBackwardBackwardImplicitCast1, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast1); // (Final | 0x00008000 | HasDefaults)
};

