// ScriptStruct /Script/CorruptionGameplayCodeRuntime.WarEffortFundingMetadata
// Size: 0x30
struct FWarEffortFundingMetadata : FMeshMetaDataStruct
{
	struct FWarEffortIndexedFundingData IndexedFundingData; // 0x0 (0x20)
	struct TArray<struct FWarEffortFundingChoiceData> FundingChoices; // 0x20 (0x10)
};

