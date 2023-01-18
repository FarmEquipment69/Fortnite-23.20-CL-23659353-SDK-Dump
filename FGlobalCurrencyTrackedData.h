// ScriptStruct /Script/FortniteGame.GlobalCurrencyTrackedData
// Size: 0x28
struct FGlobalCurrencyTrackedData
{
	struct TArray<struct FGlobalCurrencyTransactionData> TransactionData; // 0x0 (0x10)
	struct TArray<struct FGlobalCurrencyPhaseEndData> CurrencyDataPerPhase; // 0x10 (0x10)
	int TotalCurrencyEarnedInMatch; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

