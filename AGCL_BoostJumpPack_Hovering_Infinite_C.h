// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C
// Size: 0xae0
class AGCL_BoostJumpPack_Hovering_Infinite_C : public AGameplayCueNotify_Jetpack_Hovering
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xaa0 (0x8)
	bool bJetpackAudioEnabled; // 0xaa8 (0x1)
	unsigned char unreflected_aa9[0x7]; // 0xaa9 (0x7) 
	class USoundBase* SoundOnStart; // 0xab0 (0x8)
	class USoundBase* SoundOnStop; // 0xab8 (0x8)
	class USoundBase* SoundLoopOnIdle; // 0xac0 (0x8)
	class USoundBase* SoundLoopOnAccel; // 0xac8 (0x8)
	bool bIsFirstJump; // 0xad0 (0x1)
	unsigned char unreflected_ad1[0x7]; // 0xad1 (0x7) 
	class UFXSystemComponent* VFXReference; // 0xad8 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.SetJetpackAudioEnabled (Has no native function)
	void SetJetpackAudioEnabled(bool& Enabled, bool& CallFuncIsValidReturnValue, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, bool& CallFuncIsValidReturnValue1, class USceneComponent*& CallFuncK2GetRootComponentReturnValue1, class USceneComponent*& CallFuncK2GetRootComponentReturnValue2, class USceneComponent*& CallFuncK2GetRootComponentReturnValue3, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& TempboolVariable, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue, class USoundBase*& K2NodeSelectDefault, double& CallFuncRandomFloatInRangeReturnValue, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue1, double& CallFuncRandomFloatInRangeReturnValue1, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue2, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue3, float& CallFuncSpawnSoundAttachedStartTimeImplicitCast, float& CallFuncSpawnSoundAttachedStartTimeImplicitCast1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.OnRemove (Has no native function)
	bool OnRemove(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.OnActive (Has no native function)
	bool OnActive(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.On Pawn Landed (Has no native function)
	void OnPawnLanded(struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite (Has no native function)
	void ExecuteUbergraphGCLBoostJumpPackHoveringInfinite(int& EntryPoint, struct FHitResult& K2NodeCustomEventHit, struct FDelegate& K2NodeCreateDelegateOutputDelegate); // (Final | 0x00008000 | HasDefaults)
};

