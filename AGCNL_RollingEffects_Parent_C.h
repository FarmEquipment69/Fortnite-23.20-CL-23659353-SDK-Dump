// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/CollisionEffects/GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C
// Size: 0xae8
class AGCNL_RollingEffects_Parent_C : public AFortGameplayCueNotifyLoop_PhysicsObjectRolling
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xac0 (0x8)
	class USoundBase* SoundAssetDefault; // 0xac8 (0x8)
	class USoundBase* SoundAssetSmall; // 0xad0 (0x8)
	class USoundBase* SoundAssetMedium; // 0xad8 (0x8)
	class USoundBase* SoundAssetLarge; // 0xae0 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/CollisionEffects/GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C.GetObjectSizeParam (Has no native function)
	void GetObjectSizeParam(class AActor*& PhysicsObject, int& Size, bool& CallFuncDoesPhysicsObjectMeetSizeRequirementReturnValue, bool& CallFuncDoesPhysicsObjectMeetSizeRequirementReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/GameplayCueNotifies/CollisionEffects/GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C.GetSoundAsset (Has no native function)
	void GetSoundAsset(class AActor*& PhysicsObject, class USoundBase*& Asset, int& TempintVariable, int& CallFuncGetObjectSizeParamSize, bool& TempboolVariable, class USoundBase*& K2NodeSelectDefault, bool& CallFuncIsValidReturnValue, class USoundBase*& K2NodeSelectDefault1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/GameplayCueNotifies/CollisionEffects/GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C.OnApplicationGeneric (Has no native function)
	void OnApplicationGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/CollisionEffects/GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C.OnRemovalGeneric (Has no native function)
	void OnRemovalGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/CollisionEffects/GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C.ExecuteUbergraph_GCNL_RollingEffects_Parent (Has no native function)
	void ExecuteUbergraphGCNLRollingEffectsParent(int& EntryPoint, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance1, class ADecalActor*& K2NodeEventBurstDecalInstance1, class USoundBase*& CallFuncGetSoundAssetAsset, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncK2AttachToComponentReturnValue); // (Final | 0x00008000 | HasDefaults)
};

