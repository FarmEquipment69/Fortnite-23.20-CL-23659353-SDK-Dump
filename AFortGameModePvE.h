// Class /Script/FortniteGame.FortGameModePvE
// Size: 0xc70
class AFortGameModePvE : public AFortGameModeZone
{
	bool bIdleKickEnabledByConfig; // 0xb90 (0x1)
	bool bIdleKickEnabledByBlueprint; // 0xb91 (0x1)
	bool bOnlyIdleKickPublicMatches; // 0xb92 (0x1)
	bool bResetDefaultIdleTimeWhenNoLongerSolo; // 0xb93 (0x1)
	bool bAnyMovementNotIdleWhilePrivate; // 0xb94 (0x1)
	bool bRestrictMaxIdleTime; // 0xb95 (0x1)
	unsigned char unreflected_b96[0x2]; // 0xb96 (0x2) 
	float RestrictedMaxIdleTime; // 0xb98 (0x4)
	bool bSendIdleAnalytics; // 0xb9c (0x1)
	bool bWaitForAircraft; // 0xb9d (0x1)
	bool bBuildingContainersStartAlreadySearched; // 0xb9e (0x1)
	bool bSpawnLootForBuildingContainersThatStartAlreadySearched; // 0xb9f (0x1)
	struct TArray<class UClass*> BuildingContainersThatRequireSearching; // 0xba0 (0x10)
	unsigned char unreflected_bb0[0x60]; // 0xbb0 (0x60) 
	unsigned char bSpawnWeaponsWithMaxPerks; // 0xc10 (0x1)
	unsigned char bSpawnTrapsWithMaxPerks; // 0xc10 (0x1)
	unsigned char bUseHighPerkSlotValues; // 0xc10 (0x1)
	unsigned char unreflected_c11[0x37]; // 0xc11 (0x37) 
	bool bEnableBigBenPvE; // 0xc48 (0x1)
	unsigned char unreflected_c49[0x7]; // 0xc49 (0x7) 
	struct FDateTime* BigBenPvE; // 0xc50 (0x8)
	float BigBenPvEAdjust; // 0xc58 (0x4)
	unsigned char padding_c5c[0x14]; // 0xc5c (0x14)

	/* Functions */

	// Function /Script/FortniteGame.FortGameModePvE.SetIdleKickEnabled (Underlying native function: SetIdleKickEnabled 0x8eac794)
	void SetIdleKickEnabled(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameModePvE.SetIdleDetectionScoreThreshold (Underlying native function: SetIdleDetectionScoreThreshold 0x8ade45c)
	void SetIdleDetectionScoreThreshold(enum EFortIdleDetectionState& IdleState, int& InScoreThreshold); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameModePvE.SetIdleDetectionPenaltyTime (Underlying native function: SetIdleDetectionPenaltyTime 0x8eac710)
	void SetIdleDetectionPenaltyTime(float& InPenaltyTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameModePvE.SetIdleDetectionMovementDistance (Underlying native function: SetIdleDetectionMovementDistance 0x8eac668)
	void SetIdleDetectionMovementDistance(enum EFortIdleDetectionState& IdleState, float& InMovementDistance); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameModePvE.SetIdleDetectionMinIdleTime (Underlying native function: SetIdleDetectionMinIdleTime 0x8eac668)
	void SetIdleDetectionMinIdleTime(enum EFortIdleDetectionState& IdleState, float& InMinIdleTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameModePvE.SetIdleDetectionMaxIdleTime (Underlying native function: SetIdleDetectionMaxIdleTime 0x8eac668)
	void SetIdleDetectionMaxIdleTime(enum EFortIdleDetectionState& IdleState, float& InMaxIdleTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameModePvE.RemoveAllowIdlePlayerLocation (Underlying native function: RemoveAllowIdlePlayerLocation 0x8eac448)
	void RemoveAllowIdlePlayerLocation(class AActor*& LocationActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameModePvE.HandleOnAircraftRegistered (Underlying native function: HandleOnAircraftRegistered 0x8eab188)
	void HandleOnAircraftRegistered(class AFortAircraft*& InAircraft); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameModePvE.AddAllowIdlePlayerLocation (Underlying native function: AddAllowIdlePlayerLocation 0x8ea87a8)
	void AddAllowIdlePlayerLocation(class AActor*& LocationActor, float& Radius); // (Final | Native | Public | BlueprintCallable)
};

