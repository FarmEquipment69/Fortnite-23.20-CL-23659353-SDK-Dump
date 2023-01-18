// Class /Script/FortniteGame.FortAthenaMutator_Disco
// Size: 0xa18
class AFortAthenaMutator_Disco : public AFortAthenaMutator
{
	struct FScalableFloat GoalScoreToWin; // 0x330 (0x28)
	struct FScalableFloat PointAccrualFrequency; // 0x358 (0x28)
	struct FScalableFloat LastRespawnableSafeZone; // 0x380 (0x28)
	struct FScalableFloat LastSafeZone; // 0x3a8 (0x28)
	struct FFortRespawnLogicData RespawnLogicData; // 0x3d0 (0x140)
	int LastRespawnableSafeZoneIndex; // 0x510 (0x4)
	bool bRespawnWarningGiven; // 0x514 (0x1)
	unsigned char unreflected_515[0x3]; // 0x515 (0x3) 
	int LastSafeZoneIndex; // 0x518 (0x4)
	unsigned char unreflected_51c[0x4]; // 0x51c (0x4) 
	struct FControlPointAssetData ControlPointAssets; // 0x520 (0x50)
	struct TArray<struct FControlPointSpawnData> ControlPointSpawnData; // 0x570 (0x10)
	struct TArray<struct FControlPointInstanceData> SpawnedControlPoints; // 0x580 (0x10)
	struct TArray<class AFortPlayerStateAthena*> DancingPlayerList; // 0x590 (0x10)
	struct TArray<class AFortPlayerStateAthena*> PrevDancingPlayerList; // 0x5a0 (0x10)
	float TimeUntilPointAccrual; // 0x5b0 (0x4)
	int SentDiscoOpenedMessagesIndex; // 0x5b4 (0x4)
	struct FAthenaGameMessageData GameMsgIntro; // 0x5b8 (0x50)
	struct FAthenaGameMessageData GameMsgFirstCapturePointsEnabled; // 0x608 (0x50)
	struct FAthenaGameMessageData GameMsgSecondCapturePointsEnabled; // 0x658 (0x50)
	struct FAthenaGameMessageData GameMsgThirdCapturePointsEnabled; // 0x6a8 (0x50)
	struct FAthenaGameMessageData GameMsgLastCapturePointsEnabled; // 0x6f8 (0x50)
	struct FAthenaGameMessageData GameMsgCapturePointsEnabled; // 0x748 (0x50)
	struct FAthenaGameMessageData GameMsgCapturePointsDisabled; // 0x798 (0x50)
	struct FAthenaGameMessageData GameMsgEnemyCapturedAllPoints; // 0x7e8 (0x50)
	struct FAthenaGameMessageData GameMsgAlliesCapturedAllPoints; // 0x838 (0x50)
	struct FAthenaGameMessageData GameMsgAllyCapturePointLost; // 0x888 (0x50)
	struct FAthenaGameMessageData GameMsgEnemyAboutToWin; // 0x8d8 (0x50)
	struct FAthenaGameMessageData GameMsgAlliesAboutToWin; // 0x928 (0x50)
	struct FAthenaGameMessageData GameMsgNoMoreRespawnsWarning; // 0x978 (0x50)
	struct FAthenaGameMessageData GameMsgNoMoreRespawns; // 0x9c8 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_Disco.OnMutatorGameplayEvent (Underlying native function: OnMutatorGameplayEvent 0x84a837c)
	void OnMutatorGameplayEvent(int& EventId, int& EventParam1, int& EventParam2, int& EventParam3); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Disco.OnGamePhaseStepChanged (Underlying native function: OnGamePhaseStepChanged 0x84a7ff0)
	void OnGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaMutator_Disco.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x84a7e30)
	void OnGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Disco.OnCaptureLockBroken (Underlying native function: OnCaptureLockBroken 0x84a7b4c)
	void OnCaptureLockBroken(class AAthenaCapturePoint*& CapturePoint, unsigned char& LockTeam, unsigned char& BreakTeam); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaMutator_Disco.OnCaptureLock (Underlying native function: OnCaptureLock 0x84a7a50)
	void OnCaptureLock(class AAthenaCapturePoint*& CapturePoint, unsigned char& LockTeam, bool& bIsNewLock); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaMutator_Disco.IsRespawningAllowed (Underlying native function: IsRespawningAllowed 0x84a7420)
	bool IsRespawningAllowed(); // (Final | Native | Protected)
};

