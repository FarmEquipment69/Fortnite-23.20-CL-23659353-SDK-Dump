// Class /Script/FortniteGame.FortFXManager
// Size: 0x440
class AFortFXManager : public AFortClientOnlyActor
{
	struct TArray<struct FFortSplineMeshAnimSet> SplineAnimSets; // 0x290 (0x10)
	struct TArray<struct FFortMIDAnimSet> MIDAnimSets; // 0x2a0 (0x10)
	struct TArray<struct FFortParticleAnimSet> ParticleAnimSets; // 0x2b0 (0x10)
	struct TArray<struct FFortLightAnimSet> LightAnimSets; // 0x2c0 (0x10)
	struct TArray<class AFortWeaponRanged*> PendingWeaponFX; // 0x2d0 (0x10)
	unsigned char padding_2e0[0x160]; // 0x2e0 (0x160)

	/* Functions */

	// Function /Script/FortniteGame.FortFXManager.SpawnPooledFXActor (Underlying native function: SpawnPooledFXActor 0x8866394)
	static class AActor* SpawnPooledFXActor(class UObject*& WorldContextObject, class UClass*& FXActorClass, struct FTransform& SpawnTransform); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.ReturnPickupStretchMIDToPool (Underlying native function: ReturnPickupStretchMIDToPool 0x8863620)
	static void ReturnPickupStretchMIDToPool(class AFortPickupEffect*& PickupObject, class UPrimitiveComponent*& Component, int& ElementIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.ReturnFXActorToPool (Underlying native function: ReturnFXActorToPool 0x886356c)
	static void ReturnFXActorToPool(class UObject*& WorldContextObject, class AActor*& FXActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.RemoveSplineMeshAnimations (Underlying native function: RemoveSplineMeshAnimations 0x886348c)
	static void RemoveSplineMeshAnimations(class UObject*& WorldContextObject, class USplineMeshComponent*& SplineMesh); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.RemoveParticleAnimations (Underlying native function: RemoveParticleAnimations 0x8863388)
	static void RemoveParticleAnimations(class UObject*& WorldContextObject, class UParticleSystemComponent*& ParticleSystemComp); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.RemoveMIDAnimations (Underlying native function: RemoveMIDAnimations 0x88630fc)
	static void RemoveMIDAnimations(class UObject*& WorldContextObject, class UMaterialInstanceDynamic*& Mid); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.RemoveLightAnimations (Underlying native function: RemoveLightAnimations 0x8862ff8)
	static void RemoveLightAnimations(class UObject*& WorldContextObject, class ULightComponent*& LightComp); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.OnPendingWeaponFXEndPlay (Underlying native function: OnPendingWeaponFXEndPlay 0x8862ccc)
	void OnPendingWeaponFXEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortFXManager.GetPickupStretchMIDFromPool (Underlying native function: GetPickupStretchMIDFromPool 0x8860f94)
	static class UMaterialInstanceDynamic* GetPickupStretchMIDFromPool(class AFortPickupEffect*& PickupObject, class UMaterialInterface*& SourceMaterial, class UPrimitiveComponent*& Component, int& ElementIndex, bool& bNeedsToBeInitialized); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.GetPickupRarityMID (Underlying native function: GetPickupRarityMID 0x176c118)
	static class UMaterialInstanceDynamic* GetPickupRarityMID(class AFortPickupEffect*& PickupObject, class UPrimitiveComponent*& Component, int& ElementIndex, int& Rarity, bool& bNeedsToBeInitialized); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.AddSplineMeshSnapAnimation (Underlying native function: AddSplineMeshSnapAnimation 0x885fa10)
	static void AddSplineMeshSnapAnimation(class UObject*& WorldContextObject, struct TArray<class USplineMeshComponent*>& SplineMeshes, class USplineComponent*& TargetSpline, class UCurveFloat*& GrowthCurve, float& Duration, bool& bPlayGrowthReverse); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.AddSplineMeshScaleAnimation (Underlying native function: AddSplineMeshScaleAnimation 0x885f394)
	static void AddSplineMeshScaleAnimation(class UObject*& WorldContextObject, class USplineMeshComponent*& SplineMesh, float& StartScaleStart, float& StartScaleEnd, float& EndScaleStart, float& EndScaleEnd, class UCurveFloat*& LerpCurve, bool& bOneMinusLerpValue, float& Duration, bool& bPlayReverse); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.AddParticleAnimationFloat (Underlying native function: AddParticleAnimationFloat 0x885ed44)
	static void AddParticleAnimationFloat(class UObject*& WorldContextObject, class UParticleSystemComponent*& ParticleSystemComp, struct FName& ParamName, float& StartValue, float& EndValue, class UCurveFloat*& LerpCurve, bool& bOneMinusLerpValue, float& Duration, bool& bPlayReverse); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.AddMIDAnimationFloat (Underlying native function: AddMIDAnimationFloat 0x885e528)
	static void AddMIDAnimationFloat(class UObject*& WorldContextObject, class UMaterialInstanceDynamic*& Mid, struct FName& ParamName, float& StartValue, float& EndValue, class UCurveFloat*& LerpCurve, bool& bOneMinusLerpValue, float& Duration, bool& bPlayReverse); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.AddMIDAnimationColorCurve (Underlying native function: AddMIDAnimationColorCurve 0x885e360)
	static void AddMIDAnimationColorCurve(class UObject*& WorldContextObject, class UMaterialInstanceDynamic*& Mid, struct FName& ParamName, class UCurveLinearColor*& ColorCurve, float& Duration, bool& bPlayReverse); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.AddMIDAnimationColor (Underlying native function: AddMIDAnimationColor 0x885db88)
	static void AddMIDAnimationColor(class UObject*& WorldContextObject, class UMaterialInstanceDynamic*& Mid, struct FName& ParamName, struct FLinearColor& StartValue, struct FLinearColor& EndValue, class UCurveFloat*& LerpCurve, bool& bOneMinusLerpValue, float& Duration, bool& bPlayReverse); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.AddLightAnimationIntensity (Underlying native function: AddLightAnimationIntensity 0x885d5c4)
	static void AddLightAnimationIntensity(class UObject*& WorldContextObject, class ULightComponent*& LightComp, float& StartValue, float& EndValue, class UCurveFloat*& LerpCurve, bool& bOneMinusLerpValue, float& Duration, bool& bPlayReverse); // (Final | Native | Static | Public | BlueprintCallable)
};

