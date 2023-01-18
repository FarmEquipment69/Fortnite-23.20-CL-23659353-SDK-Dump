// Class /Script/FortniteUI.FortItemNotification
// Size: 0x568
class UFortItemNotification : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x18]; // 0x518 (0x18) 
	struct TArray<struct FFortReceivedItemLootInfo> ItemDefs; // 0x530 (0x10)
	float BodyTextWrapWidth; // 0x540 (0x4)
	unsigned char unreflected_544[0x4]; // 0x544 (0x4) 
	class UCommonButtonLegacy* ButtonClose; // 0x548 (0x8)
	class UFortItemReceivedHeaderBase* ItemPresentationGenericRewardHeader; // 0x550 (0x8)
	class UFortItemPresentationEntry* ItemPresentationEntry; // 0x558 (0x8)
	class UFortItemInfoPresentationWidget* ItemInfoPresentationWidget; // 0x560 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortItemNotification.OnUpdateScreenInformation (Underlying native function: OnUpdateScreenInformation 0xa7e7724)
	void OnUpdateScreenInformation(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemNotification.OnSetButtonText (Has no native function)
	void OnSetButtonText(bool& bCanCloseWidget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemNotification.OnNextItemDisplay (Has no native function)
	void OnNextItemDisplay(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemNotification.OnCloseScreen (Has no native function)
	void OnCloseScreen(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemNotification.CloseScreen (Underlying native function: CloseScreen 0xa7e4934)
	void CloseScreen(); // (Final | Native | Public | BlueprintCallable)
};

