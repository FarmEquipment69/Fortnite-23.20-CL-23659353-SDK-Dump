// Class /Script/GameplayAbilities.GameplayTagReponseTable
// Size: 0x1e8
class UGameplayTagReponseTable : public UDataAsset
{
	struct TArray<struct FGameplayTagResponseTableEntry> Entries; // 0x30 (0x10)
	unsigned char padding_40[0x1a8]; // 0x40 (0x1a8)

	/* Functions */

	// Function /Script/GameplayAbilities.GameplayTagReponseTable.TagResponseEvent (Underlying native function: TagResponseEvent 0x6b20460)
	void TagResponseEvent(struct FGameplayTag& tag, int& NewCount, class UAbilitySystemComponent*& ASC, int& idx); // (Final | Native | Protected)
};

