// Class /Script/FortniteUI.FortArenaLoadingScreen
// Size: 0x2a8
class UFortArenaLoadingScreen : public UCommonUserWidget
{
	class URichTextBlock* TextLeagueName; // 0x290 (0x8)
	class UCommonTextBlock* TextDivision; // 0x298 (0x8)
	class UFortLazyImage* ImageCurrentDivision; // 0x2a0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortArenaLoadingScreen.UpdateBackground (Has no native function)
	void UpdateBackground(int& DivisionRank); // (Event | Protected | BlueprintCallable | BlueprintEvent)
};

