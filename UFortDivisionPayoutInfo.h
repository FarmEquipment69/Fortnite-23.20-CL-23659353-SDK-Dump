// Class /Script/FortniteUI.FortDivisionPayoutInfo
// Size: 0x758
class UFortDivisionPayoutInfo : public UFortShowdownDivisionEventView
{
	class UDynamicEntryBox* EntryBoxesDivisionRanksButtons; // 0x718 (0x8)
	class UCommonButtonLegacy* ButtonLeft; // 0x720 (0x8)
	class UCommonButtonLegacy* ButtonRight; // 0x728 (0x8)
	class UDynamicEntryBox* EntryBoxPayouts; // 0x730 (0x8)
	class UCommonTextBlock* TextLeague; // 0x738 (0x8)
	class UCommonTextBlock* TextDivsionRank; // 0x740 (0x8)
	class UScrollBox* ScrollBoxPayouts; // 0x748 (0x8)
	unsigned char padding_750[0x8]; // 0x750 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortDivisionPayoutInfo.OnDivisionChanged (Has no native function)
	void OnDivisionChanged(int& NewDivision); // (Event | Protected | BlueprintEvent)
};

