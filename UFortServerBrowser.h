// Class /Script/FortniteUI.FortServerBrowser
// Size: 0x460
class UFortServerBrowser : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x10]; // 0x3a8 (0x10) 
	struct TArray<class UFortServerBrowserActionData*> SupportedActions; // 0x3b8 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortServerBrowserActionData>> ExcludedSupportedActions; // 0x3c8 (0x10)
	struct TWeakObjectPtr<class UFortServerBrowserActionData> DefaultSelectedAction; // 0x3d8 (0x28)
	class UFortServerBrowserListView* ListViewServerBrowser; // 0x400 (0x8)
	struct FDataTableRowHandle NavigateLeftInputAction; // 0x408 (0x10)
	struct FDataTableRowHandle NavigateRightInputAction; // 0x418 (0x10)
	unsigned char unreflected_428[0x10]; // 0x428 (0x10) 
	class UCommonButtonLegacy* ButtonCancel; // 0x438 (0x8)
	class UCommonButtonLegacy* ButtonClose; // 0x440 (0x8)
	unsigned char padding_448[0x18]; // 0x448 (0x18)
};

