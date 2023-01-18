// Class /Script/FortniteUI.FortCreativeIslandGeneration
// Size: 0x5c8
class UFortCreativeIslandGeneration : public UFortActivatablePanel
{
	class UDataRegistry* IslandTemplateDataTable; // 0x518 (0x8)
	struct TArray<class UFortCreativeRealEstatePlotItemDefinition*> FilteredIslandTemplateDefinitions; // 0x520 (0x10)
	class UCommonTileView* StartingIslandsTileView; // 0x530 (0x8)
	class UCommonTileView* TemplateIslandsTileView; // 0x538 (0x8)
	class UCommonButtonLegacy* AcceptButton; // 0x540 (0x8)
	class UCommonTextBlock* IslandTemplateNameText; // 0x548 (0x8)
	class UCommonTextBlock* IslandDescriptionText; // 0x550 (0x8)
	class UCommonTextBlock* PublishedIslandName; // 0x558 (0x8)
	class UCommonTextBlock* PublishedIslandCode; // 0x560 (0x8)
	class UCommonTextBlock* PublishedIslandAuthor; // 0x568 (0x8)
	class UCommonTextBlock* PublishedIslandBulletOne; // 0x570 (0x8)
	class UCommonTextBlock* PublishedIslandBulletTwo; // 0x578 (0x8)
	class UCommonTextBlock* PublishedIslandBulletThree; // 0x580 (0x8)
	class UCommonButtonGroupLegacy* TabButtonGroup; // 0x588 (0x8)
	struct FCachedIslandsGroup CachedTemplateIslands; // 0x590 (0x28)
	struct TArray<class UFortCreativeIslandLink*> IslandLinks; // 0x5b8 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeIslandGeneration.TemplateIslandsOnHoveredItemChanged (Underlying native function: TemplateIslandsOnHoveredItemChanged 0x70dc11c)
	void TemplateIslandsOnHoveredItemChanged(class UObject*& Item, bool& bIsHovered); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeIslandGeneration.TemplateIslandsOnCurrentItemSelectionChanged (Underlying native function: TemplateIslandsOnCurrentItemSelectionChanged 0xa6dc388)
	void TemplateIslandsOnCurrentItemSelectionChanged(class UObject*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeIslandGeneration.StartingIslandsOnHoveredItemChanged (Underlying native function: StartingIslandsOnHoveredItemChanged 0x70dc11c)
	void StartingIslandsOnHoveredItemChanged(class UObject*& Item, bool& bIsHovered); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeIslandGeneration.StartingIslandsOnCurrentItemSelectionChanged (Underlying native function: StartingIslandsOnCurrentItemSelectionChanged 0xa6dc27c)
	void StartingIslandsOnCurrentItemSelectionChanged(class UObject*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeIslandGeneration.SetupIslandTemplateData (Underlying native function: SetupIslandTemplateData 0xa6dbbd0)
	void SetupIslandTemplateData(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeIslandGeneration.OnSelectionUpdated (Has no native function)
	void OnSelectionUpdated(class UFortCreativeIslandTemplateButton*& CurrentSelection); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeIslandGeneration.OnIslandFilterComplete (Has no native function)
	void OnIslandFilterComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeIslandGeneration.HandleNoOptionsLoaded (Has no native function)
	void HandleNoOptionsLoaded(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeIslandGeneration.HandleCancelClicked (Underlying native function: HandleCancelClicked 0x7181fa8)
	void HandleCancelClicked(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeIslandGeneration.GetShowTemplateIslands (Underlying native function: GetShowTemplateIslands 0xa6d8c58)
	bool GetShowTemplateIslands(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

