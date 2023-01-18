// Class /Script/FortniteGame.AthenaSeasonItemEntryBase
// Size: 0x178
class UAthenaSeasonItemEntryBase : public UObject
{
	bool bTreatOwnedAsClaimed; // 0x28 (0x1)
	enum EPageItemTileSize TileSize; // 0x29 (0x1)
	unsigned char unreflected_2a[0x6]; // 0x2a (0x6) 
	struct TWeakObjectPtr<class UObject> CustomButtonIcon; // 0x30 (0x28)
	bool bIsPrmTracked; // 0x58 (0x1)
	unsigned char unreflected_59[0x7]; // 0x59 (0x7) 
	struct FString PRMOwnedParamName; // 0x60 (0x10)
	struct TWeakObjectPtr<class UObject> DelayedFakeButtonIcon; // 0x70 (0x28)
	struct FAthenaRewardItemReference DelayedFakeRewardItem; // 0x98 (0xa0)
	enum EBackgroundIntensityLevel BackgroundIntensityLevel; // 0x138 (0x1)
	bool bHide3DPreview; // 0x139 (0x1)
	unsigned char unreflected_13a[0x1e]; // 0x13a (0x1e) 
	struct TArray<struct FRewardPreviewInfo> BattlePassPreviewInfoList; // 0x158 (0x10)
	struct TArray<struct FRewardPreviewInfo> DelayedBattlePassPreviewInfoList; // 0x168 (0x10)
};

