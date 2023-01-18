// WidgetBlueprintGeneratedClass /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C
// Size: 0x2b1
class UItemReceivedHeaderSubWidgetBase_C : public UItemReceivedHeaderBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x280 (0x8)
	class UFortGiftBoxItem* GiftBoxItemBP; // 0x288 (0x8)
	struct FString FromUserNameBP; // 0x290 (0x10)
	struct TArray<struct FFortReceivedItemLootInfo> ItemDefs; // 0x2a0 (0x10)
	bool bSelfGift; // 0x2b0 (0x1)

	/* Functions */

	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.SetBlueprintGiftBoxItem (Has no native function)
	void SetBlueprintGiftBoxItem(class UFortGiftBoxItem*& GiftBox, struct FString& FromUser, struct TArray<struct FFortReceivedItemLootInfo>& ItemDefs, bool& bSelfGift); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.InitFromGiftBoxItem_BP (Has no native function)
	void InitFromGiftBoxItemBP(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase (Has no native function)
	void ExecuteUbergraphItemReceivedHeaderSubWidgetBase(int& EntryPoint); // (Final | 0x00008000)
};

