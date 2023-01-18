// BlueprintGeneratedClass /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C
// Size: 0xd14
class AB_Prj_Commando_FragGrenade_C : public AFortProjectileBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xa20 (0x8)
	class URotatingMovementComponent* RotatingMovement; // 0xa28 (0x8)
	class UParticleSystemComponent* FuseParticle; // 0xa30 (0x8)
	class UStaticMeshComponent* Mesh; // 0xa38 (0x8)
	class UAudioComponent* GrenadeFuseAudioComponent; // 0xa40 (0x8)
	class UParticleSystemComponent* EffectDistance; // 0xa48 (0x8)
	class UParticleSystem* PExplosion; // 0xa50 (0x8)
	class USoundBase* CueDistantSound; // 0xa58 (0x8)
	class USoundBase* CueCloseSound; // 0xa60 (0x8)
	double ExplosionRadius; // 0xa68 (0x8)
	int NumberOfBouncesTillExplode; // 0xa70 (0x4)
	int CurrentNumberOfBounces; // 0xa74 (0x4)
	class USoundBase* CueGrenadeFuseSound; // 0xa78 (0x8)
	double BouncePawnAgainstPawnGravityScale; // 0xa80 (0x8)
	class UForceFeedbackEffect* ExplosionForceFeedbackNear; // 0xa88 (0x8)
	class UForceFeedbackEffect* ExplosionForceFeedbackFar; // 0xa90 (0x8)
	int MaxClusterGrenades; // 0xa98 (0x4)
	struct FGameplayTag ECClusterExplosion; // 0xa9c (0x4)
	bool bHasCluster; // 0xaa0 (0x1)
	unsigned char unreflected_aa1[0x7]; // 0xaa1 (0x7) 
	class UClass* PrjCluster; // 0xaa8 (0x8)
	struct FFortGameplayEffectContainerSpec ClusterContainerSpec; // 0xab0 (0xb8)
	bool bHasKeepOut; // 0xb68 (0x1)
	unsigned char unreflected_b69[0x7]; // 0xb69 (0x7) 
	struct FFortGameplayEffectContainerSpec KeepOutContainerSpec; // 0xb70 (0xb8)
	class UClass* AOEKeepOut; // 0xc28 (0x8)
	bool bHasClusterTactical; // 0xc30 (0x1)
	unsigned char unreflected_c31[0x7]; // 0xc31 (0x7) 
	struct FFortGameplayEffectContainerSpec ClusterTacticalContainerSpec; // 0xc38 (0xb8)
	struct FGameplayTagContainer TCActorTagsThatShouldExplodeOnOverlap; // 0xcf0 (0x20)
	struct FGameplayTag TEventGrenadeExploded; // 0xd10 (0x4)

	/* Functions */

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.SpawnKeepOut (Has no native function)
	void SpawnKeepOut(struct FVector& CallFuncK2GetActorLocationReturnValue, class AActor*& CallFuncGetOwnerReturnValue, struct FRotator& CallFuncMakeRotatorReturnValue, class AFortAreaOfEffectCloud*& CallFuncSpawnAreaOfEffectCloudReturnValue, class AAOE_Commando_KeepOutExplosion_C*& K2NodeDynamicCastAsAOECommandoKeepOutExplosion, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.SpawnClusters (Has no native function)
	void SpawnClusters(double& CallFuncRandomFloatInRangeReturnValue, double& CallFuncRandomFloatInRangeReturnValue1, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FRotator& CallFuncMakeRotatorReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, class AActor*& CallFuncGetOwnerReturnValue, bool& TempboolVariable, double& CallFuncRandomFloatInRangeReturnValue2, int& TempintVariable, struct FFortGameplayEffectContainerSpec& K2NodeSelectDefault, int& CallFuncAddIntIntReturnValue, class AFortProjectileBase*& CallFuncSpawnProjectileReturnValue, bool& CallFuncLessEqualIntIntReturnValue, float& CallFuncMakeRotatorYawImplicitCast, float& CallFuncMakeRotatorPitchImplicitCast, float& CallFuncSpawnProjectileInitialSpeedImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.CalcGrenadeSpeed (Has no native function)
	double CalcGrenadeSpeed(double& Angle); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnRep_StoredHit (Has no native function)
	void OnRepStoredHit(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(bool& CallFuncIsDedicatedServerReturnValue); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnStop (Has no native function)
	void OnStop(struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Stop_Rotation (Has no native function)
	void StopRotation(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnExploded (Has no native function)
	void OnExploded(struct TArray<class AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveAnyDamage (Has no native function)
	void ReceiveAnyDamage(float& Damage, class UDamageType*& DamageType, class AController*& InstigatedBy, class AActor*& DamageCauser); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnBounce (Has no native function)
	void OnBounce(struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.On Destroy Grenade (Has no native function)
	void OnDestroyGrenade(class AActor*& DestroyedActor); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Bind Destroy Grenade (Has no native function)
	void BindDestroyGrenade(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Force On Exploded Effects (Has no native function)
	void ForceOnExplodedEffects(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Unbind Destroy Grenade (Has no native function)
	void UnbindDestroyGrenade(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.TriggerDoExplsoion (Has no native function)
	void TriggerDoExplsoion(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveDestroyed (Has no native function)
	void ReceiveDestroyed(); // (Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.CheckKeepOutAndCluster (Has no native function)
	void CheckKeepOutAndCluster(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveActorBeginOverlap (Has no native function)
	void ReceiveActorBeginOverlap(class AActor*& OtherActor); // (Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.SendExplodedEvent (Has no native function)
	void SendExplodedEvent(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ExecuteUbergraph_B_Prj_Commando_FragGrenade (Has no native function)
	void ExecuteUbergraphBPrjCommandoFragGrenade(int& EntryPoint, bool& TempboolHasBeenInitdVariable, bool& TempboolIsClosedVariable, bool& CallFuncHasAuthorityReturnValue, bool& TempboolVariable, struct FHitResult& K2NodeEventHit1, class AController*& CallFuncGetInstigatorControllerReturnValue, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult, class APlayerController*& CallFuncGetPlayerControllerReturnValue, bool& CallFuncOnSameTeamReturnValue, struct TArray<class AActor*>& K2NodeEventHitActors, struct TArray<struct FHitResult>& K2NodeEventHitResults, float& K2NodeEventDamage, class UDamageType*& K2NodeEventDamageType, class AController*& K2NodeEventInstigatedBy, class AActor*& K2NodeEventDamageCauser, struct FRotator& CallFuncMakeRotatorReturnValue, class APawn*& CallFuncGetInstigatorReturnValue, bool& CallFuncIsLocallyControlledReturnValue, struct FVector& CallFuncConvFloatToVectorReturnValue, struct FHitResult& K2NodeEventHit, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, class APawn*& K2NodeDynamicCastAsPawn, bool& K2NodeDynamicCastbSuccess, int& CallFuncAddIntIntReturnValue, bool& CallFuncEqualEqualObjectObjectReturnValue, bool& CallFuncGreaterEqualIntIntReturnValue, bool& TempboolHasBeenInitdVariable1, bool& TempboolHasBeenInitdVariable2, bool& TempboolHasBeenInitdVariable3, bool& TempboolHasBeenInitdVariable4, bool& TempboolIsClosedVariable1, double& CallFuncMultiplyDoubleDoubleReturnValue, int& CallFuncAddIntIntReturnValue1, bool& CallFuncGreaterEqualIntIntReturnValue1, class APawn*& CallFuncGetInstigatorReturnValue1, struct FVector& CallFuncMultiplyVectorFloatReturnValue, class APawn*& CallFuncGetInstigatorReturnValue2, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, bool& CallFuncNotEqualObjectObjectReturnValue, double& CallFuncAbsReturnValue, struct FVector& CallFuncMakeVectorReturnValue, class AActor*& K2NodeCustomEventDestroyedActor, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, bool& TempboolIsClosedVariable2, bool& TempboolIsClosedVariable3, bool& CallFuncIsDedicatedServerReturnValue, bool& CallFuncIsDedicatedServerReturnValue1, bool& TempboolIsClosedVariable4, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AActor*& K2NodeEventOtherActor, struct TScriptInterface<class IGameplayTagAssetInterface>& K2NodeDynamicCastAsGameplayTagAssetInterface, bool& K2NodeDynamicCastbSuccess1, class APawn*& K2NodeDynamicCastAsPawn1, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue, bool& CallFuncNotEqualObjectObjectReturnValue1, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue1, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue2, struct FVector& CallFuncK2GetActorLocationReturnValue3, class APawn*& CallFuncGetInstigatorReturnValue3, struct FTransform& CallFuncGetTransformReturnValue, bool& CallFuncIsValidReturnValue, struct FGameplayAbilityTargetingLocationInfo& K2NodeMakeStructGameplayAbilityTargetingLocationInfo, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromLocationsReturnValue, struct FGameplayEventData& K2NodeMakeStructGameplayEventData, float& CallFuncConvFloatToVectorInFloatImplicitCast, float& K2NodeVariableSetProjectileGravityScaleImplicitCast, float& CallFuncPlayLocalForceFeedbackAtLocationMultiInnerRadiusImplicitCast, float& CallFuncPlayLocalForceFeedbackAtLocationMultiOuterRadiusImplicitCast, float& K2NodeVariableSetProjectileGravityScaleImplicitCast1, double& CallFuncMultiplyVectorFloatBImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

