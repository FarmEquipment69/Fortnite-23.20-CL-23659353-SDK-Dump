// Class /Script/Engine.GameUserSettings
// Size: 0x148
class UGameUserSettings : public UObject
{
	bool bUseVSync; // 0x28 (0x1)
	bool bUseDynamicResolution; // 0x29 (0x1)
	unsigned char unreflected_2a[0x5e]; // 0x2a (0x5e) 
	uint32_t ResolutionSizeX; // 0x88 (0x4)
	uint32_t ResolutionSizeY; // 0x8c (0x4)
	uint32_t LastUserConfirmedResolutionSizeX; // 0x90 (0x4)
	uint32_t LastUserConfirmedResolutionSizeY; // 0x94 (0x4)
	int WindowPosX; // 0x98 (0x4)
	int WindowPosY; // 0x9c (0x4)
	int FullscreenMode; // 0xa0 (0x4)
	int LastConfirmedFullscreenMode; // 0xa4 (0x4)
	int PreferredFullscreenMode; // 0xa8 (0x4)
	uint32_t Version; // 0xac (0x4)
	int AudioQualityLevel; // 0xb0 (0x4)
	int LastConfirmedAudioQualityLevel; // 0xb4 (0x4)
	float FrameRateLimit; // 0xb8 (0x4)
	unsigned char unreflected_bc[0x4]; // 0xbc (0x4) 
	int DesiredScreenWidth; // 0xc0 (0x4)
	bool bUseDesiredScreenHeight; // 0xc4 (0x1)
	unsigned char unreflected_c5[0x3]; // 0xc5 (0x3) 
	int DesiredScreenHeight; // 0xc8 (0x4)
	int LastUserConfirmedDesiredScreenWidth; // 0xcc (0x4)
	int LastUserConfirmedDesiredScreenHeight; // 0xd0 (0x4)
	float LastRecommendedScreenWidth; // 0xd4 (0x4)
	float LastRecommendedScreenHeight; // 0xd8 (0x4)
	float LastCPUBenchmarkResult; // 0xdc (0x4)
	float LastGPUBenchmarkResult; // 0xe0 (0x4)
	unsigned char unreflected_e4[0x4]; // 0xe4 (0x4) 
	struct TArray<float> LastCPUBenchmarkSteps; // 0xe8 (0x10)
	struct TArray<float> LastGPUBenchmarkSteps; // 0xf8 (0x10)
	float LastGPUBenchmarkMultiplier; // 0x108 (0x4)
	bool bUseHDRDisplayOutput; // 0x10c (0x1)
	unsigned char unreflected_10d[0x3]; // 0x10d (0x3) 
	int HDRDisplayOutputNits; // 0x110 (0x4)
	unsigned char unreflected_114[0x24]; // 0x114 (0x24) 
	struct FMulticastInlineDelegate OnGameUserSettingsUINeedsUpdate; // 0x138 (0x10)

	/* Functions */

