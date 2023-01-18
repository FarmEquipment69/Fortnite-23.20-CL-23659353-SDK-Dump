// Class /Script/FortniteConversationUI.FortDuelBrief
// Size: 0x2d0
class UFortDuelBrief : public UFortItemTransactionBrief
{
	struct FText TextTemplate; // 0x2a8 (0x18)
	class UCommonRichTextBlock* TextObjective; // 0x2c0 (0x8)
	class UCommonTileView* TileView; // 0x2c8 (0x8)

	/* Functions */

	// Function /Script/FortniteConversationUI.FortDuelBrief.DisplayLootItems (Has no native function)
	void DisplayLootItems(struct TArray<class UFortItem*>& Items); // (Event | Protected | HasOutParms | BlueprintEvent)
};

