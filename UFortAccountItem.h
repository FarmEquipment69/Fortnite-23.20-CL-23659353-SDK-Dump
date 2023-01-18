// Class /Script/FortniteGame.FortAccountItem
// Size: 0x108
class UFortAccountItem : public UFortPersistableItem
{
	int Level; // 0xb8 (0x4)
	int Xp; // 0xbc (0x4)
	int itemseen; // 0xc0 (0x4)
	int favorite; // 0xc4 (0x4)
	int archived; // 0xc8 (0x4)
	int maxlevelbonus; // 0xcc (0x4)
	struct FString inventoryoverflowdate; // 0xd0 (0x10)
	struct FDateTime* creationtime; // 0xe0 (0x8)
	bool bIsPendingBeingMarkedAsSeen; // 0xe8 (0x1)
	bool bNeedsResolveMarkedAsSeen; // 0xe9 (0x1)
	unsigned char padding_ea[0x1e]; // 0xea (0x1e)

	/* Functions */

	// Function /Script/FortniteGame.FortAccountItem.MarkItemAsSeenBP (Underlying native function: MarkItemAsSeenBP 0x8a47458)
	void MarkItemAsSeenBP(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAccountItem.IsRefundable (Underlying native function: IsRefundable 0x8a47430)
	bool IsRefundable(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAccountItem.IsFavorite (Underlying native function: IsFavorite 0x8a47394)
	bool IsFavorite(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAccountItem.IsArchived (Underlying native function: IsArchived 0x8a4736c)
	bool IsArchived(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAccountItem.HasBeenSeenLocally (Underlying native function: HasBeenSeenLocally 0x8a4734c)
	bool HasBeenSeenLocally(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAccountItem.GetRefundResults (Underlying native function: GetRefundResults 0x8a46c80)
	struct TArray<struct FFortItemQuantityPair> GetRefundResults(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAccountItem.GetRecyclingRefunds (Underlying native function: GetRecyclingRefunds 0x8a46c0c)
	struct TArray<struct FFortItemQuantityPair> GetRecyclingRefunds(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAccountItem.GetCreationTime (Underlying native function: GetCreationTime 0x8a464d0)
	struct FDateTime* GetCreationTime(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

