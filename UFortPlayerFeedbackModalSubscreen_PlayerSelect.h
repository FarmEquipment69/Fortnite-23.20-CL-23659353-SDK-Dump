// Class /Script/FortniteUI.FortPlayerFeedbackModalSubscreen_PlayerSelect
// Size: 0x418
class UFortPlayerFeedbackModalSubscreen_PlayerSelect : public UFortPlayerFeedbackModalSubscreenBase
{
	unsigned char unreflected_3d8[0x28]; // 0x3d8 (0x28) 
	class UCommonButtonGroupBase* PlayerButtons; // 0x400 (0x8)
	class UDynamicEntryBox* ButtonsPlayers; // 0x408 (0x8)
	class UCommonTextBlock* TextNoPlayers; // 0x410 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPlayerFeedbackModalSubscreen_PlayerSelect.OnCreatedPlayerList (Has no native function)
	void OnCreatedPlayerList(bool& bHasPlayers); // (Event | Protected | BlueprintEvent)
};

