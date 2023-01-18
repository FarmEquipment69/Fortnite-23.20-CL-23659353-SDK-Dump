// ScriptStruct /Script/FortniteGame.SeasonCurrencyMcpData
// Size: 0x88
struct FSeasonCurrencyMcpData
{
	struct TWeakObjectPtr<class UFortPersistentResourceItemDefinition> CurrencyDefinition; // 0x0 (0x28)
	struct FCurveTableRowHandle CurrencySeasonTotalCollectionLimit; // 0x28 (0x10)
	struct TWeakObjectPtr<class UFortGiftBoxItemDefinition> GiftBoxDefinition; // 0x38 (0x28)
	struct TWeakObjectPtr<class UFortGiftBoxItemDefinition> FriendChestGiftBoxDefinition; // 0x60 (0x28)
};

