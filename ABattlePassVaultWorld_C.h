// BlueprintGeneratedClass /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C
// Size: 0x428
class ABattlePassVaultWorld_C : public AVaultWorld_C
{
	unsigned char unreflected_341[0x7]; // 0x341 (0x7) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x348 (0x8)
	class UStaticMeshComponent* floor; // 0x350 (0x8)
	float TransitionForwardFXTransitionFade46DACBD74D0A8B2278950785C007984A; // 0x358 (0x4)
	float TransitionForwardFade46DACBD74D0A8B2278950785C007984A; // 0x35c (0x4)
	float TransitionForwardForward46DACBD74D0A8B2278950785C007984A; // 0x360 (0x4)
	struct TEnumAsByte<ETimelineDirection> TransitionForwardDirection46DACBD74D0A8B2278950785C007984A; // 0x364 (0x1)
	unsigned char unreflected_365[0x3]; // 0x365 (0x3) 
	class UTimelineComponent* TransitionForward; // 0x368 (0x8)
	float BackgroundIntenstiyIntensity8C51F99C4026F0204F2184AD9661CD23; // 0x370 (0x4)
	struct TEnumAsByte<ETimelineDirection> BackgroundIntenstiyDirection8C51F99C4026F0204F2184AD9661CD23; // 0x374 (0x1)
	unsigned char unreflected_375[0x3]; // 0x375 (0x3) 
	class UTimelineComponent* BackgroundIntenstiy; // 0x378 (0x8)
	float ItemDetailsIntensityTextureIntensity1EC6205345E5A708DA53B5A9449F1700; // 0x380 (0x4)
	struct TEnumAsByte<ETimelineDirection> ItemDetailsIntensityDirection1EC6205345E5A708DA53B5A9449F1700; // 0x384 (0x1)
	unsigned char unreflected_385[0x3]; // 0x385 (0x3) 
	class UTimelineComponent* ItemDetailsIntensity; // 0x388 (0x8)
	float BackgroundEffectsSetStreaks50767E4640E86998EC96B7B2D57E5E27; // 0x390 (0x4)
	struct TEnumAsByte<ETimelineDirection> BackgroundEffectsDirection50767E4640E86998EC96B7B2D57E5E27; // 0x394 (0x1)
	unsigned char unreflected_395[0x3]; // 0x395 (0x3) 
	class UTimelineComponent* BackgroundEffects; // 0x398 (0x8)
	float IconDissolveNewTrack0983A4DA644BE5CFAED0C378063FC66FC; // 0x3a0 (0x4)
	struct TEnumAsByte<ETimelineDirection> IconDissolveDirection983A4DA644BE5CFAED0C378063FC66FC; // 0x3a4 (0x1)
	unsigned char unreflected_3a5[0x3]; // 0x3a5 (0x3) 
	class UTimelineComponent* IconDissolve; // 0x3a8 (0x8)
	float ItemDetailsIconXOffsetF4D1C4E246C708FA1F53EDA5A3FEE781; // 0x3b0 (0x4)
	float ItemDetailsXOffsetF4D1C4E246C708FA1F53EDA5A3FEE781; // 0x3b4 (0x4)
	struct TEnumAsByte<ETimelineDirection> ItemDetailsDirectionF4D1C4E246C708FA1F53EDA5A3FEE781; // 0x3b8 (0x1)
	unsigned char unreflected_3b9[0x7]; // 0x3b9 (0x7) 
	class UTimelineComponent* ItemDetails; // 0x3c0 (0x8)
	float FloorVisibilityFloorMaskCE7E338346E82397065B65AA77823F50; // 0x3c8 (0x4)
	struct TEnumAsByte<ETimelineDirection> FloorVisibilityDirectionCE7E338346E82397065B65AA77823F50; // 0x3cc (0x1)
	unsigned char unreflected_3cd[0x3]; // 0x3cd (0x3) 
	class UTimelineComponent* FloorVisibility; // 0x3d0 (0x8)
	float TransitionBackwardfxTransitionfade7073CD0840227233D3A64795A5A1B1B8; // 0x3d8 (0x4)
	float TransitionBackwardFade7073CD0840227233D3A64795A5A1B1B8; // 0x3dc (0x4)
	float TransitionBackwardBackward7073CD0840227233D3A64795A5A1B1B8; // 0x3e0 (0x4)
	struct TEnumAsByte<ETimelineDirection> TransitionBackwardDirection7073CD0840227233D3A64795A5A1B1B8; // 0x3e4 (0x1)
	unsigned char unreflected_3e5[0x3]; // 0x3e5 (0x3) 
	class UTimelineComponent* TransitionBackward; // 0x3e8 (0x8)
	class UMaterialInstance* FloorMI; // 0x3f0 (0x8)
	class UMaterialInstanceDynamic* FloorMID; // 0x3f8 (0x8)
	double BGIntensityMax; // 0x400 (0x8)
	double BGIntensityMid; // 0x408 (0x8)
	double BGIntensityMin; // 0x410 (0x8)
	bool bIsTransitioning; // 0x418 (0x1)
	enum EBackgroundIntensityLevel IntensityTransition; // 0x419 (0x1)
	bool bIsPageAMax; // 0x41a (0x1)
	bool bIsPageBMax; // 0x41b (0x1)
	float PageAXOffset; // 0x41c (0x4)
	float PageBXOffset; // 0x420 (0x4)
	float XOffsetAnimDistance; // 0x424 (0x4)

