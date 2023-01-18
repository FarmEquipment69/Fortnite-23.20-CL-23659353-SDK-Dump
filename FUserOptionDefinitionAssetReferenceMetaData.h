// ScriptStruct /Script/FortniteGame.UserOptionDefinitionAssetReferenceMetaData
// Size: 0x78
struct FUserOptionDefinitionAssetReferenceMetaData : FUserOptionDefinitionMetaData
{
	struct FUserOptionAssetTypeMetaData AssetType; // 0x8 (0x30)
	struct FUserOptionAssetReference DefaultValue; // 0x38 (0x28)
	class UDataTable* ValuesDataTable; // 0x60 (0x8)
	struct TArray<struct FUserOptionDefinitionAssetValueEntry> ValueEntries; // 0x68 (0x10)
};

