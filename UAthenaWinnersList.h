// Class /Script/FortniteUI.AthenaWinnersList
// Size: 0x298
class UAthenaWinnersList : public UCommonUserWidget
{
	bool bCanDisplayMultiWinners; // 0x290 (0x1)
	unsigned char padding_291[0x7]; // 0x291 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.AthenaWinnersList.OnWinnersAnnounced (Underlying native function: OnWinnersAnnounced 0xa53214c)
	void OnWinnersAnnounced(struct FAthenaWinnerInfo& WinnerInfo); // (Native | Event | Public | HasOutParms | BlueprintEvent)
};

