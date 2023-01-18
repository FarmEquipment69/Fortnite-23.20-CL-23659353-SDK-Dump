// Class /Script/FortniteGame.FortCreativeTagsManager
// Size: 0xc8
class UFortCreativeTagsManager : public UObject
{
	class UDataTable* CreativeTagsTable; // 0x28 (0x8)
	class UDataTable* CreativeTagCategoriesTable; // 0x30 (0x8)
	unsigned char padding_38[0x90]; // 0x38 (0x90)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeTagsManager.GetUserVisibleTagsForItem (Underlying native function: GetUserVisibleTagsForItem 0x87d0ecc)
	static struct TArray<struct FText> GetUserVisibleTagsForItem(class UFortItemDefinition*& ItemDefinition); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)
};