	// Function /Script/Engine.GameUserSettings.ValidateSettings (Underlying native function: ValidateSettings 0x6adf948)
	void ValidateSettings(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SupportsHDRDisplayOutput (Underlying native function: SupportsHDRDisplayOutput 0x8a651c8)
	bool SupportsHDRDisplayOutput(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.SetVSyncEnabled (Underlying native function: SetVSyncEnabled 0x9da2268)
	void SetVSyncEnabled(bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetVisualEffectQuality (Underlying native function: SetVisualEffectQuality 0x9da2434)
	void SetVisualEffectQuality(int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetViewDistanceQuality (Underlying native function: SetViewDistanceQuality 0x9da22e4)
	void SetViewDistanceQuality(int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetToDefaults (Underlying native function: SetToDefaults 0x814132c)
	void SetToDefaults(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetTextureQuality (Underlying native function: SetTextureQuality 0x9da21e8)
	void SetTextureQuality(int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetShadowQuality (Underlying native function: SetShadowQuality 0x9da1b64)
	void SetShadowQuality(int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetShadingQuality (Underlying native function: SetShadingQuality 0x9da1ae4)
	void SetShadingQuality(int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetScreenResolution (Underlying native function: SetScreenResolution 0x9da1a68)
	void SetScreenResolution(struct FIntPoint*& Resolution); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetResolutionScaleValueEx (Underlying native function: SetResolutionScaleValueEx 0x9da19e4)
	void SetResolutionScaleValueEx(float& NewScaleValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetResolutionScaleValue (Underlying native function: SetResolutionScaleValue 0x9da1960)
	void SetResolutionScaleValue(int& NewScaleValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetResolutionScaleNormalized (Underlying native function: SetResolutionScaleNormalized 0x9da18c4)
	void SetResolutionScaleNormalized(float& NewScaleNormalized); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetReflectionQuality (Underlying native function: SetReflectionQuality 0x9da1844)
	void SetReflectionQuality(int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetPostProcessingQuality (Underlying native function: SetPostProcessingQuality 0x9da17c4)
	void SetPostProcessingQuality(int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetOverallScalabilityLevel (Underlying native function: SetOverallScalabilityLevel 0x9da1538)
	void SetOverallScalabilityLevel(int& Value); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetGlobalIlluminationQuality (Underlying native function: SetGlobalIlluminationQuality 0x9da0fb8)
	void SetGlobalIlluminationQuality(int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetFullscreenMode (Underlying native function: SetFullscreenMode 0x9da0e40)
	void SetFullscreenMode(struct TEnumAsByte<EWindowMode>& InFullscreenMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetFrameRateLimit (Underlying native function: SetFrameRateLimit 0x9da0dbc)
	void SetFrameRateLimit(float& NewLimit); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetFoliageQuality (Underlying native function: SetFoliageQuality 0x9da0c58)
	void SetFoliageQuality(int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetDynamicResolutionEnabled (Underlying native function: SetDynamicResolutionEnabled 0x9da0b28)
	void SetDynamicResolutionEnabled(bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetBenchmarkFallbackValues (Underlying native function: SetBenchmarkFallbackValues 0x9da0a8c)
	void SetBenchmarkFallbackValues(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetAudioQualityLevel (Underlying native function: SetAudioQualityLevel 0x9da08f0)
	void SetAudioQualityLevel(int& QualityLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SetAntiAliasingQuality (Underlying native function: SetAntiAliasingQuality 0x9da0870)
	void SetAntiAliasingQuality(int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.SaveSettings (Underlying native function: SaveSettings 0x6b1419c)
	void SaveSettings(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.RunHardwareBenchmark (Underlying native function: RunHardwareBenchmark 0x9da0368)
	void RunHardwareBenchmark(int& WorkScale, float& CPUMultiplier, float& GPUMultiplier); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.RevertVideoMode (Underlying native function: RevertVideoMode 0x9da0334)
	void RevertVideoMode(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.ResetToCurrentSettings (Underlying native function: ResetToCurrentSettings 0x9da009c)
	void ResetToCurrentSettings(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.LoadSettings (Underlying native function: LoadSettings 0x9d9dee0)
	void LoadSettings(bool& bForceReload); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.IsVSyncEnabled (Underlying native function: IsVSyncEnabled 0x2d009f8)
	bool IsVSyncEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.IsVSyncDirty (Underlying native function: IsVSyncDirty 0x9d9db78)
	bool IsVSyncDirty(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.IsScreenResolutionDirty (Underlying native function: IsScreenResolutionDirty 0x9d9dab8)
	bool IsScreenResolutionDirty(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.IsHDREnabled (Underlying native function: IsHDREnabled 0x9d9da78)
	bool IsHDREnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.IsFullscreenModeDirty (Underlying native function: IsFullscreenModeDirty 0x9d9d9bc)
	bool IsFullscreenModeDirty(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.IsDynamicResolutionEnabled (Underlying native function: IsDynamicResolutionEnabled 0x1140a44)
	bool IsDynamicResolutionEnabled(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.IsDynamicResolutionDirty (Underlying native function: IsDynamicResolutionDirty 0x9d9d998)
	bool IsDynamicResolutionDirty(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.IsDirty (Underlying native function: IsDirty 0x7202ed4)
	bool IsDirty(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetVisualEffectQuality (Underlying native function: GetVisualEffectQuality 0x242f83c)
	int GetVisualEffectQuality(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetViewDistanceQuality (Underlying native function: GetViewDistanceQuality 0x23fe6e4)
	int GetViewDistanceQuality(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetTextureQuality (Underlying native function: GetTextureQuality 0x2d00a24)
	int GetTextureQuality(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetSyncInterval (Underlying native function: GetSyncInterval 0x9d9d0f0)
	static int GetSyncInterval(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameUserSettings.GetShadowQuality (Underlying native function: GetShadowQuality 0x28a35b8)
	int GetShadowQuality(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetShadingQuality (Underlying native function: GetShadingQuality 0x7f9287c)
	int GetShadingQuality(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetScreenResolution (Underlying native function: GetScreenResolution 0x9d9cf14)
	struct FIntPoint* GetScreenResolution(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetResolutionScaleNormalized (Underlying native function: GetResolutionScaleNormalized 0x9d9cee0)
	float GetResolutionScaleNormalized(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetResolutionScaleInformationEx (Underlying native function: GetResolutionScaleInformationEx 0x9d9cd48)
	void GetResolutionScaleInformationEx(float& CurrentScaleNormalized, float& CurrentScaleValue, float& MinScaleValue, float& MaxScaleValue); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetResolutionScaleInformation (Underlying native function: GetResolutionScaleInformation 0x9d9cba0)
	void GetResolutionScaleInformation(float& CurrentScaleNormalized, int& CurrentScaleValue, int& MinScaleValue, int& MaxScaleValue); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetReflectionQuality (Underlying native function: GetReflectionQuality 0x7f928a4)
	int GetReflectionQuality(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetRecommendedResolutionScale (Underlying native function: GetRecommendedResolutionScale 0x8a62994)
	float GetRecommendedResolutionScale(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.GetPreferredFullscreenMode (Underlying native function: GetPreferredFullscreenMode 0x9d9cb04)
	struct TEnumAsByte<EWindowMode> GetPreferredFullscreenMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetPostProcessingQuality (Underlying native function: GetPostProcessingQuality 0x2d00a38)
	int GetPostProcessingQuality(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetOverallScalabilityLevel (Underlying native function: GetOverallScalabilityLevel 0x9d9c470)
	int GetOverallScalabilityLevel(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetLastConfirmedScreenResolution (Underlying native function: GetLastConfirmedScreenResolution 0x9d9c1e0)
	struct FIntPoint* GetLastConfirmedScreenResolution(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetLastConfirmedFullscreenMode (Underlying native function: GetLastConfirmedFullscreenMode 0x9d9c1bc)
	struct TEnumAsByte<EWindowMode> GetLastConfirmedFullscreenMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetGlobalIlluminationQuality (Underlying native function: GetGlobalIlluminationQuality 0x7f92868)
	int GetGlobalIlluminationQuality(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetGameUserSettings (Underlying native function: GetGameUserSettings 0x23e443c)
	static class UGameUserSettings* GetGameUserSettings(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.GetFullscreenMode (Underlying native function: GetFullscreenMode 0x2c10e3c)
	struct TEnumAsByte<EWindowMode> GetFullscreenMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetFrameRateLimit (Underlying native function: GetFrameRateLimit 0x2d00a0c)
	float GetFrameRateLimit(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetFramePace (Underlying native function: GetFramePace 0x9d9ba78)
	static int GetFramePace(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameUserSettings.GetFoliageQuality (Underlying native function: GetFoliageQuality 0x7f92890)
	int GetFoliageQuality(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetDesktopResolution (Underlying native function: GetDesktopResolution 0x9d9b9ac)
	struct FIntPoint* GetDesktopResolution(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetDefaultWindowPosition (Underlying native function: GetDefaultWindowPosition 0x9d9b994)
	static struct FIntPoint* GetDefaultWindowPosition(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.GetDefaultWindowMode (Underlying native function: GetDefaultWindowMode 0x27c9608)
	static struct TEnumAsByte<EWindowMode> GetDefaultWindowMode(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.GetDefaultResolutionScale (Underlying native function: GetDefaultResolutionScale 0x7200954)
	float GetDefaultResolutionScale(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.GetDefaultResolution (Underlying native function: GetDefaultResolution 0x9d9b974)
	static struct FIntPoint* GetDefaultResolution(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.GetCurrentHDRDisplayNits (Underlying native function: GetCurrentHDRDisplayNits 0x9d9b7dc)
	int GetCurrentHDRDisplayNits(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetAudioQualityLevel (Underlying native function: GetAudioQualityLevel 0x2d00ea0)
	int GetAudioQualityLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.GetAntiAliasingQuality (Underlying native function: GetAntiAliasingQuality 0x6d2c944)
	int GetAntiAliasingQuality(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameUserSettings.EnableHDRDisplayOutput (Underlying native function: EnableHDRDisplayOutput 0x9d9a9fc)
	void EnableHDRDisplayOutput(bool& bEnable, int& DisplayNits); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.ConfirmVideoMode (Underlying native function: ConfirmVideoMode 0x28b2a48)
	void ConfirmVideoMode(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.ApplySettings (Underlying native function: ApplySettings 0x9d97c04)
	void ApplySettings(bool& bCheckForCommandLineOverrides); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.ApplyResolutionSettings (Underlying native function: ApplyResolutionSettings 0x9d97b84)
	void ApplyResolutionSettings(bool& bCheckForCommandLineOverrides); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.ApplyNonResolutionSettings (Underlying native function: ApplyNonResolutionSettings 0x735d960)
	void ApplyNonResolutionSettings(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameUserSettings.ApplyHardwareBenchmarkResults (Underlying native function: ApplyHardwareBenchmarkResults 0x9cc07d4)
	void ApplyHardwareBenchmarkResults(); // (Native | Public | BlueprintCallable)
};

