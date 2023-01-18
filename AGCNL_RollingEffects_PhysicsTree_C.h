// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/CollisionEffects/GCNL_RollingEffects_PhysicsTree.GCNL_RollingEffects_PhysicsTree_C
// Size: 0xaf0
class AGCNL_RollingEffects_PhysicsTree_C : public AGCNL_RollingEffects_Parent_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xae8 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/CollisionEffects/GCNL_RollingEffects_PhysicsTree.GCNL_RollingEffects_PhysicsTree_C.OnLoopingStartGeneric (Has no native function)
	void OnLoopingStartGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/CollisionEffects/GCNL_RollingEffects_PhysicsTree.GCNL_RollingEffects_PhysicsTree_C.OnRemovalGeneric (Has no native function)
	void OnRemovalGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/CollisionEffects/GCNL_RollingEffects_PhysicsTree.GCNL_RollingEffects_PhysicsTree_C.ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree (Has no native function)
	void ExecuteUbergraphGCNLRollingEffectsPhysicsTree(int& EntryPoint, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class ABGA_PhysicsTreeLog_C*& K2NodeDynamicCastAsBGAPhysicsTreeLog, bool& K2NodeDynamicCastbSuccess, class ABGA_PhysicsTreeLog_C*& K2NodeDynamicCastAsBGAPhysicsTreeLog1, bool& K2NodeDynamicCastbSuccess1, struct FVector& CallFuncK2GetActorLocationReturnValue); // (Final | 0x00008000 | HasDefaults)
};

