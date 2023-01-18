// Class /Script/FortniteGame.FortFeedbackBank
// Size: 0xf0
class UFortFeedbackBank : public UPrimaryDataAsset
{
	struct TArray<struct FFortFeedbackActionBankDefined> BankDefinedFeedbackEvents; // 0x30 (0x10)
	struct TArray<struct FFortFeedbackAction> FeedbackEvents; // 0x40 (0x10)
	unsigned char padding_50[0xa0]; // 0x50 (0xa0)
};

