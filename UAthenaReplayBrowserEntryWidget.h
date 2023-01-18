// Class /Script/FortniteUI.AthenaReplayBrowserEntryWidget
// Size: 0x1470
class UAthenaReplayBrowserEntryWidget : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	class UImage* DownloadIcon; // 0x1438 (0x8)
	class UCommonTextBlock* TextName; // 0x1440 (0x8)
	class UCommonTextBlock* TextDate; // 0x1448 (0x8)
	class UCommonTextBlock* TextLength; // 0x1450 (0x8)
	class UCommonTextBlock* TextRank; // 0x1458 (0x8)
	class UCommonTextBlock* TextEliminations; // 0x1460 (0x8)
	unsigned char padding_1468[0x8]; // 0x1468 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaReplayBrowserEntryWidget.BP_HandleReplayStateSet (Has no native function)
	void BPHandleReplayStateSet(bool& bSaved, bool& Bold, bool& bCorrupt); // (Event | Protected | BlueprintEvent)
};

