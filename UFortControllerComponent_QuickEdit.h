// Class /Script/FortniteGame.FortControllerComponent_QuickEdit
// Size: 0x108
class UFortControllerComponent_QuickEdit : public UFortControllerComponent
{
	struct TArray<class UBuildingEditModeMetadata_Wall*> QuickEditWallPatterns; // 0xa0 (0x10)
	struct TArray<class UBuildingEditModeMetadata_Floor*> QuickEditFloorPatterns; // 0xb0 (0x10)
	struct TArray<class UBuildingEditModeMetadata_Roof*> QuickEditRoofPatterns; // 0xc0 (0x10)
	struct TArray<class UBuildingEditModeMetadata_Stair*> QuickEditStairsPatterns; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnBuildingQuickEditOptionChanged; // 0xe0 (0x10)
	bool bEnabled; // 0xf0 (0x1)
	unsigned char padding_f1[0x17]; // 0xf1 (0x17)
};

