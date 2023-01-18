// ScriptStruct /Script/FortniteGame.AccountIdAndScore
// Size: 0x20
struct FAccountIdAndScore
{
	struct FString AccountId; // 0x0 (0x10)
	int TotalScore; // 0x10 (0x4)
	int IndividualContribution; // 0x14 (0x4)
	bool bCriticalMatchBonus; // 0x18 (0x1)
	bool bIsLeecherExempt; // 0x19 (0x1)
	unsigned char padding_1a[0x6]; // 0x1a (0x6)
};

