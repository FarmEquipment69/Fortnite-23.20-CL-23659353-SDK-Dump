// Class /Script/FortniteUI.AthenaAvailableSquadSlotsListBase
// Size: 0x2f0
class UAthenaAvailableSquadSlotsListBase : public UFortHUDElementWidget
{
	int MaxNumberOfAvailableSquadSlots; // 0x2d0 (0x4)
	bool bAlwaysDisplayTopEntryAsDetailed; // 0x2d4 (0x1)
	unsigned char unreflected_2d5[0xb]; // 0x2d5 (0xb) 
	class UDynamicEntryBox* EntryBoxAvailableSlotsList; // 0x2e0 (0x8)
	class UAthenaPlayerViewModel* CachedPlayerVM; // 0x2e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaAvailableSquadSlotsListBase.UpdateSquadFromMinigameOptionChange (Underlying native function: UpdateSquadFromMinigameOptionChange 0xa4720b4)
	void UpdateSquadFromMinigameOptionChange(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaAvailableSquadSlotsListBase.UpdateIsTeamMiniGameOnMinigameVolumeChanged (Underlying native function: UpdateIsTeamMiniGameOnMinigameVolumeChanged 0xa471c10)
	void UpdateIsTeamMiniGameOnMinigameVolumeChanged(class AFortVolume*& Volume); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaAvailableSquadSlotsListBase.UpdateIsTeamMiniGameOnGameStateChanged (Underlying native function: UpdateIsTeamMiniGameOnGameStateChanged 0xa471b4c)
	void UpdateIsTeamMiniGameOnGameStateChanged(class AFortMinigame*& Minigame, enum EFortMinigameState& MinigameState); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaAvailableSquadSlotsListBase.HandleSquadMemberDisconnected (Has no native function)
	void HandleSquadMemberDisconnected(class AFortPlayerStateAthena*& Player); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaAvailableSquadSlotsListBase.HandlePlayerUniqueIdReplicated (Underlying native function: HandlePlayerUniqueIdReplicated 0xa470364)
	void HandlePlayerUniqueIdReplicated(struct FUniqueNetIdRepl& UniqueId); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaAvailableSquadSlotsListBase.HandlePlayerExitVolume (Underlying native function: HandlePlayerExitVolume 0xa4702a0)
	void HandlePlayerExitVolume(class APlayerState*& ClientPlayerState, class AFortVolume*& Volume); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaAvailableSquadSlotsListBase.HandlePlayerEnterVolume (Underlying native function: HandlePlayerEnterVolume 0xa4701dc)
	void HandlePlayerEnterVolume(class APlayerState*& ClientPlayerState, class AFortVolume*& Volume); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaAvailableSquadSlotsListBase.HandleGameMemberChanged (Underlying native function: HandleGameMemberChanged 0xa46ffc0)
	void HandleGameMemberChanged(unsigned char& InSquadId, unsigned char& InTeamIndex, class AFortPlayerStateAthena*& ChangedPS); // (Final | Native | Private)
};

