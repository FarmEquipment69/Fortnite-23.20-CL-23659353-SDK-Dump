// Class /Script/FortniteUI.AthenaSquadListBase
// Size: 0x488
class UAthenaSquadListBase : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0xd8]; // 0x2d0 (0xd8) 
	enum ESlateVisibility LocalPlayerVisibility; // 0x3a8 (0x1)
	unsigned char unreflected_3a9[0xf]; // 0x3a9 (0xf) 
	class UAthenaPlayerInfoBase* LocalPlayerInfo; // 0x3b8 (0x8)
	class UDynamicEntryBox* EntryBoxSquadList; // 0x3c0 (0x8)
	class UAthenaPlayerViewModel* CachedPlayerVM; // 0x3c8 (0x8)
	struct TSet<enum EUIExtensionSlot> RelevantExtensionSlots; // 0x3d0 (0x50)
	unsigned char unreflected_420[0x18]; // 0x420 (0x18) 
	struct TSet<class UUserWidget*> ActiveExtensionWidgets; // 0x438 (0x50)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSquadListBase.UpdateSquadFromMinigameOptionChange (Underlying native function: UpdateSquadFromMinigameOptionChange 0xa4b138c)
	void UpdateSquadFromMinigameOptionChange(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSquadListBase.UpdateIsTeamMiniGameOnMinigameVolumeChanged (Underlying native function: UpdateIsTeamMiniGameOnMinigameVolumeChanged 0xa4b0ee8)
	void UpdateIsTeamMiniGameOnMinigameVolumeChanged(class AFortVolume*& Volume); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSquadListBase.UpdateIsTeamMiniGameOnGameStateChanged (Underlying native function: UpdateIsTeamMiniGameOnGameStateChanged 0xa4b0e24)
	void UpdateIsTeamMiniGameOnGameStateChanged(class AFortMinigame*& Minigame, enum EFortMinigameState& MinigameState); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSquadListBase.OnExtensionWidgetRemoved (Has no native function)
	void OnExtensionWidgetRemoved(class UUserWidget*& Widget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSquadListBase.OnExtensionWidgetAdded (Has no native function)
	void OnExtensionWidgetAdded(enum EUIExtensionSlot& SlotType, class UUserWidget*& Widget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSquadListBase.HandleSquadMemberDisconnected (Has no native function)
	void HandleSquadMemberDisconnected(class AFortPlayerStateAthena*& Player); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSquadListBase.HandlePlayerUniqueIdReplicated (Underlying native function: HandlePlayerUniqueIdReplicated 0xa4afb6c)
	void HandlePlayerUniqueIdReplicated(struct FUniqueNetIdRepl& UniqueId); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaSquadListBase.HandlePlayerExitVolume (Underlying native function: HandlePlayerExitVolume 0xa4afa94)
	void HandlePlayerExitVolume(class APlayerState*& Client, class AFortVolume*& Volume); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSquadListBase.HandlePlayerEnterVolume (Underlying native function: HandlePlayerEnterVolume 0xa4af9d0)
	void HandlePlayerEnterVolume(class APlayerState*& Client, class AFortVolume*& Volume); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSquadListBase.HandleGameMemberChanged (Underlying native function: HandleGameMemberChanged 0xa4af5d4)
	void HandleGameMemberChanged(unsigned char& InSquadId, unsigned char& InTeamIndex, class AFortPlayerStateAthena*& ChangedPS); // (Final | Native | Private)
};

