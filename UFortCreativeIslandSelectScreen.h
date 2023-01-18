// Class /Script/FortniteUI.FortCreativeIslandSelectScreen
// Size: 0x2a0
class UFortCreativeIslandSelectScreen : public UUserWidget
{
	class UFortCreativeTabGroup* TabGroup; // 0x268 (0x8)
	class UCommonActivatableWidgetSwitcher* WidgetSwitcher; // 0x270 (0x8)
	class UCommonButtonBase* ButtonCloseMobile; // 0x278 (0x8)
	class UCommonButtonBase* ButtonCancel; // 0x280 (0x8)
	unsigned char padding_288[0x18]; // 0x288 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeIslandSelectScreen.HandleTabChanged (Underlying native function: HandleTabChanged 0x87b08d8)
	void HandleTabChanged(int& TabIndex); // (Native | Protected)
};

