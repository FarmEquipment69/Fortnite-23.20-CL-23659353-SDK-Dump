// Class /Script/FortniteUI.FortItemReceivedHeaderBase
// Size: 0x2b8
class UFortItemReceivedHeaderBase : public UCommonUserWidget
{
	class UCommonLazyImage* ImageIcon; // 0x290 (0x8)
	class UCommonTextBlock* TextViolator; // 0x298 (0x8)
	class UCommonTextBlock* TextTitle; // 0x2a0 (0x8)
	class UCommonTextBlock* TextSubtitle; // 0x2a8 (0x8)
	class UCommonTextBlock* TextBody; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortItemReceivedHeaderBase.SetHeaderInformation (Underlying native function: SetHeaderInformation 0x1bb0658)
	void SetHeaderInformation(struct FFortItemHeaderInformation& HeaderInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

