// Class /Script/FortniteGame.FortPicklePortal
// Size: 0x470
class AFortPicklePortal : public AActor
{
	class USphereComponent* RangeCollisionComponent; // 0x288 (0x8)
	struct FName OpenAmountParameterName; // 0x290 (0x4)
	unsigned char unreflected_294[0x4]; // 0x294 (0x4) 
	struct FComponentReference PortalParticleSystemReference; // 0x298 (0x28)
	struct FComponentReference SMPortalInnerReference; // 0x2c0 (0x28)
	struct FComponentReference SMPortalOuterReference; // 0x2e8 (0x28)
	struct FComponentReference SpotlightComponentReference; // 0x310 (0x28)
	struct FComponentReference AudioComponentReference; // 0x338 (0x28)
	class UNiagaraComponent* PortalParticleSystem; // 0x360 (0x8)
	class UStaticMeshComponent* SMPortalInner; // 0x368 (0x8)
	class UStaticMeshComponent* SMPortalOuter; // 0x370 (0x8)
	class USpotLightComponent* SpotLightComponent; // 0x378 (0x8)
	struct FVector2D OuterConeAngleRange; // 0x380 (0x10)
	struct FVector2D InnerConeAngleRange; // 0x390 (0x10)
	struct FVector2D IntensityRange; // 0x3a0 (0x10)
	struct FVector2D AttenuationRadiusRange; // 0x3b0 (0x10)
	class UAudioComponent* AudioComponent; // 0x3c0 (0x8)
	class USourceEffectStereoDelayPreset* EffectPreset; // 0x3c8 (0x8)
	struct FSourceEffectStereoDelaySettings EffectSettings; // 0x3d0 (0x24)
	unsigned char unreflected_3f4[0x4]; // 0x3f4 (0x4) 
	class UMaterialParameterCollection* MaterialParameterCollection; // 0x3f8 (0x8)
	struct FName MaterialParameterCollectionParamName; // 0x400 (0x4)
	unsigned char unreflected_404[0x4]; // 0x404 (0x4) 
	struct FVector2D DelayTimeRange; // 0x408 (0x10)
	struct FVector2D WetLevelRange; // 0x418 (0x10)
	class UCurveFloat* OpenCurve; // 0x428 (0x8)
	struct FVector ZeroPointPosition; // 0x430 (0x18)
	float OpenInterpSpeed; // 0x448 (0x4)
	float MaxDistance; // 0x44c (0x4)
	float NearDistance; // 0x450 (0x4)
	float FadeRadius; // 0x454 (0x4)
	struct TArray<class AFortPlayerPawn*> LocalPawns; // 0x458 (0x10)
	unsigned char padding_468[0x8]; // 0x468 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPicklePortal.UpdateOpenAmount (Has no native function)
	void UpdateOpenAmount(float& OpenAmount); // (Event | Protected | BlueprintCallable | BlueprintEvent)
};