	/* Functions */

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.PageTransitionIntensityUpdate (Has no native function)
	void PageTransitionIntensityUpdate(class UMaterialInstanceDynamic*& MIDBackground, class UMaterialInstanceDynamic*& MIDFloor, enum EBackgroundIntensityLevel& TempbyteVariable, bool& TempboolVariable, bool& TempboolVariable1, enum EBackgroundIntensityLevel& TempbyteVariable1, bool& TempboolVariable2, float& K2NodeSelectDefault, bool& K2NodeSelectDefault1, bool& TempboolVariable3, float& K2NodeSelectDefault2, float& K2NodeSelectDefault3, bool& CallFuncNotEqualByteByteReturnValue, bool& CallFuncNotEqualByteByteReturnValue1, float& K2NodeSelectOption0ImplicitCast, float& K2NodeSelectOption1ImplicitCast, float& K2NodeSelectOption0ImplicitCast1, float& K2NodeSelectOption1ImplicitCast1, float& K2NodeSelectLowIntensityImplicitCast, float& K2NodeSelectHighIntensityImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackgroundBackward (Has no native function)
	void TransitionBackgroundBackward(double& Backward, double& fade, double& FXTransitionFade, class UMaterialInstanceDynamic*& Mid, double& CallFuncAddDoubleDoubleReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncAddDoubleDoubleReturnValue1, double& CallFuncSubtractDoubleDoubleReturnValue1, double& CallFuncLerpReturnValue, double& CallFuncLerpReturnValue1, double& CallFuncLerpReturnValue2, double& CallFuncLerpReturnValue3, double& CallFuncLerpReturnValue4, double& CallFuncLerpReturnValue5, double& CallFuncLerpAImplicitCast, double& CallFuncSubtractDoubleDoubleAImplicitCast, double& CallFuncLerpBImplicitCast, double& CallFuncAddDoubleDoubleBImplicitCast, double& CallFuncAddDoubleDoubleAImplicitCast, double& CallFuncAddDoubleDoubleAImplicitCast1, double& CallFuncSubtractDoubleDoubleBImplicitCast, double& CallFuncLerpBImplicitCast1, double& CallFuncAddDoubleDoubleBImplicitCast1, double& CallFuncLerpAImplicitCast1, double& CallFuncSubtractDoubleDoubleAImplicitCast1, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast1, double& CallFuncSubtractDoubleDoubleBImplicitCast1, float& CallFuncSetScalarParameterValueValueImplicitCast2, float& CallFuncSetScalarParameterValueValueImplicitCast3, float& CallFuncSetScalarParameterValueValueImplicitCast4, float& CallFuncSetScalarParameterValueValueImplicitCast5, float& CallFuncSetScalarParameterValueValueImplicitCast6, float& CallFuncSetScalarParameterValueValueImplicitCast7); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackgroundForward (Has no native function)
	void TransitionBackgroundForward(double& Forward, double& fade, double& FXTransitionFade, class UMaterialInstanceDynamic*& Mid, double& CallFuncAddDoubleDoubleReturnValue, double& CallFuncAddDoubleDoubleReturnValue1, double& CallFuncLerpReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncLerpReturnValue1, double& CallFuncLerpReturnValue2, double& CallFuncSubtractDoubleDoubleReturnValue1, double& CallFuncLerpReturnValue3, double& CallFuncLerpReturnValue4, double& CallFuncLerpReturnValue5, double& CallFuncLerpAImplicitCast, double& CallFuncAddDoubleDoubleAImplicitCast, double& CallFuncAddDoubleDoubleBImplicitCast, double& CallFuncLerpAImplicitCast1, double& CallFuncAddDoubleDoubleAImplicitCast1, double& CallFuncAddDoubleDoubleBImplicitCast1, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast1, float& CallFuncSetScalarParameterValueValueImplicitCast2, double& CallFuncSubtractDoubleDoubleBImplicitCast, double& CallFuncLerpBImplicitCast, double& CallFuncSubtractDoubleDoubleAImplicitCast, double& CallFuncLerpBImplicitCast1, double& CallFuncSubtractDoubleDoubleAImplicitCast1, float& CallFuncSetScalarParameterValueValueImplicitCast3, float& CallFuncSetScalarParameterValueValueImplicitCast4, double& CallFuncSubtractDoubleDoubleBImplicitCast1, float& CallFuncSetScalarParameterValueValueImplicitCast5, float& CallFuncSetScalarParameterValueValueImplicitCast6, float& CallFuncSetScalarParameterValueValueImplicitCast7); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.SetupBackgroundMaterial (Has no native function)
	void SetupBackgroundMaterial(class UTexture2D*& TextureBackground, struct FVaultWorldBackgroundData& BackgroundInfo, class UMaterialInstanceDynamic*& Mid, struct FName& TempnameVariable, float& CallFuncBreakVector3fX, float& CallFuncBreakVector3fY, float& CallFuncBreakVector3fZ, bool& CallFuncIsValidReturnValue, bool& TempboolVariable, struct FName& TempnameVariable1, struct FName& TempnameVariable2, struct FName& TempnameVariable3, bool& TempboolVariable1, struct FName& TempnameVariable4, struct FName& TempnameVariable5, bool& TempboolVariable2, struct FName& TempnameVariable6, struct FName& TempnameVariable7, bool& TempboolVariable3, struct FName& K2NodeSelectDefault, struct FName& K2NodeSelectDefault1, struct FName& K2NodeSelectDefault2, struct FName& K2NodeSelectDefault3, struct FName& TempnameVariable8, struct FName& TempnameVariable9, bool& TempboolVariable4, struct FName& K2NodeSelectDefault4, struct FVector3f& CallFuncBreakVector3fInVecImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(class AFortStaticMeshActor*& K2NodeDynamicCastAsFortStaticMeshActor, bool& K2NodeDynamicCastbSuccess); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionForward__FinishedFunc (Has no native function)
	void TransitionForwardFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionForward__UpdateFunc (Has no native function)
	void TransitionForwardUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackward__FinishedFunc (Has no native function)
	void TransitionBackwardFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackward__UpdateFunc (Has no native function)
	void TransitionBackwardUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.Background-Effects__FinishedFunc (Has no native function)
	void BackgroundEffectsFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.Background-Effects__UpdateFunc (Has no native function)
	void BackgroundEffectsUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.Floor-Visibility__FinishedFunc (Has no native function)
	void FloorVisibilityFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.Floor-Visibility__UpdateFunc (Has no native function)
	void FloorVisibilityUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetails__FinishedFunc (Has no native function)
	void ItemDetailsFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetails__UpdateFunc (Has no native function)
	void ItemDetailsUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.IconDissolve__FinishedFunc (Has no native function)
	void IconDissolveFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.IconDissolve__UpdateFunc (Has no native function)
	void IconDissolveUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetailsIntensity__FinishedFunc (Has no native function)
	void ItemDetailsIntensityFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetailsIntensity__UpdateFunc (Has no native function)
	void ItemDetailsIntensityUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.BackgroundIntenstiy__FinishedFunc (Has no native function)
	void BackgroundIntenstiyFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.BackgroundIntenstiy__UpdateFunc (Has no native function)
	void BackgroundIntenstiyUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnTransitionBackground (Has no native function)
	void OnTransitionBackground(bool& bPlayForward, enum EBackgroundIntensityLevel& IntensityTransition); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnSetupBackground (Has no native function)
	void OnSetupBackground(class UTexture2D*& LoadedBackgroundTexture, struct FVaultWorldBackgroundData& BackgroundInfo); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnUpdateDisplay (Has no native function)
	void OnUpdateDisplay(bool& bShowFloor, bool& bShowEffects); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnInitialBackgroundTransition (Has no native function)
	void OnInitialBackgroundTransition(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnTransitionItemDetails (Has no native function)
	void OnTransitionItemDetails(bool& bShowItemDetails); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnIntensityChange (Has no native function)
	void OnIntensityChange(bool& bToLowIntensity); // (Event | Public | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.ExecuteUbergraph_BattlePassVaultWorld (Has no native function)
	void ExecuteUbergraphBattlePassVaultWorld(int& EntryPoint, double& CallFuncDivideDoubleDoubleReturnValue, bool& K2NodeSwitchEnumCmpSuccess, double& CallFuncLerpReturnValue, bool& K2NodeSwitchEnumCmpSuccess1, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, bool& K2NodeEventbPlayForward, enum EBackgroundIntensityLevel& K2NodeEventIntensityTransition, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncNotPreBoolReturnValue1, class UTexture2D*& K2NodeEventLoadedBackgroundTexture, struct FVaultWorldBackgroundData& K2NodeEventBackgroundInfo, bool& K2NodeEventbShowFloor, bool& K2NodeEventbShowEffects, bool& K2NodeEventbShowItemDetails, bool& CallFuncNotPreBoolReturnValue2, bool& TempboolVariable, double& CallFuncLerpReturnValue1, bool& CallFuncNotPreBoolReturnValue3, float& CallFuncConvBoolToFloatReturnValue, bool& CallFuncNotPreBoolReturnValue4, bool& K2NodeEventbToLowIntensity, double& CallFuncLerpReturnValue2, bool& CallFuncBooleanXORReturnValue, double& CallFuncTransitionBackgroundForwardFXTransitionFadeImplicitCast, double& CallFuncTransitionBackgroundForwardFXTransitionFadeImplicitCast1, double& CallFuncTransitionBackgroundForwardFadeImplicitCast, double& CallFuncTransitionBackgroundForwardFadeImplicitCast1, double& CallFuncTransitionBackgroundForwardForwardImplicitCast, double& CallFuncTransitionBackgroundForwardForwardImplicitCast1, double& CallFuncTransitionBackgroundBackwardFXTransitionFadeImplicitCast, double& CallFuncTransitionBackgroundBackwardFXTransitionFadeImplicitCast1, double& CallFuncTransitionBackgroundBackwardFadeImplicitCast, double& CallFuncTransitionBackgroundBackwardFadeImplicitCast1, double& CallFuncTransitionBackgroundBackwardBackwardImplicitCast, double& CallFuncTransitionBackgroundBackwardBackwardImplicitCast1, float& CallFuncSetPlayRateNewRateImplicitCast, double& CallFuncLerpAlphaImplicitCast, double& CallFuncLerpAlphaImplicitCast1, double& CallFuncLerpAlphaImplicitCast2, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast1, float& CallFuncSetScalarParameterValueValueImplicitCast2, float& CallFuncSetScalarParameterValueValueImplicitCast3, float& CallFuncSetScalarParameterValueValueImplicitCast4, float& CallFuncSetScalarParameterValueValueImplicitCast5); // (Final | 0x00008000 | HasDefaults)
};

