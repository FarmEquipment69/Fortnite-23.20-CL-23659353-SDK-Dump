// Class /Script/UMG.TileView
// Size: 0xbb0
class UTileView : public UListView
{
	float EntryHeight; // 0xb90 (0x4)
	float EntryWidth; // 0xb94 (0x4)
	enum EListItemAlignment TileAlignment; // 0xb98 (0x1)
	bool bWrapHorizontalNavigation; // 0xb99 (0x1)
	unsigned char padding_b9a[0x16]; // 0xb9a (0x16)

	/* Functions */

	// Function /Script/UMG.TileView.SetEntryWidth (Underlying native function: SetEntryWidth 0x9b0dd78)
	void SetEntryWidth(float& NewWidth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.TileView.SetEntryHeight (Underlying native function: SetEntryHeight 0x9b0dcf4)
	void SetEntryHeight(float& NewHeight); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.TileView.GetEntryWidth (Underlying native function: GetEntryWidth 0x9b0a9ec)
	float GetEntryWidth(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.TileView.GetEntryHeight (Underlying native function: GetEntryHeight 0x9b0a9d4)
	float GetEntryHeight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

