// Class /Script/FortniteUI.FortPickerData
// Size: 0xf0
class UFortPickerData : public UDataAsset
{
	struct TArray<struct FBuildingCategoryOptionData> BuildingCategories; // 0x30 (0x10)
	struct TArray<struct FBuildingOptionData> WallOptions; // 0x40 (0x10)
	struct TArray<struct FBuildingOptionData> FloorOptions; // 0x50 (0x10)
	struct TArray<struct FBuildingOptionData> StairOptions; // 0x60 (0x10)
	struct TArray<struct FBuildingOptionData> RoofOptions; // 0x70 (0x10)
	struct TArray<struct FItemCategoryOptionData> TrapCategories; // 0x80 (0x10)
	struct TArray<struct FItemCategoryOptionData> WeaponCategories; // 0x90 (0x10)
	struct TArray<struct FRadialOptionData> SocialCategories; // 0xa0 (0x10)
	struct TArray<struct FChatOptionData> ChatOptions; // 0xb0 (0x10)
	struct TArray<class UAthenaQuickChatBank*> SquadChatOptionBanks; // 0xc0 (0x10)
	struct TArray<struct FMapNoteOptionData> MapNoteOptions; // 0xd0 (0x10)
	struct TArray<struct FEmoteOptionData> EmoteOptions; // 0xe0 (0x10)
};

