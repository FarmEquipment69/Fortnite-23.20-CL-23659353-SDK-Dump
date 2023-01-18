// Class /Script/FortniteGame.FortDaySequenceActor
// Size: 0x4f8
class AFortDaySequenceActor : public ADaySequenceActor
{
	unsigned char unreflected_358[0x8]; // 0x358 (0x8) 
	struct TMap<struct FString, struct FFortScalabilityDaySequenceData> ScalabilitySequenceAssets; // 0x360 (0x50)
	class USceneComponent* SunRootComponent; // 0x3b0 (0x8)
	class UDirectionalLightComponent* SunComponent; // 0x3b8 (0x8)
	class UExponentialHeightFogComponent* ExponentialHeightFogComponent; // 0x3c0 (0x8)
	class UStaticMeshComponent* SkyDomeComponent; // 0x3c8 (0x8)
	class USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x3d0 (0x8)
	class USkyLightComponent* SkyLightComponent; // 0x3d8 (0x8)
	class UVolumetricCloudComponent* VolumetricCloudComponent; // 0x3e0 (0x8)
	class UNiagaraComponent* SunFlareComponent; // 0x3e8 (0x8)
	struct FVector LightDirection; // 0x3f0 (0x18)
	bool bStartInvisible; // 0x408 (0x1)
	unsigned char unreflected_409[0x3]; // 0x409 (0x3) 
	struct FFortDayPhaseData DayPhaseInfo[0x4]; // 0x40c (0x4) (ARRAY) 
	unsigned char unreflected_41c[0x4]; // 0x41c (0x4) 
	class UMaterialParameterCollection* MaterialParameterCollection; // 0x420 (0x8)
	class UMaterialParameterCollectionInstance* MaterialParameterCollectionInstance; // 0x428 (0x8)
	class UMaterialInterface* OutlinePostProcessMaterial; // 0x430 (0x8)
	class UMaterialInstanceDynamic* OutlinePostProcessMID; // 0x438 (0x8)
	bool bUseSunAngle; // 0x440 (0x1)
	bool bUseSunDivergence; // 0x441 (0x1)
	unsigned char unreflected_442[0x2]; // 0x442 (0x2) 
	float SunAngle; // 0x444 (0x4)
	float SunLightHorizonClamp; // 0x448 (0x4)
	bool bUseSkyLightCubeMapBlending; // 0x44c (0x1)
	unsigned char unreflected_44d[0x3]; // 0x44d (0x3) 
	float SkyLightCubeMapBlend; // 0x450 (0x4)
	unsigned char unreflected_454[0x4]; // 0x454 (0x4) 
	struct TArray<class UTextureCube*> SkyLightCubeMaps; // 0x458 (0x10)
	bool bServerTODIsVisible; // 0x468 (0x1)
	unsigned char padding_469[0x8f]; // 0x469 (0x8f)

	/* Functions */

	// Function /Script/FortniteGame.FortDaySequenceActor.UpdateScalabilitySequences (Has no native function)
	void UpdateScalabilitySequences(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortDaySequenceActor.TEMPHACK_TickTimeOfDay (Has no native function)
	void TEMPHACKTickTimeOfDay(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortDaySequenceActor.OnTimeOfDayManagerVisibilitySet (Has no native function)
	void OnTimeOfDayManagerVisibilitySet(bool& bVisible); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortDaySequenceActor.OnRep_ServerTodIsVisible (Underlying native function: OnRep_ServerTodIsVisible 0x5d59e90)
	void OnRepServerTodIsVisible(); // (Final | Native | Private)
};

