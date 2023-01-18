// BlueprintGeneratedClass /Game/Athena/Items/PhysicsActors/PhysicsBoulder/Prop_PhysicsBoulder_Granite.Prop_PhysicsBoulder_Granite_C
// Size: 0xf7c
class AProp_PhysicsBoulder_Granite_C : public AProp_PhysicsBoulder_Parent_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xf68 (0x8)
	class UNiagaraSystem* NSRollingEffects; // 0xf70 (0x8)
	struct FName RollingEffectsVector3VarName; // 0xf78 (0x4)

	/* Functions */

	// Function /Game/Athena/Items/PhysicsActors/PhysicsBoulder/Prop_PhysicsBoulder_Granite.Prop_PhysicsBoulder_Granite_C.OnDeathPlayEffects (Has no native function)
	void OnDeathPlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsBoulder/Prop_PhysicsBoulder_Granite.Prop_PhysicsBoulder_Granite_C.ReceiveHit (Has no native function)
	void ReceiveHit(class UPrimitiveComponent*& MyComp, class AActor*& Other, class UPrimitiveComponent*& OtherComp, bool& bSelfMoved, struct FVector& HitLocation, struct FVector& HitNormal, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsBoulder/Prop_PhysicsBoulder_Granite.Prop_PhysicsBoulder_Granite_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsBoulder/Prop_PhysicsBoulder_Granite.Prop_PhysicsBoulder_Granite_C.ExecuteUbergraph_Prop_PhysicsBoulder_Granite (Has no native function)
	void ExecuteUbergraphPropPhysicsBoulderGranite(int& EntryPoint, class UPrimitiveComponent*& K2NodeEventMyComp, class AActor*& K2NodeEventOther, class UPrimitiveComponent*& K2NodeEventOtherComp, bool& K2NodeEventbSelfMoved, struct FVector& K2NodeEventHitLocation, struct FVector& K2NodeEventHitNormal, struct FVector& K2NodeEventNormalImpulse, struct FHitResult& K2NodeEventHit, struct FVector& CallFuncGetComponentVelocityReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue, bool& CallFuncIsServerReturnValue, class UNiagaraComponent*& CallFuncSpawnSystemAtLocationReturnValue, float& K2NodeEventDamage, struct FGameplayTagContainer& K2NodeEventDamageTags, struct FVector& K2NodeEventMomentum, struct FHitResult& K2NodeEventHitInfo, class AFortPawn*& K2NodeEventInstigatedBy, class AActor*& K2NodeEventDamageCauser, struct FGameplayEffectContextHandle& K2NodeEventEffectContext, struct FVector& CallFuncGetComponentVelocityReturnValue1, struct FVector& CallFuncGetComponentVelocityReturnValue2, double& CallFuncVSizeReturnValue, bool& CallFuncLessDoubleDoubleReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue, class UNiagaraComponent*& CallFuncSpawnSystemAtLocationReturnValue1, class UNiagaraComponent*& CallFuncSpawnSystemAttachedReturnValue, class UNiagaraComponent*& CallFuncSpawnSystemAtLocationReturnValue2); // (Final | 0x00008000 | HasDefaults)
};

