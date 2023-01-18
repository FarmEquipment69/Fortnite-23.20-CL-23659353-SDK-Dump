// Class /Script/FortniteGame.FortAthenaMutator_CreativeTutorial
// Size: 0x5d0
class AFortAthenaMutator_CreativeTutorial : public AFortAthenaMutator
{
	struct FAthenaGameMessageData GameMsgLandOnHub; // 0x330 (0x50)
	struct FAthenaGameMessageData GameMsgLandOnIsland; // 0x380 (0x50)
	struct FAthenaGameMessageData GameMsgInventory; // 0x3d0 (0x50)
	struct FAthenaGameMessageData GameMsgIslandMenu; // 0x420 (0x50)
	struct FAthenaGameMessageData GameMsgBackToHub; // 0x470 (0x50)
	struct FAthenaGameMessageData GameMsgExploreFriendsIslands; // 0x4c0 (0x50)
	struct FAthenaGameMessageData GameMsgPermissions; // 0x510 (0x50)
	struct FAthenaGameMessageData ServerShutdownInitiated; // 0x560 (0x50)
	bool bHasSeenInventoryTutorial; // 0x5b0 (0x1)
	bool bHasSeenReturnToCreativeHubTutorial; // 0x5b1 (0x1)
	bool bHasSeenMyIslandTutorial; // 0x5b2 (0x1)
	bool bHasSeenWelcomeTutorial; // 0x5b3 (0x1)
	bool bHasSeenPermissionsTutorial; // 0x5b4 (0x1)
	bool bCanShowMyIslandMessage; // 0x5b5 (0x1)
	unsigned char unreflected_5b6[0x12]; // 0x5b6 (0x12) 
	float ServerShutdownTimeRemaining; // 0x5c8 (0x4)
	unsigned char padding_5cc[0x4]; // 0x5cc (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeTutorial.StartTrackingEndSkydiving (Underlying native function: StartTrackingEndSkydiving 0x84a9898)
	void StartTrackingEndSkydiving(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeTutorial.OnVolumeManagerReplicated (Underlying native function: OnVolumeManagerReplicated 0x84a8ea0)
	void OnVolumeManagerReplicated(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeTutorial.OnPlayerJoinedCreativeIsland (Underlying native function: OnPlayerJoinedCreativeIsland 0x84a89dc)
	void OnPlayerJoinedCreativeIsland(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeTutorial.OnPlayerCreativeVolumeChanged (Underlying native function: OnPlayerCreativeVolumeChanged 0x84a895c)
	void OnPlayerCreativeVolumeChanged(class AFortVolume*& Volume); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeTutorial.OnMutatorGameplayEvent (Underlying native function: OnMutatorGameplayEvent 0x84a8244)
	void OnMutatorGameplayEvent(int& EventId, int& EventParam1, int& EventParam2, int& EventParam3); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeTutorial.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x84a7db0)
	void OnGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeTutorial.OnEndSkydiving (Underlying native function: OnEndSkydiving 0x84a7c8c)
	void OnEndSkydiving(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeTutorial.OnActorEnteredVolume (Underlying native function: OnActorEnteredVolume 0x84a7710)
	void OnActorEnteredVolume(class APlayerState*& PS, class AFortVolume*& Volume); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeTutorial.DisplayBackToHubMessage (Underlying native function: DisplayBackToHubMessage 0x84a55c8)
	void DisplayBackToHubMessage(); // (Final | Native | Protected)
};

