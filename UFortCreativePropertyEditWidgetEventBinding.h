// Class /Script/FortniteUI.FortCreativePropertyEditWidgetEventBinding
// Size: 0x578
class UFortCreativePropertyEditWidgetEventBinding : public UCreativePropertyEditWidgetUserOptionBase
{
	class UCommonTextBlock* TextPropertyName; // 0x548 (0x8)
	class UCommonButtonBase* ButtonAddBinding; // 0x550 (0x8)
	class UClass* EntryClass; // 0x558 (0x8)
	struct FDataTableRowHandle ShowHideBindingsInputAction; // 0x560 (0x10)
	unsigned char padding_570[0x8]; // 0x570 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativePropertyEditWidgetEventBinding.OnShowBindings (Has no native function)
	void OnShowBindings(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditWidgetEventBinding.OnPropertyNameSet (Has no native function)
	void OnPropertyNameSet(struct FText& PropertyName); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditWidgetEventBinding.OnNumEventReferencesChanged (Has no native function)
	void OnNumEventReferencesChanged(int& NumEventReferences); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditWidgetEventBinding.OnNumAvailableDevicesChanged (Has no native function)
	void OnNumAvailableDevicesChanged(int& NumAvailableDevices); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditWidgetEventBinding.OnIsAnySubItemSelectedChanged (Has no native function)
	void OnIsAnySubItemSelectedChanged(bool& bIsAnySubItemSelected); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditWidgetEventBinding.OnHideBindings (Has no native function)
	void OnHideBindings(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditWidgetEventBinding.IsShowingBindings (Underlying native function: IsShowingBindings 0xa692e64)
	bool IsShowingBindings(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativePropertyEditWidgetEventBinding.GetEventReferenceType (Underlying native function: GetEventReferenceType 0xa6919b8)
	enum EFortGameplayEventReferenceType GetEventReferenceType(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)
};

