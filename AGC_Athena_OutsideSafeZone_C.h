// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C
// Size: 0xa11
class AGC_Athena_OutsideSafeZone_C : public AFortGameplayCueNotifyLoop_OutsideSafeZone
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class UPointLightComponent* RandomLightingLight; // 0x968 (0x8)
	float LightningFlashTLLERP3FDEC95248645BE865DCD0840F99915A; // 0x970 (0x4)
	struct TEnumAsByte<ETimelineDirection> LightningFlashTLDirection3FDEC95248645BE865DCD0840F99915A; // 0x974 (0x1)
	unsigned char unreflected_975[0x3]; // 0x975 (0x3) 
	class UTimelineComponent* LightningFlashTL; // 0x978 (0x8)
	class USoundBase* StormSound; // 0x980 (0x8)
	double LightningFlashDiameter; // 0x988 (0x8)
	double LightningFlashHeight; // 0x990 (0x8)
	struct FVector LightningSpawnLocation; // 0x998 (0x18)
	double ChanceOfLightningMesh; // 0x9b0 (0x8)
	double LightningIntensity; // 0x9b8 (0x8)
	double LightningIntensityMin; // 0x9c0 (0x8)
	double LightningIntensityMax; // 0x9c8 (0x8)
	double LightningTimelinePlaySpeedMin; // 0x9d0 (0x8)
	double LightningTimelinePlaySpeedMax; // 0x9d8 (0x8)
	class APlayerPawn_Athena_Generic_C* PlayerPawn; // 0x9e0 (0x8)
	double LightningFlashRepeatDelayMin; // 0x9e8 (0x8)
	double LightningFlashRepeatDelayMax; // 0x9f0 (0x8)
	int StormStage; // 0x9f8 (0x4)
	struct FGameplayTag StormAudioTagLow; // 0x9fc (0x4)
	struct FGameplayTag StormAudioTagMedium; // 0xa00 (0x4)
	struct FGameplayTag StormAudioTagHigh; // 0xa04 (0x4)
	class UAmbientAudioDataAsset* StormAudioBank; // 0xa08 (0x8)
	bool StormEffectsEnabled; // 0xa10 (0x1)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.Random Lighting Flashes (Has no native function)
	void RandomLightingFlashes(struct FVector& CallFuncK2GetActorLocationReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue, struct FHitResult& CallFuncK2SetWorldLocationSweepHitResult, double& CallFuncRandomFloatInRangeReturnValue, double& CallFuncFMaxReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncRandomFloatInRangeReturnValue1, double& CallFuncRandomFloatReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, struct FVector& CallFuncGetLocationinCircleXYLocationLocalSpace, struct FVector& CallFuncAddVectorVectorReturnValue, float& CallFuncSetPlayRateNewRateImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.Get Location in Circle XY (Has no native function)
	void GetLocationinCircleXY(struct FVector& LocationLocalSpace, struct FVector& CallFuncMakeVectorReturnValue, double& CallFuncRandomFloatReturnValue, double& CallFuncGetPIReturnValue, double& CallFuncRandomFloatInRangeReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncLerpReturnValue, double& CallFuncCosReturnValue, double& CallFuncSinReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue2, struct FVector& CallFuncMakeVectorReturnValue1, struct FVector& CallFuncVLerpReturnValue, float& CallFuncVLerpAlphaImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/GameplayCueNotifies/GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.LightningFlashTL__FinishedFunc (Has no native function)
	void LightningFlashTLFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.LightningFlashTL__UpdateFunc (Has no native function)
	void LightningFlashTLUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.FlashTimeline (Has no native function)
	void FlashTimeline(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnStormEffectsEnabled (Has no native function)
	void OnStormEffectsEnabled(bool& bEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnLoopingStartGeneric (Has no native function)
	void OnLoopingStartGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnRemovalGeneric (Has no native function)
	void OnRemovalGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.ExecuteUbergraph_GC_Athena_OutsideSafeZone (Has no native function)
	void ExecuteUbergraphGCAthenaOutsideSafeZone(int& EntryPoint, double& CallFuncRandomFloatInRangeReturnValue, int& TempintVariable, int& CallFuncSubtractIntIntReturnValue, bool& K2NodeSwitchIntegerCmpSuccess, int& CallFuncSubtractIntIntReturnValue1, double& CallFuncLerpReturnValue, struct FGameplayTag& K2NodeSelectDefault, class UAmbientAudioSubsystem*& CallFuncGetWorldSubsystemReturnValue, bool& K2NodeEventbEnabled, bool& CallFuncBooleanANDReturnValue, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class UFXSystemComponent*& CallFuncArrayGetItem, class APlayerPawn_Athena_Generic_C*& K2NodeDynamicCastAsPlayerPawnAthenaGeneric, bool& K2NodeDynamicCastbSuccess, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class UAmbientAudioSubsystem*& CallFuncGetWorldSubsystemReturnValue1, float& CallFuncDelayDurationImplicitCast, double& CallFuncLerpAlphaImplicitCast, float& CallFuncSetIntensityNewIntensityImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

