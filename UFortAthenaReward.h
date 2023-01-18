// Class /Script/FortniteUI.FortAthenaReward
// Size: 0x1490
class UFortAthenaReward : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	class UFortItemDefinition* SecondaryItemDefToRepresent; // 0x1438 (0x8)
	class UFortItemDefinition* RepresentedItemDefinition; // 0x1440 (0x8)
	class UFortCosmeticItemCard* ItemCard; // 0x1448 (0x8)
	class UWidget* WidgetClaimedImage; // 0x1450 (0x8)
	class UWidget* WidgetLockedImage; // 0x1458 (0x8)
	class UWidget* WidgetUnearnedTintOverlay; // 0x1460 (0x8)
	class UWidget* WidgetOwnedBorder; // 0x1468 (0x8)
	unsigned char padding_1470[0x20]; // 0x1470 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.FortAthenaReward.UpdateRewardState (Underlying native function: UpdateRewardState 0xa73e288)
	void UpdateRewardState(enum EFortAthenaRewardState& StateToSetup, bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaReward.SetViewOnHovered (Underlying native function: SetViewOnHovered 0xa73dce8)
	void SetViewOnHovered(bool& bShouldViewOnHovered); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaReward.SetupRewardItem (Underlying native function: SetupRewardItem 0xa73ddc8)
	void SetupRewardItem(class UFortItemDefinition*& ItemDefToRepresent, int& Quantity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaReward.OnStateUpdated (Has no native function)
	void OnStateUpdated(bool& bClaimed); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaReward.OnRepresentedItemSet (Has no native function)
	void OnRepresentedItemSet(class UFortItem*& RepresentedItem); // (Event | Protected | BlueprintEvent)
};

