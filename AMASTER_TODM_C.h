// BlueprintGeneratedClass /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C
// Size: 0x12e0
class AMASTER_TODM_C : public AFortTimeOfDayManager
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xff0 (0x8)
	class UPostProcessComponent* HeavySSAOPostprocess; // 0xff8 (0x8)
	class UPostProcessComponent* EditorPostProcessMaterialHackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime; // 0x1000 (0x8)
	float NewStormTimelineWindStrength5E5E494B489306ED044096A143F228CF; // 0x1008 (0x4)
	float NewStormTimelineRainInt5E5E494B489306ED044096A143F228CF; // 0x100c (0x4)
	float NewStormTimelineLightningModulator5E5E494B489306ED044096A143F228CF; // 0x1010 (0x4)
	float NewStormTimelineStormRampInValue5E5E494B489306ED044096A143F228CF; // 0x1014 (0x4)
	struct TEnumAsByte<ETimelineDirection> NewStormTimelineDirection5E5E494B489306ED044096A143F228CF; // 0x1018 (0x1)
	unsigned char unreflected_1019[0x7]; // 0x1019 (0x7) 
	class UTimelineComponent* NewStormTimeline; // 0x1020 (0x8)
	float FlashLightningLightningColorLERPFA5447C54EBAE729F521C3B243BEC285; // 0x1028 (0x4)
	float FlashLightninglightningalphaFA5447C54EBAE729F521C3B243BEC285; // 0x102c (0x4)
	float FlashLightningLightningIntensityFA5447C54EBAE729F521C3B243BEC285; // 0x1030 (0x4)
	struct TEnumAsByte<ETimelineDirection> FlashLightningDirectionFA5447C54EBAE729F521C3B243BEC285; // 0x1034 (0x1)
	unsigned char unreflected_1035[0x3]; // 0x1035 (0x3) 
	class UTimelineComponent* FlashLightning; // 0x1038 (0x8)
	double WindSpeed; // 0x1040 (0x8)
	double RandomWeatherWaitTime; // 0x1048 (0x8)
	double CurrentAmountOfRandomWeatherTimeLeft; // 0x1050 (0x8)
	double NewWeatherLerpAmount; // 0x1058 (0x8)
	double WindStrength; // 0x1060 (0x8)
	double FutureWindStrength; // 0x1068 (0x8)
	double FutureWindSpeed; // 0x1070 (0x8)
	bool bPickNewWindConditions; // 0x1078 (0x1)
	unsigned char unreflected_1079[0x7]; // 0x1079 (0x7) 
	double LightningStrength; // 0x1080 (0x8)
	double ThreatCloudStormAmount; // 0x1088 (0x8)
	bool UseRainWithStorms; // 0x1090 (0x1)
	bool PlayaParticleEffectNeartheplayersFeet; // 0x1091 (0x1)
	bool InternalRainWindEffectsShouldbeActive; // 0x1092 (0x1)
	unsigned char unreflected_1093[0x5]; // 0x1093 (0x5) 
	class UParticleSystemComponent* StormFootParticleOutdoor; // 0x1098 (0x8)
	class UParticleSystem* StormFootParticleWhileonTerrain; // 0x10a0 (0x8)
	class UParticleSystemComponent* StormFootParticleIndoor; // 0x10a8 (0x8)
	class UParticleSystem* StormFootParticleWhileNOTonTerrain; // 0x10b0 (0x8)
	double StormWindStrength; // 0x10b8 (0x8)
	bool GenerateFoliageWindGusts; // 0x10c0 (0x1)
	unsigned char unreflected_10c1[0x7]; // 0x10c1 (0x7) 
	struct FTimerHandle* LightningStrikeTimerHandle; // 0x10c8 (0x8)
	struct FLinearColor PreviousDirectionalLightColor; // 0x10d0 (0x10)
	struct FLinearColor LightningFlashColor; // 0x10e0 (0x10)
	double LightningFlashTimelineMin; // 0x10f0 (0x8)
	double LightningFlashTimelineMax; // 0x10f8 (0x8)
	struct FLinearColor SkyboxFogMorningColor; // 0x1100 (0x10)
	struct FLinearColor SkyboxFogMorningLitColor; // 0x1110 (0x10)
	double SkyboxFogMorningDistance; // 0x1120 (0x8)
	double SkyboxFogMorningDiffuseAmount; // 0x1128 (0x8)
	double SkyboxFogMorningEmissiveAmount; // 0x1130 (0x8)
	double SkyboxFogMorningLitLength; // 0x1138 (0x8)
	double SkyboxFogMorningLitRotation; // 0x1140 (0x8)
	double SkyboxFogMorningLitOffset; // 0x1148 (0x8)
	struct FLinearColor SkyboxFogDayColor; // 0x1150 (0x10)
	struct FLinearColor SkyboxFogDayLitColor; // 0x1160 (0x10)
	double SkyboxFogDayDistance; // 0x1170 (0x8)
	double SkyboxFogDayDiffuseAmount; // 0x1178 (0x8)
	double SkyboxFogDayEmissiveAmount; // 0x1180 (0x8)
	double SkyboxFogDayLitLength; // 0x1188 (0x8)
	double SkyboxFogDayLitRotation; // 0x1190 (0x8)
	double SkyboxFogDayLitOffset; // 0x1198 (0x8)
	struct FLinearColor SkyboxFogEveningColor; // 0x11a0 (0x10)
	struct FLinearColor SkyboxFogEveningLitColor; // 0x11b0 (0x10)
	double SkyboxFogEveningDistance; // 0x11c0 (0x8)
	double SkyboxFogEveningDiffuseAmount; // 0x11c8 (0x8)
	double SkyboxFogEveningEmissiveAmount; // 0x11d0 (0x8)
	double SkyboxFogEveningLitLength; // 0x11d8 (0x8)
	double SkyboxFogEveningLitRotation; // 0x11e0 (0x8)
	double SkyboxFogEveningLitOffset; // 0x11e8 (0x8)
	struct FLinearColor SkyboxFogNightColor; // 0x11f0 (0x10)
	struct FLinearColor SkyboxFogNightLitColor; // 0x1200 (0x10)
	double SkyboxFogNightDistance; // 0x1210 (0x8)
	double SkyboxFogNightDiffuseAmount; // 0x1218 (0x8)
	double SkyboxFogNightEmissiveAmount; // 0x1220 (0x8)
	double SkyboxFogNightLitLength; // 0x1228 (0x8)
	double SkyboxFogNightLitRotation; // 0x1230 (0x8)
	double SkyboxFogNightLitOffset; // 0x1238 (0x8)
	double WorldBorderCloudBaseColorBrightness; // 0x1240 (0x8)
	struct FLinearColor WorldBorderCloudSubSurfaceColorandOpacity; // 0x1248 (0x10)
	bool EnableCometDynamicPlacement; // 0x1258 (0x1)
	unsigned char unreflected_1259[0x7]; // 0x1259 (0x7) 
	struct FVector4 Night; // 0x1260 (0x20)
	struct FVector4 Evening; // 0x1280 (0x20)
	struct FVector4 Day; // 0x12a0 (0x20)
	struct FVector4 Morning; // 0x12c0 (0x20)

	/* Functions */

	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.EmptyTransform (Has no native function)
	void EmptyTransform(struct FTransform& Transform, struct FTransform& CallFuncMakeTransformReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.SetHeavySSAO (Has no native function)
	void SetHeavySSAO(float& CallFuncGetNumericCVarOutValue, bool& CallFuncGetNumericCVarReturnValue, bool& CallFuncEqualEqualDoubleDoubleReturnValue, double& CallFuncEqualEqualDoubleDoubleAImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(double& CallFuncFClampReturnValue, double& CallFuncFClampReturnValue1, double& CallFuncAddDoubleDoubleReturnValue, double& CallFuncAddDoubleDoubleReturnValue1, struct FLinearColor& CallFuncMakeColorReturnValue, struct FLinearColor& CallFuncMakeColorReturnValue1, double& CallFuncFClampReturnValue2, double& CallFuncAddDoubleDoubleReturnValue2, double& CallFuncFClampReturnValue3, double& CallFuncAddDoubleDoubleReturnValue3, struct FLinearColor& CallFuncMakeColorReturnValue2, struct FLinearColor& CallFuncMakeColorReturnValue3, double& CallFuncFClampReturnValue4, double& CallFuncAddDoubleDoubleReturnValue4, double& CallFuncFClampReturnValue5, double& CallFuncAddDoubleDoubleReturnValue5, struct FLinearColor& CallFuncMakeColorReturnValue4, struct FLinearColor& CallFuncMakeColorReturnValue5, double& CallFuncFClampReturnValue6, double& CallFuncAddDoubleDoubleReturnValue6, double& CallFuncFClampReturnValue7, double& CallFuncAddDoubleDoubleReturnValue7, struct FLinearColor& CallFuncMakeColorReturnValue6, struct FLinearColor& CallFuncMakeColorReturnValue7, float& CallFuncMakeColorBImplicitCast, float& CallFuncMakeColorGImplicitCast, float& CallFuncMakeColorRImplicitCast, float& CallFuncMakeColorBImplicitCast1, float& CallFuncMakeColorGImplicitCast1, float& CallFuncMakeColorRImplicitCast1, float& CallFuncMakeColorBImplicitCast2, float& CallFuncMakeColorRImplicitCast2, float& CallFuncMakeColorGImplicitCast2, float& CallFuncMakeColorBImplicitCast3, float& CallFuncMakeColorRImplicitCast3, float& CallFuncMakeColorGImplicitCast3, float& CallFuncMakeColorBImplicitCast4, float& CallFuncMakeColorRImplicitCast4, float& CallFuncMakeColorGImplicitCast4, float& CallFuncMakeColorBImplicitCast5, float& CallFuncMakeColorGImplicitCast5, float& CallFuncMakeColorRImplicitCast5, float& CallFuncMakeColorBImplicitCast6, float& CallFuncMakeColorRImplicitCast6, float& CallFuncMakeColorBImplicitCast7, float& CallFuncMakeColorGImplicitCast6, float& CallFuncMakeColorGImplicitCast7, float& CallFuncMakeColorRImplicitCast7, float& CallFuncSetScalarParameterValueParameterValueImplicitCast); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.FlashLightning__FinishedFunc (Has no native function)
	void FlashLightningFinishedFunc(); // (BlueprintEvent)

	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.FlashLightning__UpdateFunc (Has no native function)
	void FlashLightningUpdateFunc(); // (BlueprintEvent)

	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.New Storm Timeline__FinishedFunc (Has no native function)
	void NewStormTimelineFinishedFunc(); // (BlueprintEvent)

	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.New Storm Timeline__UpdateFunc (Has no native function)
	void NewStormTimelineUpdateFunc(); // (BlueprintEvent)

	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.New Storm Timeline__FireOffRain__EventFunc (Has no native function)
	void NewStormTimelineFireOffRainEventFunc(); // (BlueprintEvent)

	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.StartStorm (Has no native function)
	void StartStorm(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.OnStormStart (Has no native function)
	void OnStormStart(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.OnStormEnd (Has no native function)
	void OnStormEnd(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.LightningStrike (Has no native function)
	void LightningStrike(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.DisableLightAndFog (Has no native function)
	void DisableLightAndFog(bool& Enable); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.EnableHDRRendering (Has no native function)
	void EnableHDRRendering(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.UpdateSSAO (Has no native function)
	void UpdateSSAO(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.ExecuteUbergraph_MASTER_TODM (Has no native function)
	void ExecuteUbergraphMASTERTODM(int& EntryPoint, int& CallFuncFFloorReturnValue, bool& CallFuncConvIntToBoolReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, double& CallFuncSquareReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue, int& CallFuncGetShadowQualityReturnValue, bool& CallFuncGreaterIntIntReturnValue, float& CallFuncConvBoolToFloatReturnValue, bool& K2NodeSwitchIntegerCmpSuccess, bool& TempboolVariable, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanORReturnValue, double& CallFuncRandomFloatInRangeReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue2, float& CallFuncGetStormStrengthReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue3, double& CallFuncAddDoubleDoubleReturnValue, bool& K2NodeCustomEventEnable, bool& CallFuncNotPreBoolReturnValue1, struct FLinearColor& CallFuncGetLightColorReturnValue, float& CallFuncBreakColorR, float& CallFuncBreakColorG, float& CallFuncBreakColorB, float& CallFuncBreakColorA, struct FLinearColor& CallFuncLinearColorLerpReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue4, float& CallFuncBreakColorR1, float& CallFuncBreakColorG1, float& CallFuncBreakColorB1, float& CallFuncBreakColorA1, double& CallFuncMultiplyDoubleDoubleReturnValue5, double& CallFuncMultiplyDoubleDoubleReturnValue6, double& CallFuncMultiplyDoubleDoubleReturnValue7, double& CallFuncMultiplyDoubleDoubleReturnValue8, double& CallFuncAddDoubleDoubleReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue9, double& CallFuncAddDoubleDoubleReturnValue2, double& CallFuncAddDoubleDoubleReturnValue3, double& CallFuncAddDoubleDoubleReturnValue4, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncRandomFloatInRangeReturnValue1, double& CallFuncAddDoubleDoubleReturnValue5, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncDivideDoubleDoubleReturnValue1, bool& CallFuncIsValidReturnValue, struct FLinearColor& CallFuncMakeColorReturnValue, double& CallFuncFClampReturnValue, double& CallFuncAddDoubleDoubleReturnValue6, double& CallFuncFClampReturnValue1, double& CallFuncAddDoubleDoubleReturnValue7, struct FLinearColor& CallFuncMakeColorReturnValue1, struct FLinearColor& CallFuncMakeColorReturnValue2, double& CallFuncFClampReturnValue2, double& CallFuncFClampReturnValue3, double& CallFuncAddDoubleDoubleReturnValue8, double& CallFuncAddDoubleDoubleReturnValue9, struct FLinearColor& CallFuncMakeColorReturnValue3, struct FLinearColor& CallFuncMakeColorReturnValue4, double& CallFuncFClampReturnValue4, double& CallFuncAddDoubleDoubleReturnValue10, double& CallFuncFClampReturnValue5, double& CallFuncAddDoubleDoubleReturnValue11, struct FLinearColor& CallFuncMakeColorReturnValue5, struct FLinearColor& CallFuncMakeColorReturnValue6, double& CallFuncFClampReturnValue6, double& CallFuncAddDoubleDoubleReturnValue12, double& CallFuncFClampReturnValue7, double& CallFuncAddDoubleDoubleReturnValue13, double& CallFuncMultiplyDoubleDoubleReturnValue10, struct FLinearColor& CallFuncMakeColorReturnValue7, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue1, double& CallFuncMultiplyDoubleDoubleBImplicitCast, double& CallFuncFFloorAImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast1, float& CallFuncSetStormStrengthNewStormStrengthImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast2, float& CallFuncSetDirectionalLightColorMultiplierNewDirectionalLightColorMultiplierImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast3, double& CallFuncMultiplyDoubleDoubleAImplicitCast4, double& CallFuncMultiplyDoubleDoubleAImplicitCast5, double& CallFuncMultiplyDoubleDoubleAImplicitCast6, double& CallFuncMultiplyDoubleDoubleAImplicitCast7, double& CallFuncMultiplyDoubleDoubleAImplicitCast8, float& CallFuncSetPlayRateNewRateImplicitCast, float& CallFuncSetFogDirectionalInscatteringMultiplierNewFogDirectionalInscatteringMultiplierImplicitCast, float& CallFuncMakeColorRImplicitCast, float& CallFuncMakeColorGImplicitCast, float& CallFuncMakeColorBImplicitCast, float& CallFuncMakeColorRImplicitCast1, float& CallFuncMakeColorGImplicitCast1, float& CallFuncMakeColorRImplicitCast2, float& CallFuncMakeColorBImplicitCast1, float& CallFuncMakeColorGImplicitCast2, float& CallFuncMakeColorBImplicitCast2, float& CallFuncMakeColorRImplicitCast3, float& CallFuncMakeColorGImplicitCast3, float& CallFuncMakeColorBImplicitCast3, float& CallFuncMakeColorGImplicitCast4, float& CallFuncMakeColorRImplicitCast4, float& CallFuncMakeColorBImplicitCast4, float& CallFuncMakeColorRImplicitCast5, float& CallFuncMakeColorGImplicitCast5, float& CallFuncMakeColorBImplicitCast5, float& CallFuncMakeColorRImplicitCast6, float& CallFuncMakeColorGImplicitCast6, float& CallFuncMakeColorBImplicitCast6, float& CallFuncMakeColorRImplicitCast7, float& CallFuncMakeColorGImplicitCast7, float& CallFuncMakeColorBImplicitCast7, float& CallFuncSetScalarParameterValueParameterValueImplicitCast); // (Final | 0x00008000 | HasDefaults)
};
