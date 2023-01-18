// Class /Script/FortniteUI.FortEventLevelData
// Size: 0x98
class UFortEventLevelData : public UDataAsset
{
	struct FString EventLevelStoreFrontName; // 0x30 (0x10)
	struct TWeakObjectPtr<class UAthenaRewardEventGraph> EventLevelRewards; // 0x40 (0x28)
	class UClass* CinematicMovieWidget; // 0x68 (0x8)
	class UFortStreamMediaSource* ElectraMediaSource; // 0x70 (0x8)
	class UMediaPlayer* StreamedMediaPlayer; // 0x78 (0x8)
	struct FName CinematicVideoName; // 0x80 (0x4)
	unsigned char unreflected_84[0x4]; // 0x84 (0x4) 
	struct FDataTableRowHandle InteractionHandle; // 0x88 (0x10)
};

