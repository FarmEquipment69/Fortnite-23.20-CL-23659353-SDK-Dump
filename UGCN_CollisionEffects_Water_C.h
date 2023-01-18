// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/CollisionEffects/GCN_CollisionEffects_Water.GCN_CollisionEffects_Water_C
// Size: 0x380
class UGCN_CollisionEffects_Water_C : public UGCN_CollisionEffects_Parent_C
{
	int FXSize; // 0x368 (0x4)
	unsigned char unreflected_36c[0x4]; // 0x36c (0x4) 
	struct TArray<class UNiagaraSystem*> WaterSplash; // 0x370 (0x10)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/CollisionEffects/GCN_CollisionEffects_Water.GCN_CollisionEffects_Water_C.OnBurst (Has no native function)
	void OnBurst(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance, float& CallFuncBreakGameplayCueParametersNormalizedMagnitude, float& CallFuncBreakGameplayCueParametersRawMagnitude, struct FGameplayEffectContextHandle& CallFuncBreakGameplayCueParametersEffectContext, struct FGameplayTag& CallFuncBreakGameplayCueParametersMatchedTagName, struct FGameplayTag& CallFuncBreakGameplayCueParametersOriginalTag, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedSourceTags, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedTargetTags, struct FVector& CallFuncBreakGameplayCueParametersLocation, struct FVector& CallFuncBreakGameplayCueParametersNormal, class AActor*& CallFuncBreakGameplayCueParametersInstigator, class AActor*& CallFuncBreakGameplayCueParametersEffectCauser, class UObject*& CallFuncBreakGameplayCueParametersSourceObject, class UPhysicalMaterial*& CallFuncBreakGameplayCueParametersPhysicalMaterial, int& CallFuncBreakGameplayCueParametersGameplayEffectLevel, int& CallFuncBreakGameplayCueParametersAbilityLevel, class USceneComponent*& CallFuncBreakGameplayCueParametersTargetAttachComponent, bool& CallFuncBreakGameplayCueParametersbReplicateLocationWhenUsingMinimalRepProxy, int& CallFuncGetObjectSizeParamSize, class UNiagaraSystem*& CallFuncArrayGetItem, class UFXSystemComponent*& CallFuncSpawnFXAtLocationReturnValue); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Athena/GameplayCueNotifies/CollisionEffects/GCN_CollisionEffects_Water.GCN_CollisionEffects_Water_C.GetObjectSizeParam (Has no native function)
	void GetObjectSizeParam(class AActor*& PhysicsObject, int& Size, enum EFortPhysicsSimSize& TempbyteVariable, enum EFortPhysicsSimSize& CallFuncGetPhysicsObjectSimSizeReturnValue, int& TempintVariable, int& TempintVariable1, int& TempintVariable2, int& TempintVariable3, int& TempintVariable4, int& TempintVariable5, int& TempintVariable6, int& TempintVariable7, int& K2NodeSelectDefault); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

