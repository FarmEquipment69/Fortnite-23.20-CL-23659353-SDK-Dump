// ScriptStruct /Script/FortniteGame.BattlePassOfferData
// Size: 0x58
struct FBattlePassOfferData
{
	struct FString OfferId; // 0x0 (0x10)
	struct TArray<struct FItemQuantity> RewardItemQuantity; // 0x10 (0x10)
	bool bIsFreePassReward; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	int Cost; // 0x24 (0x4)
	struct FString CurrencyId; // 0x28 (0x10)
	int SectionOffersNeededForUnlock; // 0x38 (0x4)
	int CategoryOffersNeededForUnlock; // 0x3c (0x4)
	struct TArray<struct FString> RequiredItemsForUnlock; // 0x40 (0x10)
	int DaysAfterSeasonStartUnlockTime; // 0x50 (0x4)
	unsigned char padding_54[0x4]; // 0x54 (0x4)
};

