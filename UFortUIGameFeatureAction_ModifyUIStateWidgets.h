// Class /Script/FortniteUI.FortUIGameFeatureAction_ModifyUIStateWidgets
// Size: 0xc8
class UFortUIGameFeatureAction_ModifyUIStateWidgets : public UFortUIGameFeatureAction
{
	struct TMap<enum EFortUIState, struct FStateWidgetEntry> StateWidgetClassOverrides; // 0x28 (0x50)
	struct TMap<struct FGameplayTag, struct FTagStateWidgetEntry> StateWidgetClassesByTag; // 0x78 (0x50)
};

