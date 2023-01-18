// Class /Script/FortniteUI.FortCreativePropertyEditorFilter
// Size: 0x330
class UFortCreativePropertyEditorFilter : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnSelectedFilterChanged; // 0x290 (0x10)
	class UCommonTextBlock* TextFilterName; // 0x2a0 (0x8)
	class UDynamicEntryBox* EntryBoxFilterButtons; // 0x2a8 (0x8)
	class UCommonButtonBase* ButtonPreviousFilter; // 0x2b0 (0x8)
	class UCommonButtonBase* ButtonNextFilter; // 0x2b8 (0x8)
	class UClass* TabButtonStyle; // 0x2c0 (0x8)
	struct TArray<struct FFortTabListRegistrationInfo> TabInfos; // 0x2c8 (0x10)
	class UCommonButtonGroupBase* FilterButtonGroup; // 0x2d8 (0x8)
	struct TMap<class UCommonButtonBase*, struct FFortTabListRegistrationInfo> FilterButtonToTabInfoMap; // 0x2e0 (0x50)

	/* Functions */

	// DelegateFunction /Script/FortniteUI.FortCreativePropertyEditorFilter.OnSelectedFilterChanged__DelegateSignature (Has no native function)
	void OnSelectedFilterChangedDelegateSignature(struct FName& SelectedFilterId, struct FName& PreviouslySelectedFilterId); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortCreativePropertyEditorFilter.OnFilterButtonCreated (Has no native function)
	void OnFilterButtonCreated(class UCommonButtonBase*& FilterButton, struct FFortTabListRegistrationInfo& TabInfo); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditorFilter.GetSelectedFilterButtonId (Underlying native function: GetSelectedFilterButtonId 0xa691b38)
	struct FName GetSelectedFilterButtonId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

