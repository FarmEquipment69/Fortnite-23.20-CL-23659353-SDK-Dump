// Class /Script/FortniteUI.FortCreativeGameInfoMapTab
// Size: 0x550
class UFortCreativeGameInfoMapTab : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x10]; // 0x3a8 (0x10) 
	struct FAthenaMapScreenContainerTabInfo MapTabInfo; // 0x3b8 (0x50)
	class UFortCreativeMiniGameInfo* MinigameInfoHeader; // 0x408 (0x8)
	class UCommonActivatableWidgetSwitcher* SwitcherMainContent; // 0x410 (0x8)
	class UFortIslandDescriptionWidget* IslandDescriptionGameInfoContent; // 0x418 (0x8)
	class UWidget* WidgetLikeAndFavoriteContent; // 0x420 (0x8)
	class UWidget* WidgetMiscellaneousContent; // 0x428 (0x8)
	class UCommonButtonBase* ButtonExit; // 0x430 (0x8)
	class UFortExpressYourSupportFavoriteButton* ButtonFavorite; // 0x438 (0x8)
	class UFortExpressYourSupportThumbsUpButton* ButtonLike; // 0x440 (0x8)
	class UCommonButtonBase* ButtonRespawn; // 0x448 (0x8)
	class UCommonButtonBase* ButtonClearSavedData; // 0x450 (0x8)
	class UCommonButtonBase* ButtonGameInfoSubTab; // 0x458 (0x8)
	class UCommonButtonBase* ButtonLikeAndFavoriteSubTab; // 0x460 (0x8)
	class UCommonButtonBase* ButtonMiscellaneousSubTab; // 0x468 (0x8)
	class UCommonButtonGroupBase* ButtonGroupSubTabs; // 0x470 (0x8)
	class UClass* ConfirmationWindowClass; // 0x478 (0x8)
	struct FText RespawnConfirmationTitle; // 0x480 (0x18)
	struct FText RespawnConfirmationDescription; // 0x498 (0x18)
	struct FText RespawnConfirmButtonName; // 0x4b0 (0x18)
	struct FText ClearSavedDataConfirmationTitle; // 0x4c8 (0x18)
	struct FText ClearSavedDataConfirmationDescription; // 0x4e0 (0x18)
	struct FText ClearSavedDataConfirmButtonName; // 0x4f8 (0x18)
	struct FText ClearSavedDataPostConfirmationText; // 0x510 (0x18)
	struct TWeakObjectPtr<class UTexture2D> ClearSavedDataConfirmationIcon; // 0x528 (0x28)
};

