// BlueprintGeneratedClass /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C
// Size: 0x358
class AVaultCharacterLightingBP_C : public AActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x288 (0x8)
	class UArrowComponent* Arrow1; // 0x290 (0x8)
	class USpotLightComponent* KeyLight4; // 0x298 (0x8)
	class USpotLightComponent* KeyLight3; // 0x2a0 (0x8)
	class USpotLightComponent* KeyLight2; // 0x2a8 (0x8)
	class UPostProcessComponent* PostProcessMobile; // 0x2b0 (0x8)
	class UPostProcessComponent* PostProcessLOWPC; // 0x2b8 (0x8)
	class USkyLightComponent* SkyLightLOWPC; // 0x2c0 (0x8)
	class UDirectionalLightComponent* DirectionalLightLOWPC; // 0x2c8 (0x8)
	class UArrowComponent* Arrow; // 0x2d0 (0x8)
	class UDirectionalLightComponent* DirectionalLightMobile; // 0x2d8 (0x8)
	class USkyLightComponent* SkyLightLowMobil; // 0x2e0 (0x8)
	class USkyLightComponent* SkyLight; // 0x2e8 (0x8)
	class USpotLightComponent* RimLowerRight; // 0x2f0 (0x8)
	class USpotLightComponent* RimLeft; // 0x2f8 (0x8)
	class USpotLightComponent* RimTopRight; // 0x300 (0x8)
	class USpotLightComponent* RimBottomLeft; // 0x308 (0x8)
	class USpotLightComponent* KeyLight; // 0x310 (0x8)
	class USpotLightComponent* Bounce; // 0x318 (0x8)
	class USpotLightComponent* BounceRear; // 0x320 (0x8)
	class USceneComponent* SharedRoot; // 0x328 (0x8)
	bool DebugMobileLighting; // 0x330 (0x1)
	bool DebugLightingPC; // 0x331 (0x1)
	bool IsActive; // 0x332 (0x1)
	bool AlwaysOn; // 0x333 (0x1)
	bool DebugLightingLOWDetailPC; // 0x334 (0x1)
	unsigned char unreflected_335[0x3]; // 0x335 (0x3) 
	struct FLinearColor MPCManualSunlightVector; // 0x338 (0x10)
	struct FLinearColor MPCManualSunlightColor; // 0x348 (0x10)

	/* Functions */

	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchPCLighting_LOWDetail (Has no native function)
	void SwitchPCLightingLOWDetail(bool& Visibility); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchPCLighting (Has no native function)
	void SwitchPCLighting(bool& Visibility); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchMobileLighting (Has no native function)
	void SwitchMobileLighting(bool& Visibilty); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.UpdateSettings (Has no native function)
	void UpdateSettings(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.ToggleLighting (Has no native function)
	void ToggleLighting(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.OVERRIDELIGHTING (Has no native function)
	void OVERRIDELIGHTING(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.LightControl (Has no native function)
	void LightControl(bool& NewParam); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.ExecuteUbergraph_VaultCharacterLightingBP (Has no native function)
	void ExecuteUbergraphVaultCharacterLightingBP(int& EntryPoint, bool& CallFuncIsErebusReturnValue, bool& CallFuncIsMobilePlatformReturnValue, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue, int& CallFuncGetShadowQualityReturnValue, bool& CallFuncIsMobilePlatformReturnValue1, bool& CallFuncEqualEqualIntIntReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanORReturnValue1, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue1, int& CallFuncGetShadowQualityReturnValue1, bool& CallFuncEqualEqualIntIntReturnValue1, bool& CallFuncBooleanORReturnValue2, bool& K2NodeCustomEventNewParam, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncIsErebusReturnValue1, bool& CallFuncBooleanORReturnValue3, bool& CallFuncIsErebusReturnValue2, bool& CallFuncBooleanORReturnValue4); // (Final | 0x00008000)
};

