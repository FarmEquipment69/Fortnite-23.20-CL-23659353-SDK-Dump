// Class /Script/FortniteGame.FortMcpProfileCollectionBook
// Size: 0x180
class UFortMcpProfileCollectionBook : public UFortMcpProfile
{

	/* Functions */

	// Function /Script/FortniteGame.FortMcpProfileCollectionBook.UpgradeSlottedItem (Has no native function)
	void UpgradeSlottedItem(struct FString& TargetItemId, int& DesiredLevel, struct FClientUrlContext& Context); // (Final | Net | NetReliable | NetRequest | Native | Event | Private | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCollectionBook.PromoteItem (Has no native function)
	void PromoteItem(struct FString& TargetItemId, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCollectionBook.ConvertSlottedItem (Has no native function)
	void ConvertSlottedItem(struct FString& TargetItemId, int& ConversionIndex, struct FClientUrlContext& Context); // (Final | Net | NetReliable | NetRequest | Native | Event | Private | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCollectionBook.ClaimCollectionBookPageRewards (Has no native function)
	void ClaimCollectionBookPageRewards(struct FString& PageTemplateId, struct FString& SectionId, int& SelectedRewardIndex, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)
};

