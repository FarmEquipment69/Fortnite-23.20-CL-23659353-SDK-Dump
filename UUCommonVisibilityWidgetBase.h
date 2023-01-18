// Class /Script/CommonUI.UCommonVisibilityWidgetBase
// Size: 0x350
class UUCommonVisibilityWidgetBase : public UCommonBorder
{
	struct TMap<struct FName, bool> VisibilityControls; // 0x2f0 (0x50)
	bool bShowForGamepad; // 0x340 (0x1)
	bool bShowForMouseAndKeyboard; // 0x341 (0x1)
	bool bShowForTouch; // 0x342 (0x1)
	enum ESlateVisibility VisibleType; // 0x343 (0x1)
	enum ESlateVisibility HiddenType; // 0x344 (0x1)
	unsigned char padding_345[0xb]; // 0x345 (0xb)

	/* Functions */

	// Function /Script/CommonUI.UCommonVisibilityWidgetBase.GetRegisteredPlatforms (Underlying native function: GetRegisteredPlatforms 0x6a4b740)
	static struct TArray<struct FName> GetRegisteredPlatforms(); // (Final | Native | Static | Protected)
};

