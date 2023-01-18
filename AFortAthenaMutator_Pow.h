// Class /Script/FortniteGame.FortAthenaMutator_Pow
// Size: 0x780
class AFortAthenaMutator_Pow : public AFortAthenaMutator
{
	struct FMulticastInlineDelegate TimeRemainingUpdated; // 0x330 (0x10)
	struct FFortRespawnLogicData_Teams RespawnSettings; // 0x340 (0x1e0)
	struct TArray<struct FAthenaGameMessageData> IntroMessages; // 0x520 (0x10)
	struct FAthenaGameMessageData RespawningOffMessage; // 0x530 (0x50)
	struct FAthenaGameMessageData RespawnsWillBeOffMessage; // 0x580 (0x50)
	struct FScalableFloat RespawningTimeAllowed; // 0x5d0 (0x28)
	struct FScalableFloat GrantMaxShieldAtRespawnsOff; // 0x5f8 (0x28)
	struct FScalableFloat GrantMaxHealthAtRespawnsOff; // 0x620 (0x28)
	struct FPowPlayerDataArray PlayerData; // 0x648 (0x120)
	unsigned char unreflected_768[0x10]; // 0x768 (0x10) 
	bool bRespawningCurrentlyAllowed; // 0x778 (0x1)
	unsigned char padding_779[0x7]; // 0x779 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_Pow.OnRep_RespawningCurrentlyAllowed (Underlying native function: OnRep_RespawningCurrentlyAllowed 0x84ee894)
	void OnRepRespawningCurrentlyAllowed(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Pow.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x84ee554)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Pow.GetPlayerCurrentShield (Underlying native function: GetPlayerCurrentShield 0x84edc90)
	float GetPlayerCurrentShield(class AFortPlayerStateAthena*& Player); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

