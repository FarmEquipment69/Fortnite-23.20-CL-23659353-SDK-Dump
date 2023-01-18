// Class /Script/SaveTheWorldUI.FortUIStateWidget_STWFrontend
// Size: 0x430
class UFortUIStateWidget_STWFrontend : public UFortUIStateWidgetBase
{
	unsigned char unreflected_3c0[0x8]; // 0x3c0 (0x8) 
	class UTopBar_STW* TopBarSTW; // 0x3c8 (0x8)
	class UCommonUserWidget* BottomBarSTW; // 0x3d0 (0x8)
	class UFortActivatableChatWidget* ChatWidgetSTW; // 0x3d8 (0x8)
	struct TWeakObjectPtr<class UFortCampaignTabsScreenBase> MainTabsScreen; // 0x3e0 (0x8)
	class UClass* PlayerBannedScreenClass; // 0x3e8 (0x8)
	struct TArray<class UClass*> ScriptedActionsToRegister; // 0x3f0 (0x10)
	struct TArray<enum EFortStoreState> DeferredSquadAutoSlottingStoreStates; // 0x400 (0x10)
	unsigned char padding_410[0x20]; // 0x410 (0x20)
};

