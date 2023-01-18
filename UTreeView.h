// Class /Script/UMG.TreeView
// Size: 0xbf0
class UTreeView : public UListView
{
	unsigned char unreflected_b90[0x10]; // 0xb90 (0x10) 
	struct FDelegate BPOnGetItemChildren; // 0xba0 (0xc)
	unsigned char unreflected_bac[0x4]; // 0xbac (0x4) 
	struct FMulticastInlineDelegate BPOnItemExpansionChanged; // 0xbb0 (0x10)
	unsigned char padding_bc0[0x30]; // 0xbc0 (0x30)

	/* Functions */

	// Function /Script/UMG.TreeView.SetItemExpansion (Underlying native function: SetItemExpansion 0x9b0f0b4)
	void SetItemExpansion(class UObject*& Item, bool& bExpandItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.TreeView.ExpandAll (Underlying native function: ExpandAll 0x9b0a308)
	void ExpandAll(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.TreeView.CollapseAll (Underlying native function: CollapseAll 0x9b0a2cc)
	void CollapseAll(); // (Final | Native | Public | BlueprintCallable)
};

