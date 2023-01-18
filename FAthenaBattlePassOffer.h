// ScriptStruct /Script/FortniteGame.AthenaBattlePassOffer
// Size: 0xd0
struct FAthenaBattlePassOffer
{
	struct FString OfferId; // 0x0 (0x10)
	struct FAthenaRewardItemReference RewardItem; // 0x10 (0xa0)
	struct TArray<struct FAthenaRewardItemReference> ChainedRewardItemList; // 0xb0 (0x10)
	struct FDataTableRowHandle OfferPriceRowHandle; // 0xc0 (0x10)
};

