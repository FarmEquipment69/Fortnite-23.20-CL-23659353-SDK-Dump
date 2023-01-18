// Class /Script/FortniteGame.FortAthenaMutator_GameModeBase
// Size: 0x450
class AFortAthenaMutator_GameModeBase : public AFortAthenaMutator
{
	bool bAutomaticallyFinishInitialization; // 0x330 (0x1)
	unsigned char unreflected_331[0x7]; // 0x331 (0x7) 
	struct FAthenaGameMessageData GameMsgAircraftPhaseIntroMessage; // 0x338 (0x50)
	unsigned char unreflected_388[0x8]; // 0x388 (0x8) 
	struct FFortMutatorAudioStinger StingerMatchStart; // 0x390 (0x10)
	struct FFortMutatorAudioStinger StingerMatchEnd; // 0x3a0 (0x10)
	struct FFortMutatorAudioStinger StingerMatchEndWin; // 0x3b0 (0x10)
	struct FFortMutatorAudioStinger StingerMatchEndLose; // 0x3c0 (0x10)
	unsigned char unreflected_3d0[0x8]; // 0x3d0 (0x8) 
	class UAudioComponent* StingerAudioComponent; // 0x3d8 (0x8)
	class UFortAudioEventForwarder* StingerEventForwarder; // 0x3e0 (0x8)
	unsigned char unreflected_3e8[0x58]; // 0x3e8 (0x58) 
	struct TArray<class AFortSquadStart*> FortSquadStartActors; // 0x440 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_GameModeBase.OnPlaylistLoaded (Underlying native function: OnPlaylistLoaded 0x84a8be8)
	void OnPlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContainerTags); // (0x00000002 | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaMutator_GameModeBase.OnMutatorGameplayEvent (Underlying native function: OnMutatorGameplayEvent 0x84a8820)
	void OnMutatorGameplayEvent(int& EventId, int& EventParam1, int& EventParam2, int& EventParam3); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_GameModeBase.OnGamePhaseStepChanged (Underlying native function: OnGamePhaseStepChanged 0x84a80d0)
	void OnGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaMutator_GameModeBase.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x84a7f6c)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_GameModeBase.HandleEndMatchStingerWaitingOnPlacement_Local (Underlying native function: HandleEndMatchStingerWaitingOnPlacement_Local 0x84a6aa4)
	void HandleEndMatchStingerWaitingOnPlacementLocal(class AFortPlayerStateAthena*& Sender, int& NewPlace); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_GameModeBase.GetPOINameForTag (Underlying native function: GetPOINameForTag 0x84a6190)
	struct FText GetPOINameForTag(struct FGameplayTag& POITag); // (0x00000002 | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

