// BlueprintGeneratedClass /Game/Athena/Items/EnvironmentalItems/SCMachine/GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C
// Size: 0xb78
class UGA_Athena_SCMachine_Passive_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class AFortPlayerPawnAthena* PlayerPawn; // 0xb28 (0x8)
	struct FVector SpawnZOffset; // 0xb30 (0x18)
	struct FGameplayTag BlockChipSpawnTag; // 0xb48 (0x4)
	unsigned char unreflected_b4c[0x4]; // 0xb4c (0x4) 
	struct FScalableFloat DropRebootCards; // 0xb50 (0x28)

	/* Functions */

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.CheckPlayerChipSpawnEnabled (Has no native function)
	void CheckPlayerChipSpawnEnabled(bool& IsChipSpawnEnabled, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncNotPreBoolReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.Check Resurrection Active (Has no native function)
	void CheckResurrectionActive(bool& bEnabled, bool& PlaylistValid, struct FName& TestPlaylist, class AGameStateBase*& CallFuncGetGameStateReturnValue, bool& CallFuncIsValidReturnValue, class UFortGameStateComponent_Reboot*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsResurrectionEnabledReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.SaveOutPlayer (Has no native function)
	void SaveOutPlayer(class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.Spawn (Has no native function)
	void Spawn(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.HandleOnFortPlayerDied (Has no native function)
	void HandleOnFortPlayerDied(class AFortPlayerPawnAthena*& FortPlayerPawnAthena); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.ExecuteUbergraph_GA_Athena_SCMachine_Passive (Has no native function)
	void ExecuteUbergraphGAAthenaSCMachinePassive(int& EntryPoint, bool& CallFuncGetValueAsBoolWithContextReturnValue, unsigned char& CallFuncGetActorTeamReturnValue, struct FTransform& CallFuncGetTransformReturnValue, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, struct FVector& CallFuncBreakTransformLocation, struct FRotator& CallFuncBreakTransformRotation, struct FVector& CallFuncBreakTransformScale, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, bool& CallFuncCheckResurrectionActivebEnabled, struct FTransform& CallFuncMakeTransformReturnValue, class AFortPlayerPawnAthena*& K2NodeCustomEventFortPlayerPawnAthena, class AActor*& CallFuncBeginDeferredActorSpawnFromClassReturnValue, class ABGA_Athena_SCMachine_Pickup_C*& CallFuncFinishSpawningActorReturnValue, class AGameStateBase*& CallFuncGetGameStateReturnValue, class AFortGameStateZone*& K2NodeDynamicCastAsFortGameStateZone, bool& K2NodeDynamicCastbSuccess, class AGameStateBase*& CallFuncGetGameStateReturnValue1, class AFortGameStateAthena*& K2NodeDynamicCastAsFortGameStateAthena, bool& K2NodeDynamicCastbSuccess1, class AFortPlayerState*& K2NodeDynamicCastAsFortPlayerState, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncIsBattleLabModePlaylistReturnValue, bool& CallFuncIsRespawningAllowedReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncCheckPlayerChipSpawnEnabledIsChipSpawnEnabled, bool& CallFuncBooleanANDReturnValue); // (Final | 0x00008000 | HasDefaults)
};

