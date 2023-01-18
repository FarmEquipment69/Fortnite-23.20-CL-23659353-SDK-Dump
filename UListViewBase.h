// Class /Script/UMG.ListViewBase
// Size: 0x260
class UListViewBase : public UWidget
{
	struct FMulticastInlineDelegate BPOnEntryGenerated; // 0x148 (0x10)
	unsigned char unreflected_158[0x10]; // 0x158 (0x10) 
	class UClass* EntryWidgetClass; // 0x168 (0x8)
	float WheelScrollMultiplier; // 0x170 (0x4)
	bool bEnableScrollAnimation; // 0x174 (0x1)
	bool AllowOverscroll; // 0x175 (0x1)
	bool bEnableRightClickScrolling; // 0x176 (0x1)
	bool bEnableFixedLineOffset; // 0x177 (0x1)
	float FixedLineScrollOffset; // 0x178 (0x4)
	bool bAllowDragging; // 0x17c (0x1)
	unsigned char unreflected_17d[0x3]; // 0x17d (0x3) 
	struct FMulticastInlineDelegate BPOnEntryReleased; // 0x180 (0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x190 (0x88)
	unsigned char padding_218[0x48]; // 0x218 (0x48)

	/* Functions */

	// Function /Script/UMG.ListViewBase.SetWheelScrollMultiplier (Underlying native function: SetWheelScrollMultiplier 0x9b129d0)
	void SetWheelScrollMultiplier(float& NewWheelScrollMultiplier); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ListViewBase.SetScrollOffset (Underlying native function: SetScrollOffset 0x159719c)
	void SetScrollOffset(float& InScrollOffset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ListViewBase.SetScrollBarVisibility (Underlying native function: SetScrollBarVisibility 0x248d058)
	void SetScrollBarVisibility(enum ESlateVisibility& InVisibility); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ListViewBase.ScrollToTop (Underlying native function: ScrollToTop 0x9b0c674)
	void ScrollToTop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ListViewBase.ScrollToBottom (Underlying native function: ScrollToBottom 0x9b0c638)
	void ScrollToBottom(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ListViewBase.RequestRefresh (Underlying native function: RequestRefresh 0x9b0c548)
	void RequestRefresh(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ListViewBase.RegenerateAllEntries (Underlying native function: RegenerateAllEntries 0x9b0c160)
	void RegenerateAllEntries(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ListViewBase.GetScrollOffset (Underlying native function: GetScrollOffset 0x9b0b060)
	float GetScrollOffset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ListViewBase.GetDisplayedEntryWidgets (Underlying native function: GetDisplayedEntryWidgets 0x9b0a8b4)
	struct TArray<class UUserWidget*> GetDisplayedEntryWidgets(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

