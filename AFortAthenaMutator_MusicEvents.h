// Class /Script/FortniteGame.FortAthenaMutator_MusicEvents
// Size: 0x3a0
class AFortAthenaMutator_MusicEvents : public AFortAthenaMutator
{
	struct TArray<struct FFortMutatorGamePhaseMusicEvent> GamePhaseEvents; // 0x330 (0x10)
	struct TArray<struct FFortMutatorGamePhaseStepMusicEvent> GamePhaseStepEvents; // 0x340 (0x10)
	struct FFortMutatorMusicEvent MatchEndWinEvent; // 0x350 (0x10)
	struct FFortMutatorMusicEvent MatchEndLoseEvent; // 0x360 (0x10)
	struct FFortMutatorMusicEvent MatchEndNeutralEvent; // 0x370 (0x10)
	float CrossfadeTime; // 0x380 (0x4)
	unsigned char padding_384[0x1c]; // 0x384 (0x1c)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_MusicEvents.OnGamePhaseStepChanged (Underlying native function: OnGamePhaseStepChanged 0x84ee5d4)
	void OnGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& NewStep); // (Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaMutator_MusicEvents.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x8489340)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_MusicEvents.HandleWaitingOnPlacement_Spectate (Underlying native function: HandleWaitingOnPlacement_Spectate 0x84ee0d8)
	void HandleWaitingOnPlacementSpectate(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_MusicEvents.HandleWaitingOnPlacement_Local (Underlying native function: HandleWaitingOnPlacement_Local 0x84ee01c)
	void HandleWaitingOnPlacementLocal(class AFortPlayerStateAthena*& Sender, int& NewPlace); // (Final | Native | Protected)
};

