// BlueprintGeneratedClass /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C
// Size: 0x558
class AGCN_BurtCharging_Player_Latent_C : public AFortGameplayCueNotify_BurstLatent
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x528 (0x8)
	class APlayerController* GCPlayerController; // 0x530 (0x8)
	class AFortPlayerPawn* FortPlayerPawn; // 0x538 (0x8)
	class USoundBase* BoostSound; // 0x540 (0x8)
	class UAudioComponent* BoostAudioComponent; // 0x548 (0x8)
	class USoundBase* BoostEndSound; // 0x550 (0x8)

	/* Functions */

	// Function /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.OnExecute (Has no native function)
	bool OnExecute(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.ExecuteBoostLogic (Has no native function)
	void ExecuteBoostLogic(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.BoostEndEvent (Has no native function)
	void BoostEndEvent(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.ExecuteUbergraph_GCN_BurtCharging_Player_Latent (Has no native function)
	void ExecuteUbergraphGCNBurtChargingPlayerLatent(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, bool& CallFuncIsValidReturnValue, struct TScriptInterface<class ICameraLensEffectInterface>& CallFuncAddGenericCameraLensEffectReturnValue, class UFXSystemComponent*& CallFuncGetPrimaryParticleComponentReturnValue); // (Final | 0x00008000 | HasDefaults)
};

