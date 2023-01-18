// Class /Script/FortniteGame.FortHelpItem
// Size: 0x150
class UFortHelpItem : public UDataAsset
{
	enum EFortHelpItemType ItemType; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	struct FName ItemId; // 0x34 (0x4)
	struct FText HeaderName; // 0x38 (0x18)
	struct FText BodyText; // 0x50 (0x18)
	unsigned char unreflected_68[0x8]; // 0x68 (0x8) 
	struct FFortHelpAdditionalContent AdditionalContent; // 0x70 (0xe0)

	/* Functions */

	// Function /Script/FortniteGame.FortHelpItem.GetSubItems (Underlying native function: GetSubItems 0x71f807c)
	struct TArray<class UFortHelpItem*> GetSubItems(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHelpItem.GetItemWithID (Underlying native function: GetItemWithID 0x8a325e8)
	class UFortHelpItem* GetItemWithID(struct FName& ItemID); // (Native | Public | BlueprintCallable)
};

