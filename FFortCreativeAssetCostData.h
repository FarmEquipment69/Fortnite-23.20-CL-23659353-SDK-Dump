// ScriptStruct /Script/FortniteGame.FortCreativeAssetCostData
// Size: 0x1a0
struct FFortCreativeAssetCostData
{
	struct TMap<struct FString, struct FCreativeActorMetaData> MetaDataMap; // 0x0 (0x50)
	struct TMap<struct FName, struct FCreativeActorMetaData> NameMetaDataMap; // 0x50 (0x50)
	struct FFortActorMetadata ActorMetadata; // 0xa0 (0xb0)
	struct FFortActorMetadataTargetCosts TargetCosts; // 0x150 (0x50)
};

