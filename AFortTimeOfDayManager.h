// Class /Script/FortniteGame.FortTimeOfDayManager
// Size: 0xff0
class AFortTimeOfDayManager : public AInfo
{
	unsigned char unreflected_288[0x10]; // 0x288 (0x10) 
	float TimeOfDay; // 0x298 (0x4)
	float TimeOfDayReplicated; // 0x29c (0x4)
	enum EFortDayPhase CurrentDayNightPhase; // 0x2a0 (0x1)
	enum EFortDayPhase TransitionFromPhase; // 0x2a1 (0x1)
	enum EFortDayPhase TransitionToPhase; // 0x2a2 (0x1)
	unsigned char unreflected_2a3[0x1]; // 0x2a3 (0x1) 
	float TransitionBlendPercent; // 0x2a4 (0x4)
	float DefaultTimeOfDaySpeed; // 0x2a8 (0x4)
	float StartTimeOfDayInGame; // 0x2ac (0x4)
	float TimeOfDaySpeed; // 0x2b0 (0x4)
	unsigned char unreflected_2b4[0x4]; // 0x2b4 (0x4) 
	class UMaterialInterface* BasePostProcessMaterial; // 0x2b8 (0x8)
	class UMaterialInstanceDynamic* PostProcessMaterialMID; // 0x2c0 (0x8)
	uint32_t bHasClonedPPVs; // 0x2c8 (0x4)
	unsigned char bSkipNight; // 0x2cc (0x1)
	unsigned char bUsePerDayPhaseSkylightCubemaps; // 0x2cc (0x1)
	unsigned char bTimeStarted; // 0x2cc (0x1)
	unsigned char bHeightFogEnabled; // 0x2cc (0x1)
	unsigned char bBaseHeightFogOnAltitude; // 0x2cc (0x1)
	unsigned char unreflected_2cd[0x3]; // 0x2cd (0x3) 
	float HeightFogZOffset; // 0x2d0 (0x4)
	unsigned char unreflected_2d4[0x4]; // 0x2d4 (0x4) 
	struct TArray<struct FCameraAltitudeAdjustments> AltitudeAdjustments; // 0x2d8 (0x10)
	struct TArray<struct FCameraAltitudeAdjustments> AltitudeAdjustmentsForSecondFog; // 0x2e8 (0x10)
	struct FRotator SunriseDirectionalLightRotation; // 0x2f8 (0x18)
	struct FRotator SunsetDirectionalLightRotation; // 0x310 (0x18)
	unsigned char unreflected_328[0x8]; // 0x328 (0x8) 
	struct FQuat DirectionalLightQuat; // 0x330 (0x20)
	unsigned char unreflected_350[0x28]; // 0x350 (0x28) 
	struct FRotator SunriseSunObjectRotation; // 0x378 (0x18)
	struct FRotator SunsetSunObjectRotation; // 0x390 (0x18)
	float SunObjectDivergencePower; // 0x3a8 (0x4)
	bool bUseSkyAtmosphereRotationAndDivergence; // 0x3ac (0x1)
	unsigned char unreflected_3ad[0x3]; // 0x3ad (0x3) 
	struct FRotator SunriseSkyAtmosphereRotation; // 0x3b0 (0x18)
	struct FRotator SunsetSkyAtmosphereRotation; // 0x3c8 (0x18)
	float SkyAtmosphereRotationDivergencePower; // 0x3e0 (0x4)
	float DistanceToSunOrMoon; // 0x3e4 (0x4)
	bool bStartInvisible; // 0x3e8 (0x1)
	unsigned char unreflected_3e9[0x7]; // 0x3e9 (0x7) 
	class UDirectionalLightComponent* DirectionalLightComponent; // 0x3f0 (0x8)
	class UTextureCube* OverrideCubemap; // 0x3f8 (0x8)
	class UExponentialHeightFogComponent* ActiveHeightFogComponent; // 0x400 (0x8)
	class UFortDayPhaseChangeParams* DayPhaseChangeEventParams; // 0x408 (0x8)
	struct FDayPhaseInfo LightAndFogPhaseSettings[0x4]; // 0x410 (0x210) (ARRAY) 
	class UFortDayPhaseInfoOverride* LightAndFogPhaseSettingOverrides[0x4]; // 0xc50 (0x8) (ARRAY) 
	unsigned char bBlendingInLightAndFogOverrides; // 0xc70 (0x1)
	unsigned char bBlendingOutLightAndFogOverrides; // 0xc70 (0x1)
	unsigned char unreflected_c71[0x3]; // 0xc71 (0x3) 
	enum EFortDayPhase BlendingOutLightAndFogOverridesDayPhase; // 0xc74 (0x1)
	unsigned char unreflected_c75[0x3]; // 0xc75 (0x3) 
	float LightAndFogOverridesFadeTime; // 0xc78 (0x4)
	float CurrentLightAndFogBlendValue; // 0xc7c (0x4)
	struct FMulticastInlineDelegate InhibitorFogUpdated; // 0xc80 (0x10)
	struct FMulticastInlineDelegate OnInhibitorRestoreDefaultSettings; // 0xc90 (0x10)
	struct FTimeOfDayDirectOverrides DirectOverrides; // 0xca0 (0x58)
	unsigned char unreflected_cf8[0x18]; // 0xcf8 (0x18) 
	class UPostProcessComponent* MorningPostProcessComponent; // 0xd10 (0x8)
	class UPostProcessComponent* DayPostProcessComponent; // 0xd18 (0x8)
	class UPostProcessComponent* EveningPostProcessComponent; // 0xd20 (0x8)
	class UPostProcessComponent* NightPostProcessComponent; // 0xd28 (0x8)
	class UPostProcessComponent* DayPhasePostProcessComponent[0x4]; // 0xd30 (0x8) (ARRAY) 
	class UPostProcessComponent* OverridePostProcessComponent; // 0xd50 (0x8)
	struct FExponentialHeightFogValues CurrentTimeOfDayFogValues; // 0xd58 (0x60)
	struct FLinearColor CurrentTimeOfDayDirectionalLightColor; // 0xdb8 (0x10)
	class UMaterialParameterCollection* MaterialParameterCollection; // 0xdc8 (0x8)
	class UMaterialParameterCollectionInstance* MaterialParameterCollectionInstance; // 0xdd0 (0x8)
	struct FVector RainParticleSystemRelativeOffset; // 0xdd8 (0x18)
	class UStaticMesh* SunMesh; // 0xdf0 (0x8)
	class UStaticMesh* MoonMesh; // 0xdf8 (0x8)
	struct TArray<class UMaterialInterface*> SunMaterialOverrides; // 0xe00 (0x10)
	struct TArray<class UMaterialInterface*> MoonMaterialOverrides; // 0xe10 (0x10)
	float SunScale; // 0xe20 (0x4)
	float MoonScale; // 0xe24 (0x4)
	class UMaterialInterface* SkyDomeMaterial; // 0xe28 (0x8)
	class UMaterialInterface* StarMapMaterial; // 0xe30 (0x8)
	class UTexture2D* CloudMaskTexture; // 0xe38 (0x8)
	bool bUseStormValues; // 0xe40 (0x1)
	unsigned char unreflected_e41[0x3]; // 0xe41 (0x3) 
	struct FLinearColor StormLightColor; // 0xe44 (0x10)
	unsigned char unreflected_e54[0x4]; // 0xe54 (0x4) 
	class UMaterialInstance* StormMaterialInst; // 0xe58 (0x8)
	struct FExponentialHeightFogValues StormFogValues; // 0xe60 (0x60)
	struct FMulticastInlineDelegate OnDayPhaseChangeEvent; // 0xec0 (0x10)
	unsigned char unreflected_ed0[0x50]; // 0xed0 (0x50) 
	struct TArray<struct FMulticastInlineDelegate> DelegatesQueuedForProcessingDayPhaseChange; // 0xf20 (0x10)
	class USkyLightComponent* SkyLightComp; // 0xf30 (0x8)
	class UParticleSystemComponent* RainParticleSystemComp; // 0xf38 (0x8)
	class UStaticMeshComponent* SunOrMoonMeshComp; // 0xf40 (0x8)
	class UStaticMeshComponent* SkyDomeMeshComp; // 0xf48 (0x8)
	class UStaticMeshComponent* StarMapMeshComp; // 0xf50 (0x8)
	class UMaterialInstanceDynamic* ActiveSkyBoxMat; // 0xf58 (0x8)
	class UMaterialInstanceDynamic* StarMapMID; // 0xf60 (0x8)
	float StormStrength; // 0xf68 (0x4)
	unsigned char unreflected_f6c[0xc]; // 0xf6c (0xc) 
	class UMaterialInstanceDynamic* DefaultSkydomeMaterial; // 0xf78 (0x8)
	unsigned char unreflected_f80[0x10]; // 0xf80 (0x10) 
	struct TArray<struct FInhibitorData> EnabledVolumeInhibitors; // 0xf90 (0x10)
	struct TArray<struct FInhibitorData> EnabledGlobalInhibitors; // 0xfa0 (0x10)
	class AActor* LastEnabledInhibitor; // 0xfb0 (0x8)
	unsigned char unreflected_fb8[0x11]; // 0xfb8 (0x11) 
	bool bServerTODIsVisible; // 0xfc9 (0x1)
	unsigned char unreflected_fca[0x3]; // 0xfca (0x3) 
	bool DisableGlobalWeatherEvents; // 0xfcd (0x1)
	unsigned char unreflected_fce[0x2]; // 0xfce (0x2) 
	class UFortTimeOfDayWeatherComponent* WeatherComponent; // 0xfd0 (0x8)
	struct FMulticastInlineDelegate OnWeatherComponentSet; // 0xfd8 (0x10)
	unsigned char padding_fe8[0x8]; // 0xfe8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortTimeOfDayManager.UpdatePostProcessVolumesV2 (Underlying native function: UpdatePostProcessVolumesV2 0x89d327c)
	void UpdatePostProcessVolumesV2(struct TEnumAsByte<EFortTODMPostProcess>& InCurrentTimeOfDayEditing); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.UpdatePostProcessVolumes (Underlying native function: UpdatePostProcessVolumes 0x89d31fc)
	void UpdatePostProcessVolumes(enum EFortDayPhase& InCurrentTimeOfDayEditing); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.UpdateInhibitorLastModificationDate (Underlying native function: UpdateInhibitorLastModificationDate 0x89d315c)
	void UpdateInhibitorLastModificationDate(struct FInhibitorData& InhibitorData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.TryToUpdateFogForInhibitors (Underlying native function: TryToUpdateFogForInhibitors 0x89d3084)
	void TryToUpdateFogForInhibitors(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.ToggleDebugForceStormEffects (Underlying native function: ToggleDebugForceStormEffects 0x89d3064)
	void ToggleDebugForceStormEffects(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.SetUseSpecificTimeOfDayEditing (Underlying native function: SetUseSpecificTimeOfDayEditing 0x71a6cc4)
	void SetUseSpecificTimeOfDayEditing(bool& bShouldUseSpecificTimeOfDay); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.SetStormStrength (Underlying native function: SetStormStrength 0x89d2c9c)
	void SetStormStrength(float& NewStormStrength); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.SetSpecificTimeOfDayInEditor (Underlying native function: SetSpecificTimeOfDayInEditor 0x71a7128)
	void SetSpecificTimeOfDayInEditor(float& NewTimeOfDayInEditor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.SetRealTimeCaptureAndUpdateSkyCapture (Underlying native function: SetRealTimeCaptureAndUpdateSkyCapture 0x89d2c08)
	void SetRealTimeCaptureAndUpdateSkyCapture(bool& bIsRealCaptureActive); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.SetFogDirectionalInscatteringMultiplier (Underlying native function: SetFogDirectionalInscatteringMultiplier 0x89d2b84)
	void SetFogDirectionalInscatteringMultiplier(float& NewFogDirectionalInscatteringMultiplier); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.SetDirectionalLightComponentRotation (Underlying native function: SetDirectionalLightComponentRotation 0x89d2a60)
	void SetDirectionalLightComponentRotation(struct FQuat& NewQuat, bool& bInEditor, float& DeltaTime); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.SetDirectionalLightColorMultiplier (Underlying native function: SetDirectionalLightColorMultiplier 0x89d29dc)
	void SetDirectionalLightColorMultiplier(float& NewDirectionalLightColorMultiplier); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.RemoveLightAndFogPhaseSettingOverrideMulticast (Underlying native function: RemoveLightAndFogPhaseSettingOverrideMulticast 0x89d2910)
	void RemoveLightAndFogPhaseSettingOverrideMulticast(enum EFortDayPhase& DayPhase, float& BlendOutLength); // (Net | NetReliable | Native | Event | NetMulticast | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.RemoveLightAndFogPhaseSettingOverride (Underlying native function: RemoveLightAndFogPhaseSettingOverride 0x89d2848)
	void RemoveLightAndFogPhaseSettingOverride(enum EFortDayPhase& DayPhase, float& BlendOutLength); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.OnWeatherStart (Has no native function)
	void OnWeatherStart(int& WeatherEventIndex); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTimeOfDayManager.OnWeatherEnd (Has no native function)
	void OnWeatherEnd(int& WeatherEventIndex); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTimeOfDayManager.OnUpdateDirectionalLightForTimeOfDay (Has no native function)
	void OnUpdateDirectionalLightForTimeOfDay(struct FLinearColor& AboutToApplyDirectionalLightColor); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortTimeOfDayManager.OnStormStart (Has no native function)
	void OnStormStart(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTimeOfDayManager.OnStormEnd (Has no native function)
	void OnStormEnd(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTimeOfDayManager.OnRep_WeatherComponent (Underlying native function: OnRep_WeatherComponent 0x72ed940)
	void OnRepWeatherComponent(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortTimeOfDayManager.OnRep_TimeOfDaySpeed (Underlying native function: OnRep_TimeOfDaySpeed 0x85471b8)
	void OnRepTimeOfDaySpeed(float& OldTimeOfDaySpeed); // (Native | Public)

	// Function /Script/FortniteGame.FortTimeOfDayManager.OnRep_TimeOfDayInit (Underlying native function: OnRep_TimeOfDayInit 0x89d2598)
	void OnRepTimeOfDayInit(float& OldTimeOfDay); // (Native | Public)

	// Function /Script/FortniteGame.FortTimeOfDayManager.OnRep_TimeOfDay (Underlying native function: OnRep_TimeOfDay 0x8546790)
	void OnRepTimeOfDay(); // (Native | Public)

	// Function /Script/FortniteGame.FortTimeOfDayManager.OnRep_ServerTodIsVisible (Underlying native function: OnRep_ServerTodIsVisible 0x89d2584)
	void OnRepServerTodIsVisible(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortTimeOfDayManager.OnRep_HeightFogEnabled (Underlying native function: OnRep_HeightFogEnabled 0x2b0fa94)
	void OnRepHeightFogEnabled(); // (Native | Public)

	// Function /Script/FortniteGame.FortTimeOfDayManager.OnRep_DirectOverrides (Underlying native function: OnRep_DirectOverrides 0x89d2570)
	void OnRepDirectOverrides(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortTimeOfDayManager.OnDayPhaseChange (Has no native function)
	void OnDayPhaseChange(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTimeOfDayManager.OnDataDrivenCVarChangedEditorOnly (Has no native function)
	void OnDataDrivenCVarChangedEditorOnly(struct FString& CVarName); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTimeOfDayManager.MakeExponentialHeightFogValues (Underlying native function: MakeExponentialHeightFogValues 0x89d21ec)
	static struct FExponentialHeightFogValues MakeExponentialHeightFogValues(float& FogDensity, float& FogHeightFalloff, float& FogMaxOpacity, float& StartDistance, float& DirectionalInscatteringExponent, float& DirectionalInscatteringStartDistance, struct FLinearColor& DirectionalInscatteringColor, struct FLinearColor& FogInscatteringColor, float& VolumetricFogScatteringDistribution, float& VolumetricFogExtinctionScale, float& VolumetricFogDistance); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortTimeOfDayManager.Inhibitor_SetDefaultSettings (Underlying native function: Inhibitor_SetDefaultSettings 0x89d21b4)
	void InhibitorSetDefaultSettings(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.HasInhibitors (Underlying native function: HasInhibitors 0x89d2194)
	bool HasInhibitors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManager.GetThreatClouds (Underlying native function: GetThreatClouds 0x89d1e60)
	struct TArray<struct FThreatLocationInfo> GetThreatClouds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManager.GetStormStrength (Underlying native function: GetStormStrength 0x89d1df8)
	float GetStormStrength(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManager.GetSafeZoneGamePhaseTimeRemaining (Underlying native function: GetSafeZoneGamePhaseTimeRemaining 0x89d1de0)
	float GetSafeZoneGamePhaseTimeRemaining(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManager.GetLastEnabledInhibitor (Underlying native function: GetLastEnabledInhibitor 0x89d1dc8)
	class AActor* GetLastEnabledInhibitor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManager.GetDirectOverrideFogStartDistance (Underlying native function: GetDirectOverrideFogStartDistance 0x89d1c50)
	float GetDirectOverrideFogStartDistance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManager.GetDirectOverrideFogDensity (Underlying native function: GetDirectOverrideFogDensity 0x89d1c28)
	float GetDirectOverrideFogDensity(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManager.GetDirectOverrideFogColor (Underlying native function: GetDirectOverrideFogColor 0x89d1bf8)
	struct FLinearColor GetDirectOverrideFogColor(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManager.EndBlendLightAndFogPhaseSettingOverride (Underlying native function: EndBlendLightAndFogPhaseSettingOverride 0x89d1964)
	void EndBlendLightAndFogPhaseSettingOverride(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.EnableVolumeInhibitor (Underlying native function: EnableVolumeInhibitor 0x89d18c4)
	void EnableVolumeInhibitor(struct FInhibitorData& InhibitorData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.EnableGlobalInhibitor (Underlying native function: EnableGlobalInhibitor 0x89d1824)
	void EnableGlobalInhibitor(struct FInhibitorData& InhibitorData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.DisableVolumeInhibitor (Underlying native function: DisableVolumeInhibitor 0x89d1784)
	void DisableVolumeInhibitor(struct FInhibitorData& InhibitorData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.DisableGlobalInhibitor (Underlying native function: DisableGlobalInhibitor 0x89d16e4)
	void DisableGlobalInhibitor(struct FInhibitorData& InhibitorData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.BreakExponentialHeightFogValues (Underlying native function: BreakExponentialHeightFogValues 0x89d1118)
	static void BreakExponentialHeightFogValues(struct FExponentialHeightFogValues& HeightFogValues, float& FogDensity, float& FogHeightFalloff, float& FogMaxOpacity, float& StartDistance, float& DirectionalInscatteringExponent, float& DirectionalInscatteringStartDistance, struct FLinearColor& DirectionalInscatteringColor, struct FLinearColor& FogInscatteringColor, float& VolumetricFogScatteringDistribution, float& VolumetricFogExtinctionScale, float& VolumetricFogDistance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortTimeOfDayManager.BlendLightAndFogPhaseSettingOverride (Underlying native function: BlendLightAndFogPhaseSettingOverride 0x89d1094)
	void BlendLightAndFogPhaseSettingOverride(float& Alpha); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.ApplyInhibitorFogOverrides (Underlying native function: ApplyInhibitorFogOverrides 0x89d0f94)
	void ApplyInhibitorFogOverrides(float& FogDensity, struct FLinearColor& FogColor, float& FogStartDistance); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.AddLightAndFogPhaseSettingOverrideMulticast (Underlying native function: AddLightAndFogPhaseSettingOverrideMulticast 0x89d0e94)
	void AddLightAndFogPhaseSettingOverrideMulticast(enum EFortDayPhase& DayPhase, class UClass*& DayPhaseInfoOverride, float& BlendInLength); // (Net | NetReliable | Native | Event | NetMulticast | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManager.AddLightAndFogPhaseSettingOverride (Underlying native function: AddLightAndFogPhaseSettingOverride 0x89d0d98)
	void AddLightAndFogPhaseSettingOverride(enum EFortDayPhase& DayPhase, class UClass*& DayPhaseInfoOverride, float& BlendInLength); // (Final | Native | Public | BlueprintCallable)
};

