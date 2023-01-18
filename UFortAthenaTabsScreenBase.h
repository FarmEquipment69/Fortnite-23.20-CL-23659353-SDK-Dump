// Class /Script/FortniteUI.FortAthenaTabsScreenBase
// Size: 0x3e8
class UFortAthenaTabsScreenBase : public UCommonActivatableWidget
{
	struct TArray<enum EFortUIFeature> TabsUIFeature; // 0x3a8 (0x10)
	class UCommonWidgetSwitcherLegacy* TabContentSwitcher; // 0x3b8 (0x8)
	class UFortMtxStoreRootBase* StoreMainRoot; // 0x3c0 (0x8)
	struct FGameplayTag SeasonTrailerAutoplayEndingCamera; // 0x3c8 (0x4)
	unsigned char padding_3cc[0x1c]; // 0x3cc (0x1c)
};

