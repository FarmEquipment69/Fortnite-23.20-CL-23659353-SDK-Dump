// Class /Script/FortniteUI.FortUINavigationManager
// Size: 0x160
class UFortUINavigationManager : public UUINavigationManager
{
	unsigned char unreflected_48[0x10]; // 0x48 (0x10) 
	struct FMulticastInlineDelegate OnFeatureNavigateOp; // 0x58 (0x10)
	unsigned char unreflected_68[0x10]; // 0x68 (0x10) 
	struct FMulticastInlineDelegate OnSquadSlotNavigateRequest; // 0x78 (0x10)
	unsigned char unreflected_88[0x40]; // 0x88 (0x40) 
	struct FMulticastInlineDelegate OnPopContentStackOp; // 0xc8 (0x10)
	struct FMulticastInlineDelegate OnSquadNavigationOp; // 0xd8 (0x10)
	unsigned char unreflected_e8[0x50]; // 0xe8 (0x50) 
	struct TArray<struct FFortUINavigationRequest> NavigationRequests; // 0x138 (0x10)
	class UUserWidget* HiddenCursorWidget; // 0x148 (0x8)
	class UUserWidget* VirtualCursorWidget; // 0x150 (0x8)
	unsigned char padding_158[0x8]; // 0x158 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortUINavigationManager.TryGetPendingNavigationOp (Underlying native function: TryGetPendingNavigationOp 0xa727a90)
	bool TryGetPendingNavigationOp(struct FFortUINavigationOperation& NavigationOp); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortUINavigationManager.SetScrollWidget (Underlying native function: SetScrollWidget 0xa727238)
	void SetScrollWidget(class UWidget*& Widget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUINavigationManager.PushItemManagementScreen (Underlying native function: PushItemManagementScreen 0xa726220)
	void PushItemManagementScreen(enum EFortFrontendInventoryFilter& ItemManagementFilter, class UFortItem*& ItemToSelect, bool& bShowAutoMulch); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUINavigationManager.PushItemInspectionScreen (Underlying native function: PushItemInspectionScreen 0xa725ff8)
	void PushItemInspectionScreen(class UFortItem*& ItemToInspect, enum EFortItemInspectionMode& Mode, class UFortItemTileView*& CycleTileView, bool& bReadOnly, bool& bAllowFavoriting, bool& bIsTemporaryItem, bool& bAllowRarityUpgrading); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUINavigationManager.PushHeroLoadoutScreen (Underlying native function: PushHeroLoadoutScreen 0xa725f78)
	void PushHeroLoadoutScreen(class UFortCampaignHeroLoadoutItem*& HeroLoadout); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUINavigationManager.NavigateToItemManagementScreen (Underlying native function: NavigateToItemManagementScreen 0xa7254f8)
	void NavigateToItemManagementScreen(enum EFortFrontendInventoryFilter& Filter); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUINavigationManager.NavigateToFeature (Underlying native function: NavigateToFeature 0xa725478)
	void NavigateToFeature(enum EFortUIFeature& Feature); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUINavigationManager.HasPendingNavigationOp (Underlying native function: HasPendingNavigationOp 0xa724e44)
	bool HasPendingNavigationOp(enum EFortUINavigationOp& NavigationOp); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUINavigationManager.CompletePendingNavigationOp (Underlying native function: CompletePendingNavigationOp 0xa723448)
	void CompletePendingNavigationOp(enum EFortUINavigationOp& NavigationOp); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUINavigationManager.CenterWidget (Underlying native function: CenterWidget 0xa723320)
	void CenterWidget(class UWidget*& Widget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUINavigationManager.CanNavigateToQuestObjective (Underlying native function: CanNavigateToQuestObjective 0xa7231ec)
	bool CanNavigateToQuestObjective(class UFortQuestItem*& QuestItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUINavigationManager.AttemptPlayQuest (Underlying native function: AttemptPlayQuest 0xa723120)
	bool AttemptPlayQuest(class UFortQuestItem*& Quest); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUINavigationManager.AttemptMatchmakeForQuest (Underlying native function: AttemptMatchmakeForQuest 0xa723050)
	bool AttemptMatchmakeForQuest(class UFortQuestItem*& Quest, bool& OutContentNotDownloaded); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

