// Class /Script/EpicCMSUIFramework.EpicCMSScreenBase
// Size: 0x570
class UEpicCMSScreenBase : public UCommonActivatablePanelLegacy
{
	struct FString TileSetFieldName; // 0x4e0 (0x10)
	struct TWeakObjectPtr<class UDataTable> TileTypeToTileClassDataTable; // 0x4f0 (0x28)
	struct TWeakObjectPtr<class UClass> LayoutErrorClass; // 0x518 (0x28)
	struct TWeakObjectPtr<class UDataTable> LayoutTypeToLayoutClassDataTable; // 0x540 (0x28)
	unsigned char padding_568[0x8]; // 0x568 (0x8)
};

