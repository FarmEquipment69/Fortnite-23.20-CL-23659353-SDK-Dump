// Class /Script/FortniteUI.FortSidebarLfgState2Widget
// Size: 0x3d0
class UFortSidebarLfgState2Widget : public UCommonActivatableWidget
{
	class UCommonButtonBase* Button; // 0x3a8 (0x8)
	unsigned char padding_3b0[0x20]; // 0x3b0 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.FortSidebarLfgState2Widget.OnStateChanged (Has no native function)
	void OnStateChanged(enum ELfgState& NewLfgState, enum ESlateVisibility& BodyVisibility, struct FText& StateText, struct FText& StateButton); // (Event | Protected | HasOutParms | BlueprintEvent)
};

