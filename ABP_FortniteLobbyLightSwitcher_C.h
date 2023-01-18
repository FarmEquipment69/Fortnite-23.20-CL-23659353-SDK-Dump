// BlueprintGeneratedClass /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C
// Size: 0x314
class ABP_FortniteLobbyLightSwitcher_C : public AActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x288 (0x8)
	class USceneComponent* DefaultSceneRoot; // 0x290 (0x8)
	class ADirectionalLight* DirectionLight; // 0x298 (0x8)
	class ASkyLight* SkyLight; // 0x2a0 (0x8)
	struct TArray<class APointLight*> Pointlights; // 0x2a8 (0x10)
	class AExponentialHeightFog* ExponentialHeightFog; // 0x2b8 (0x8)
	class ADirectionalLight* DirectionalLightLowDetailMode; // 0x2c0 (0x8)
	struct TArray<class AEmitter*> ParticleSystems; // 0x2c8 (0x10)
	bool IsActive; // 0x2d8 (0x1)
	bool DebugLOWQualityLighting; // 0x2d9 (0x1)
	unsigned char unreflected_2da[0x6]; // 0x2da (0x6) 
	class ASkyLight* SkyLightLowDetailMode; // 0x2e0 (0x8)
	class AExponentialHeightFog* ExponentialHeightfogLowDetailMode; // 0x2e8 (0x8)
	bool LOWFXSettingUseMobileLighting; // 0x2f0 (0x1)
	bool IsLightalreadyActive; // 0x2f1 (0x1)
	unsigned char unreflected_2f2[0x2]; // 0x2f2 (0x2) 
	struct FLinearColor MPCManualSunlightVector; // 0x2f4 (0x10)
	struct FLinearColor MPCManualSunlightColor; // 0x304 (0x10)

	/* Functions */

	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.SetVisiblityofDetailSpecificMeshes (Has no native function)
	void SetVisiblityofDetailSpecificMeshes(int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, bool& CallFuncIsErebusReturnValue, bool& CallFuncIsMobileGameReturnValue, struct FString& CallFuncGetPlatformNameReturnValue, bool& CallFuncEqualEqualStrStrReturnValue, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue, struct TArray<class ABP_DetailLevelMesh_C*>& CallFuncGetAllActorsOfClassOutActors, int& CallFuncGetShadowQualityReturnValue, class ABP_DetailLevelMesh_C*& CallFuncArrayGetItem, bool& CallFuncLessEqualIntIntReturnValue, class ABP_DetailLevelMesh_C*& K2NodeDynamicCastAsBPDetailLevelMesh, bool& K2NodeDynamicCastbSuccess, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanORReturnValue1, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanORReturnValue2, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.SetVisiblityofSceneLighting (Has no native function)
	void SetVisiblityofSceneLighting(bool& Activate, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable1, int& CallFuncAddIntIntReturnValue1, int& TempintArrayIndexVariable1, bool& CallFuncIsErebusReturnValue, bool& CallFuncIsErebusReturnValue1, bool& CallFuncIsErebusReturnValue2, bool& CallFuncIsMobileGameReturnValue, bool& CallFuncIsMobileGameReturnValue1, bool& CallFuncIsMobileGameReturnValue2, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsValidReturnValue3, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue, bool& CallFuncIsValidReturnValue4, int& CallFuncGetVisualEffectQualityReturnValue, int& CallFuncGetShadowQualityReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, bool& CallFuncEqualEqualIntIntReturnValue1, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanORReturnValue1, bool& CallFuncIsValidReturnValue5, bool& CallFuncBooleanORReturnValue2, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncBooleanORReturnValue3, bool& CallFuncIsValidReturnValue6, bool& CallFuncIsValidReturnValue7, bool& CallFuncIsValidReturnValue8, bool& CallFuncIsValidReturnValue9, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue1, int& CallFuncGetVisualEffectQualityReturnValue1, int& CallFuncGetShadowQualityReturnValue1, bool& CallFuncEqualEqualIntIntReturnValue2, bool& CallFuncEqualEqualIntIntReturnValue3, bool& CallFuncBooleanANDReturnValue2, bool& CallFuncBooleanORReturnValue4, bool& CallFuncBooleanORReturnValue5, bool& CallFuncIsValidReturnValue10, bool& CallFuncBooleanORReturnValue6, bool& CallFuncBooleanANDReturnValue3, bool& CallFuncBooleanORReturnValue7, bool& CallFuncIsValidReturnValue11, bool& CallFuncIsValidReturnValue12, bool& CallFuncIsValidReturnValue13, bool& CallFuncIsValidReturnValue14, bool& CallFuncIsValidReturnValue15, bool& CallFuncIsValidReturnValue16, bool& CallFuncIsValidReturnValue17, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue2, int& CallFuncGetVisualEffectQualityReturnValue2, class AEmitter*& CallFuncArrayGetItem, bool& CallFuncEqualEqualIntIntReturnValue4, bool& CallFuncIsValidReturnValue18, bool& CallFuncBooleanANDReturnValue4, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, int& CallFuncGetShadowQualityReturnValue2, bool& CallFuncEqualEqualIntIntReturnValue5, bool& CallFuncIsValidReturnValue19, bool& CallFuncBooleanORReturnValue8, bool& CallFuncBooleanORReturnValue9, bool& CallFuncBooleanORReturnValue10, bool& CallFuncBooleanANDReturnValue5, bool& CallFuncBooleanORReturnValue11, class APointLight*& CallFuncArrayGetItem1, bool& CallFuncIsValidReturnValue20, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessIntIntReturnValue1, bool& CallFuncIsValidReturnValue21, bool& CallFuncIsValidReturnValue22); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.EnableLobbySetLighting (Has no native function)
	void EnableLobbySetLighting(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.DisableLobbySetLighting (Has no native function)
	void DisableLobbySetLighting(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.UpdateSettings (Has no native function)
	void UpdateSettings(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.ExecuteUbergraph_BP_FortniteLobbyLightSwitcher (Has no native function)
	void ExecuteUbergraphBPFortniteLobbyLightSwitcher(int& EntryPoint, bool& CallFuncIsErebusReturnValue, bool& TempboolTrueifbreakwashitVariable, int& TempintArrayIndexVariable, bool& CallFuncNotPreBoolReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue, int& CallFuncGetVisualEffectQualityReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, int& CallFuncGetShadowQualityReturnValue, bool& CallFuncEqualEqualIntIntReturnValue1, struct TArray<class AFortnitePartyBackdrop_Camera_C*>& CallFuncGetAllActorsOfClassOutActors, bool& CallFuncBooleanANDReturnValue, class AFortnitePartyBackdrop_Camera_C*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncIsMobileGameReturnValue, bool& CallFuncBooleanORReturnValue, int& TempintLoopCounterVariable, bool& CallFuncBooleanORReturnValue1, bool& CallFuncBooleanORReturnValue2, bool& CallFuncLessIntIntReturnValue, bool& CallFuncBooleanANDReturnValue1, int& CallFuncAddIntIntReturnValue); // (Final | 0x00008000 | HasDefaults)
};

