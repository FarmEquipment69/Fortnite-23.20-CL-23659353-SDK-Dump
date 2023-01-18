// Class /Script/FortniteUI.FortSocialPanel
// Size: 0x538
class UFortSocialPanel : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x8]; // 0x518 (0x8) 
	class UFortSocialPanelView_UserLists* PanelViewUserLists; // 0x520 (0x8)
	struct FDataTableRowHandle CloseInputAction; // 0x528 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortSocialPanel.OnClosePanelInternal (Underlying native function: OnClosePanelInternal 0xa775bd4)
	void OnClosePanelInternal(bool& PassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortSocialPanel.IsAnySlideOutMenuOpen (Underlying native function: IsAnySlideOutMenuOpen 0xa775b80)
	bool IsAnySlideOutMenuOpen(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSocialPanel.HandleSocialPanelClose (Underlying native function: HandleSocialPanelClose 0xa775b44)
	void HandleSocialPanelClose(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortSocialPanel.ClosePanel (Has no native function)
	void ClosePanel(); // (Event | Protected | BlueprintEvent)
};

