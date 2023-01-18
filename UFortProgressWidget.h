// Class /Script/FortniteUI.FortProgressWidget
// Size: 0x2a8
class UFortProgressWidget : public UCommonUserWidget
{
	class UCommonTextBlock* TextTitle; // 0x290 (0x8)
	class UCommonTextBlock* TextDescription; // 0x298 (0x8)
	class UImage* ImageMainIcon; // 0x2a0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortProgressWidget.SetTitle (Underlying native function: SetTitle 0xa73dc18)
	void SetTitle(struct FText& Title); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortProgressWidget.SetIcon (Underlying native function: SetIcon 0xa73d994)
	void SetIcon(struct FSlateBrush& IconBrush); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortProgressWidget.SetDescription (Underlying native function: SetDescription 0xa73d8f8)
	void SetDescription(struct FText& Description); // (Final | Native | Public | BlueprintCallable)
};

