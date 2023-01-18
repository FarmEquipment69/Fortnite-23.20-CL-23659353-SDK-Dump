// Class /Script/FortniteGame.FortCardPackItem
// Size: 0x130
class UFortCardPackItem : public UFortAccountItem
{
	struct TArray<struct FMcpLootEntry> Options; // 0x108 (0x10)
	struct FString packsource; // 0x118 (0x10)
	bool isloottieroverridden; // 0x128 (0x1)
	unsigned char unreflected_129[0x3]; // 0x129 (0x3) 
	int overrideloottier; // 0x12c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortCardPackItem.IsChoicePack (Underlying native function: IsChoicePack 0x8efd12c)
	bool IsChoicePack(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCardPackItem.GetChoices (Underlying native function: GetChoices 0x8efb758)
	void GetChoices(struct TArray<class UFortAccountItemDefinition*>& Choices); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCardPackItem.GetChoiceItems (Underlying native function: GetChoiceItems 0x8efb6bc)
	void GetChoiceItems(struct TArray<class UFortItem*>& ChoiceAttributes); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCardPackItem.CanStoreOpen (Underlying native function: CanStoreOpen 0x8ef9cb4)
	bool CanStoreOpen(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

