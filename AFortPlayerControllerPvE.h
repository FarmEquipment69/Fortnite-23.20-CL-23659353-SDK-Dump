// Class /Script/FortniteGame.FortPlayerControllerPvE
// Size: 0x3ae0
class AFortPlayerControllerPvE : public AFortPlayerControllerZone
{
	unsigned char unreflected_3950[0x4]; // 0x3950 (0x4) 
	bool bForceAutoSlotWeaponsAtStart; // 0x3954 (0x1)
	bool bRecycleBrokenWeapons; // 0x3955 (0x1)
	unsigned char unreflected_3956[0x22]; // 0x3956 (0x22) 
	class ABuildingSMActor* AutoImproveBuildingActor; // 0x3978 (0x8)
	unsigned char unreflected_3980[0x8]; // 0x3980 (0x8) 
	struct FQuickBar CachedPrimaryQuickBarRecord; // 0x3988 (0x90)
	struct FQuickBar CachedSecondaryQuickBarRecord; // 0x3a18 (0x90)
	struct TArray<class UFortGadgetItemDefinition*> HeroLoadoutGadgets; // 0x3aa8 (0x10)
	struct TArray<class UFortGadgetItemDefinition*> HeroAbilityGadgets; // 0x3ab8 (0x10)
	class AFortClientAnnouncement_Basic* IdleWarningAnnouncement; // 0x3ac8 (0x8)
	struct FTimerHandle* IdleWarningUpdateTimerHandle; // 0x3ad0 (0x8)
	float IdleKickEstimatedTime; // 0x3ad8 (0x4)
	unsigned char padding_3adc[0x4]; // 0x3adc (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerControllerPvE.ServerUpdateQuickBarRecordsCache (Underlying native function: ServerUpdateQuickBarRecordsCache 0x8f0a10c)
	void ServerUpdateQuickBarRecordsCache(struct FQuickBar& PrimaryQuickBarRecord, struct FQuickBar& SecondaryQuickBarRecord); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.ServerTriggerSetupTeleportCameraEvent (Underlying native function: ServerTriggerSetupTeleportCameraEvent 0x8f0a0c0)
	void ServerTriggerSetupTeleportCameraEvent(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.ServerFriendPlayerAdded (Underlying native function: ServerFriendPlayerAdded 0x8f09efc)
	void ServerFriendPlayerAdded(class AFortPlayerStatePvE*& FriendPS, bool& bIsEpicFriend); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.ResetPlayerDeathReportForForcePlayerRestart (Underlying native function: ResetPlayerDeathReportForForcePlayerRestart 0x8f09edc)
	void ResetPlayerDeathReportForForcePlayerRestart(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.RequestIdleDetectionState (Underlying native function: RequestIdleDetectionState 0x8f09d58)
	void RequestIdleDetectionState(enum EFortIdleDetectionState& NewIdleDetectionState, struct FString& Reason); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.RefreshHarvestingWeapon (Underlying native function: RefreshHarvestingWeapon 0x26daa0c)
	void RefreshHarvestingWeapon(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.PreparePlayerForDisplay (Underlying native function: PreparePlayerForDisplay 0x8f09d40)
	void PreparePlayerForDisplay(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.HandleQuickBarChanged (Underlying native function: HandleQuickBarChanged 0x8f09c0c)
	void HandleQuickBarChanged(enum EFortQuickBars& QuickBarType, struct TArray<int>& Slots); // (Final | 0x00000002 | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.ClientUpdateQuickBarRecordsCache (Underlying native function: ClientUpdateQuickBarRecordsCache 0x8f09a74)
	void ClientUpdateQuickBarRecordsCache(struct FQuickBar& PrimaryQuickBarRecord, struct FQuickBar& SecondaryQuickBarRecord); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.ClientShowIdleWarning (Underlying native function: ClientShowIdleWarning 0x8f099ec)
	void ClientShowIdleWarning(float& TimeUntilKick); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.ClientHideIdleWarning (Underlying native function: ClientHideIdleWarning 0x8f099d4)
	void ClientHideIdleWarning(); // (Net | NetReliable | Native | Event | Protected | NetClient)
};

