// Class /Script/FortniteUI.AthenaFullScreenQuestMapPanel
// Size: 0x508
class UAthenaFullScreenQuestMapPanel : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x18]; // 0x3a8 (0x18) 
	struct FAthenaMapScreenContainerTabInfo MapTabInfo; // 0x3c0 (0x50)
	float SafeZoneOpacityInterpolationInDuration; // 0x410 (0x4)
	float SafeZoneOpacityInterpolationOutDuration; // 0x414 (0x4)
	class UClass* CategoryButtonType; // 0x418 (0x8)
	float CategoryButtonPadding; // 0x420 (0x4)
	struct FGameplayTag DefaultCategoryTag; // 0x424 (0x4)
	bool bResetSelectionWhenParentDeactivates; // 0x428 (0x1)
	unsigned char unreflected_429[0x7]; // 0x429 (0x7) 
	class UAthenaFullScreenMapControlsWidget* ControlsPanel; // 0x430 (0x8)
	class UGridPanel* GridPanelCategories; // 0x438 (0x8)
	class UAthenaFullScreenQuestMapContent* QuestMapContent; // 0x440 (0x8)
	class UAthenaScrollBox* ScrollBoxContentRoot; // 0x448 (0x8)
	class UCommonButtonBase* ButtonPrevious; // 0x450 (0x8)
	class UCommonButtonBase* ButtonNext; // 0x458 (0x8)
	unsigned char unreflected_460[0x8]; // 0x460 (0x8) 
	class UCommonButtonGroupBase* CategoryButtonGroup; // 0x468 (0x8)
	struct TMap<struct FGuid, class UAthenaFullScreenMapQuestCategoryButton*> CategoryInstanceMap; // 0x470 (0x50)
	unsigned char unreflected_4c0[0x31]; // 0x4c0 (0x31) 
	bool bEnableSnapScrolling; // 0x4f1 (0x1)
	unsigned char unreflected_4f2[0x2]; // 0x4f2 (0x2) 
	float SnapScrollingThreshold; // 0x4f4 (0x4)
	unsigned char padding_4f8[0x10]; // 0x4f8 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaFullScreenQuestMapPanel.HandleScrollCompleted (Underlying native function: HandleScrollCompleted 0xa5a33d4)
	void HandleScrollCompleted(float& ScrollAmount); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaFullScreenQuestMapPanel.HandleRequestPrevious (Underlying native function: HandleRequestPrevious 0xa5a33ac)
	void HandleRequestPrevious(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaFullScreenQuestMapPanel.HandleQuestMapNavigateLeft (Underlying native function: HandleQuestMapNavigateLeft 0xa5a3308)
	class UWidget* HandleQuestMapNavigateLeft(enum EUINavigation& InNavigation); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaFullScreenQuestMapPanel.HandleCategoryNavigateRight (Underlying native function: HandleCategoryNavigateRight 0xa5a2e28)
	class UWidget* HandleCategoryNavigateRight(enum EUINavigation& InNavigation); // (Final | Native | Private)
};

