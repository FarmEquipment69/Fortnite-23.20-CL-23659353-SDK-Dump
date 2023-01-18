// Class /Script/FortniteAI.FortAthenaAIBotNameDataAsset
// Size: 0x90
class UFortAthenaAIBotNameDataAsset : public UDataAsset
{
	struct TWeakObjectPtr<class UDataTable> DefaultNameDataTable; // 0x30 (0x28)
	struct TWeakObjectPtr<class UDataTable> ChinaNameDataTable; // 0x58 (0x28)
	struct TArray<struct FFortAthenaAIBotNameRegionData> RegionData; // 0x80 (0x10)
};

