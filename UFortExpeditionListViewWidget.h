// Class /Script/SaveTheWorldUI.FortExpeditionListViewWidget
// Size: 0x2c0
class UFortExpeditionListViewWidget : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnExpeditionSelected; // 0x290 (0x10)
	struct FMulticastInlineDelegate OnExpeditionListViewRefreshed; // 0x2a0 (0x10)
	class UCommonListView* ExpeditionListView; // 0x2b0 (0x8)
	struct FName CurrentTabNameId; // 0x2b8 (0x4)
	enum EFortExpeditionListSort SortType; // 0x2bc (0x1)
	unsigned char padding_2bd[0x3]; // 0x2bd (0x3)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortExpeditionListViewWidget.SetExpeditionListSortType (Underlying native function: SetExpeditionListSortType 0x757384c)
	void SetExpeditionListSortType(enum EFortExpeditionListSort& InSortType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionListViewWidget.GetExpeditionListSortName (Underlying native function: GetExpeditionListSortName 0x756d9e4)
	struct FText GetExpeditionListSortName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

