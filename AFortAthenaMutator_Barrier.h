// Class /Script/FortniteGame.FortAthenaMutator_Barrier
// Size: 0xe68
class AFortAthenaMutator_Barrier : public AFortAthenaMutator
{
	class UClass* BigBaseWallClass; // 0x330 (0x8)
	class UClass* ObjectiveFlag; // 0x338 (0x8)
	bool bGameEndsWhenObjectiveIsDestroyed; // 0x340 (0x1)
	unsigned char unreflected_341[0x7]; // 0x341 (0x7) 
	struct FBarrierHeadData FoodHeadData[0x2]; // 0x348 (0x10) (ARRAY) 
	struct FBarrierMountedTurretData MountedTurretOverrideMaterials[0x2]; // 0x368 (0x18) (ARRAY) 
	class AAthenaBigBaseWall* BigBaseWall; // 0x398 (0x8)
	struct FBarrierTeamState Team0State; // 0x3a0 (0x28)
	struct FBarrierTeamState Team1State; // 0x3c8 (0x28)
	struct FScalableFloat ObjectiveDistanceFromWall; // 0x3f0 (0x28)
	struct FScalableFloat SafeZonePhaseToStartObjectiveDestructionTimer; // 0x418 (0x28)
	struct FScalableFloat ObjectiveDestructionTimer; // 0x440 (0x28)
	struct FScalableFloat StartObjectiveDamageOnSpecialEvent; // 0x468 (0x28)
	struct FScalableFloat ObjectiveZOffset; // 0x490 (0x28)
	struct FScalableFloat ObjectiveMaxZDiff; // 0x4b8 (0x28)
	struct FScalableFloat ObjectiveMaxSpawnHeight; // 0x4e0 (0x28)
	struct FScalableFloat ObjectivesSpawnSameHeight; // 0x508 (0x28)
	struct FScalableFloat LavaLevelRelativeToMascot; // 0x530 (0x28)
	struct FScalableFloat ObjectiveHealthTiers[0x9]; // 0x558 (0x28) (ARRAY) 
	struct FScalableFloat WallGravity; // 0x6c0 (0x28)
	struct FScalableFloat SafeZonePhaseWhenToBringDownWall; // 0x6e8 (0x28)
	struct FScalableFloat TimeToBringDownWall; // 0x710 (0x28)
	struct FFortRespawnLogicData RespawnLogicData; // 0x738 (0x140)
	struct FScalableFloat SafeZonePhaseToTurnOffRespawning; // 0x878 (0x28)
	struct FScalableFloat HealthToWarnAboutRespawnsAt; // 0x8a0 (0x28)
	struct FAthenaGameMessageData GameMsgIntro; // 0x8c8 (0x50)
	struct FAthenaGameMessageData GameMsgWallComingDown; // 0x918 (0x50)
	struct FAthenaGameMessageData GameMsgWallDown; // 0x968 (0x50)
	struct FAthenaGameMessageData GameMsgObjectiveDestroyedFriendly; // 0x9b8 (0x50)
	struct FAthenaGameMessageData GameMsgObjectiveDestroyedFriendlyNotGameOver; // 0xa08 (0x50)
	struct FAthenaGameMessageData GameMsgObjectiveDestroyedEnemy; // 0xa58 (0x50)
	struct FAthenaGameMessageData GameMsgNoMoreRespawnsWarningFriendly; // 0xaa8 (0x50)
	struct FAthenaGameMessageData GameMsgNoMoreRespawnsFriendly; // 0xaf8 (0x50)
	struct FAthenaGameMessageData GameMsgNoMoreRespawnsEnemy; // 0xb48 (0x50)
	struct FAthenaGameMessageData GameMsgObjectiveDamageStateFriendly[0x9]; // 0xb98 (0x50) (ARRAY) 

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_Barrier.OnMutatorGameplayEvent (Underlying native function: OnMutatorGameplayEvent 0x8489ae8)
	void OnMutatorGameplayEvent(int& EventId, int& EventParam1, int& EventParam2, int& EventParam3); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Barrier.OnGamePhaseStepChanged (Underlying native function: OnGamePhaseStepChanged 0x8489798)
	void OnGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaMutator_Barrier.CheckHealthThreshold (Underlying native function: CheckHealthThreshold 0x8487e5c)
	void CheckHealthThreshold(unsigned char& TeamNum); // (Final | Native | Protected)
};

