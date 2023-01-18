// Class /Script/FortniteGame.FortAthenaMutator_RespawnAndSpectateSelect
// Size: 0x670
class AFortAthenaMutator_RespawnAndSpectateSelect : public AFortAthenaMutator_SpectateBeforeRespawn
{
	struct FScalableFloat bShouldBeActive; // 0x358 (0x28)
	struct FScalableFloat bShouldSetClientReadyOnRespawnPlayerFailSafe; // 0x380 (0x28)
	struct FScalableFloat bCanPlayerSelectRespawnTargetBeforeTheyCanRespawn; // 0x3a8 (0x28)
	struct FScalableFloat bAllowRespawnOnLivingTeammates; // 0x3d0 (0x28)
	struct FScalableFloat bAllowRespawnOnLivingSquadmates; // 0x3f8 (0x28)
	struct FScalableFloat bCreateDefaultSpawnLocation; // 0x420 (0x28)
	struct FScalableFloat bShowDefaultSpawnLocation; // 0x448 (0x28)
	class UClass* DefaultSpawnLocationCameraClass; // 0x470 (0x8)
	struct FText DefaultRespawnLabelText; // 0x478 (0x18)
	class UTexture2D* DefaultRespawnTexture; // 0x490 (0x8)
	struct FScalableFloat RandomRespawnRadius; // 0x498 (0x28)
	struct FScalableFloat RespawnBaseRotationOffset; // 0x4c0 (0x28)
	struct FScalableFloat RandomRespawnRotationDegrees; // 0x4e8 (0x28)
	struct FScalableFloat RespawnHeightOffset; // 0x510 (0x28)
	struct FScalableFloat MinRespawnHeightAboveGround; // 0x538 (0x28)
	struct FScalableFloat ForceRespawnTime; // 0x560 (0x28)
	struct FScalableFloat DeadTargetAvailabilityTime; // 0x588 (0x28)
	int DisplayPriorityTeammate; // 0x5b0 (0x4)
	unsigned char unreflected_5b4[0x4]; // 0x5b4 (0x4) 
	class UClass* CameraModeOverrideForNonPlayers; // 0x5b8 (0x8)
	struct TArray<struct FRespawnAndSpectateTargetData> RespawnTargetDataArray; // 0x5c0 (0x10)
	bool bAreAllRespawnTargetsAvailableToAllPlayersCheat; // 0x5d0 (0x1)
	unsigned char unreflected_5d1[0x2f]; // 0x5d1 (0x2f) 
	class UObject* ManagerObject; // 0x600 (0x8)
	unsigned char unreflected_608[0x8]; // 0x608 (0x8) 
	struct FMulticastInlineDelegate RespawnAndSpectateSelectSetVisibility; // 0x610 (0x10)
	struct FMulticastInlineDelegate RespawnAndSpectateSelectSetSpectateId; // 0x620 (0x10)
	struct FMulticastInlineDelegate RespawnAndSpectateSelectAvailableOptionsChanged; // 0x630 (0x10)
	struct FMulticastInlineDelegate RespawnAndSpectateSelectPlayerRespawned; // 0x640 (0x10)
	struct FMulticastInlineDelegate RespawnAndSpectateSelectRespawnBecameAvailable; // 0x650 (0x10)
	unsigned char unreflected_660[0x8]; // 0x660 (0x8) 
	float ScreenFadeOutDeathCamTime; // 0x668 (0x4)
	float ScreenFadeInSpectateCamTime; // 0x66c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_RespawnAndSpectateSelect.OnSafezoneStateChanged (Underlying native function: OnSafezoneStateChanged 0x72ab98c)
	void OnSafezoneStateChanged(enum EFortSafeZoneState& InSafeZoneState); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_RespawnAndSpectateSelect.OnRep_RespawnTargetDataArray (Underlying native function: OnRep_RespawnTargetDataArray 0x84ee880)
	void OnRepRespawnTargetDataArray(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_RespawnAndSpectateSelect.OnRep_ManagerObject (Underlying native function: OnRep_ManagerObject 0x84ee794)
	void OnRepManagerObject(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_RespawnAndSpectateSelect.GetCanPlayerSelectRespawnTargetBeforeTheyCanRespawn (Underlying native function: GetCanPlayerSelectRespawnTargetBeforeTheyCanRespawn 0x84ed8b8)
	bool GetCanPlayerSelectRespawnTargetBeforeTheyCanRespawn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

