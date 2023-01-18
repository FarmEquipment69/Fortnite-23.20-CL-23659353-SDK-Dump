// Class /Script/FortniteGame.FortLootGroupWeightedRollingData
// Size: 0x90
class UFortLootGroupWeightedRollingData : public UDataAsset
{
	struct FScalableFloat MinGroupsToPick; // 0x30 (0x28)
	struct FScalableFloat MaxGroupsToPick; // 0x58 (0x28)
	struct TArray<struct FFortLootGroupWeightData> LootGroupWeightData; // 0x80 (0x10)
};

