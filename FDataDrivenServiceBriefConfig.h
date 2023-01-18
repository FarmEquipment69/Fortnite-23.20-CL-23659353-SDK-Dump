// ScriptStruct /Script/FortniteGame.DataDrivenServiceBriefConfig
// Size: 0xe0
struct FDataDrivenServiceBriefConfig
{
	struct FText TitleText; // 0x0 (0x18)
	struct FText DescriptionText; // 0x18 (0x18)
	struct FText TransactionText; // 0x30 (0x18)
	struct FText StockText; // 0x48 (0x18)
	struct TMap<struct FName, struct FText> CannotUseReasonParameterToDisplayText; // 0x60 (0x50)
	struct FString CannotUseReasonParameterKey; // 0xb0 (0x10)
	struct FString CostParameterKey; // 0xc0 (0x10)
	struct FString StockCountParameterKey; // 0xd0 (0x10)
};

