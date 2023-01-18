// Class /Script/FortniteUI.FortCreativePropertyEditWidgetEventBindingEntry
// Size: 0x458
class UFortCreativePropertyEditWidgetEventBindingEntry : public UFortCreativePropertyListEntryBase
{
	class UFortCreativePropertyEditWidgetEventBindingButton* ButtonSelectDevice; // 0x410 (0x8)
	class UFortCreativePropertyEditWidgetEventBindingButton* ButtonSelectOption; // 0x418 (0x8)
	struct FDataTableRowHandle SelectDeviceAdditionalAction; // 0x420 (0x10)
	struct FDataTableRowHandle SelectOptionAdditionalAction; // 0x430 (0x10)
	class UWidget* LastFocusedButton; // 0x440 (0x8)
	unsigned char padding_448[0x10]; // 0x448 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativePropertyEditWidgetEventBindingEntry.OnOptionDisplayNameSet (Has no native function)
	void OnOptionDisplayNameSet(struct FText& OptionDisplayName); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditWidgetEventBindingEntry.OnIsParentItemSelectedChanged (Has no native function)
	void OnIsParentItemSelectedChanged(bool& bIsParentItemSelected); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditWidgetEventBindingEntry.OnEntrySelectedStateChanged (Has no native function)
	void OnEntrySelectedStateChanged(bool& bIsSelected); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditWidgetEventBindingEntry.OnDeviceDisplayNameSet (Has no native function)
	void OnDeviceDisplayNameSet(struct FText& DeviceDisplayName); // (Event | Protected | HasOutParms | BlueprintEvent)
};

