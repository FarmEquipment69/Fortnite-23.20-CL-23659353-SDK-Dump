// Class /Script/FortniteUI.ContentBrowserFilterEntry
// Size: 0x1480
class UContentBrowserFilterEntry : public UCommonButtonLegacy
{
	struct FMulticastInlineDelegate OnFilterEnabled; // 0x1430 (0x10)
	struct FMulticastInlineDelegate OnFilterSelected; // 0x1440 (0x10)
	class UCommonTextBlock* TextBlockFilterName; // 0x1450 (0x8)
	bool bFilterActive; // 0x1458 (0x1)
	unsigned char unreflected_1459[0x7]; // 0x1459 (0x7) 
	class UContentBrowserTag* tag; // 0x1460 (0x8)
	struct FText ButtonText; // 0x1468 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.ContentBrowserFilterEntry.UpdateCheckMarkState (Has no native function)
	void UpdateCheckMarkState(bool& bIsChecked); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.ContentBrowserFilterEntry.UpdateButtonText (Underlying native function: UpdateButtonText 0xa6244cc)
	void UpdateButtonText(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.ContentBrowserFilterEntry.SetIsFilterActive (Underlying native function: SetIsFilterActive 0xa6222f4)
	void SetIsFilterActive(bool& bInFilterActive); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.ContentBrowserFilterEntry.IsFilterActive (Underlying native function: IsFilterActive 0xa620bb0)
	bool IsFilterActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

