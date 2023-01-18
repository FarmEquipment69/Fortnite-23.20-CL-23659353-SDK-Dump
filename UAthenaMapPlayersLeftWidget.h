// Class /Script/FortniteUI.AthenaMapPlayersLeftWidget
// Size: 0x300
class UAthenaMapPlayersLeftWidget : public UFortHUDElementWidget
{
	class UCommonTextBlock* TextPlayersTeamsLeft; // 0x2d0 (0x8)
	struct FText PlayersTeamsLeftTextFormat; // 0x2d8 (0x18)
	unsigned char padding_2f0[0x10]; // 0x2f0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaMapPlayersLeftWidget.OnMaxSquadSizeSet (Has no native function)
	void OnMaxSquadSizeSet(int& MaxSquadSize); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMapPlayersLeftWidget.HandleTeamsLeftChanged (Underlying native function: HandleTeamsLeftChanged 0xa5a3750)
	void HandleTeamsLeftChanged(int& NumTeamsLeft); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaMapPlayersLeftWidget.HandlePlayersLeftChanged (Underlying native function: HandlePlayersLeftChanged 0xa5a3284)
	void HandlePlayersLeftChanged(int& NumPlayersLeft); // (Final | Native | Private)
};

