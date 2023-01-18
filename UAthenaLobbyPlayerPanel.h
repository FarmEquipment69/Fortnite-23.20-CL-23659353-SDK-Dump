// Class /Script/FortniteUI.AthenaLobbyPlayerPanel
// Size: 0x5b0
class UAthenaLobbyPlayerPanel : public UFortLobbyPlayerPanel
{
	class UCommonButtonBase* ButtonMute; // 0x580 (0x8)
	class UCommonButtonBase* ButtonViewProfile; // 0x588 (0x8)
	class UTextBlock* TextBattlePassTier; // 0x590 (0x8)
	class UFortCosmeticLoadoutSelector* LoadoutSelector; // 0x598 (0x8)
	unsigned char padding_5a0[0x10]; // 0x5a0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaLobbyPlayerPanel.OnIsMutedUpdated (Has no native function)
	void OnIsMutedUpdated(bool& bIsMuted); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLobbyPlayerPanel.OnHasBattlePassUpdated (Has no native function)
	void OnHasBattlePassUpdated(bool& bHasBattlePass); // (Event | Protected | BlueprintEvent)
};

