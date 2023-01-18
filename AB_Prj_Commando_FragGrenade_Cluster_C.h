// BlueprintGeneratedClass /Game/Abilities/Player/Perks/Hero/ClusterBomb/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C
// Size: 0xa78
class AB_Prj_Commando_FragGrenade_Cluster_C : public AFortProjectileBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xa20 (0x8)
	class UParticleSystemComponent* ParticleSystem1; // 0xa28 (0x8)
	class UAudioComponent* Audio1; // 0xa30 (0x8)
	class USoundBase* BounceSound; // 0xa38 (0x8)
	class UParticleSystem* PExplosion; // 0xa40 (0x8)
	class USoundBase* ExplosionSound; // 0xa48 (0x8)
	struct FVector ExplosionLocation; // 0xa50 (0x18)
	double MinExplosionDelay; // 0xa68 (0x8)
	double MaxExplosionDelay; // 0xa70 (0x8)

	/* Functions */

	// Function /Game/Abilities/Player/Perks/Hero/ClusterBomb/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.OnStop (Has no native function)
	void OnStop(struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Perks/Hero/ClusterBomb/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.ReceiveAnyDamage (Has no native function)
	void ReceiveAnyDamage(float& Damage, class UDamageType*& DamageType, class AController*& InstigatedBy, class AActor*& DamageCauser); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Player/Perks/Hero/ClusterBomb/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Perks/Hero/ClusterBomb/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.OnExploded (Has no native function)
	void OnExploded(struct TArray<class AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Perks/Hero/ClusterBomb/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster (Has no native function)
	void ExecuteUbergraphBPrjCommandoFragGrenadeCluster(int& EntryPoint, bool& CallFuncHasAuthorityReturnValue, bool& TempboolHasBeenInitdVariable, bool& TempboolIsClosedVariable, bool& TempboolHasBeenInitdVariable1, bool& CallFuncIsDedicatedServerReturnValue, struct FHitResult& K2NodeEventHit, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, float& K2NodeEventDamage, class UDamageType*& K2NodeEventDamageType, class AController*& K2NodeEventInstigatedBy, class AActor*& K2NodeEventDamageCauser, bool& TempboolIsClosedVariable1, struct TArray<class AActor*>& K2NodeEventHitActors, struct TArray<struct FHitResult>& K2NodeEventHitResults, struct FVector& CallFuncK2GetActorLocationReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, double& CallFuncRandomFloatInRangeReturnValue, float& CallFuncDelayDurationImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

