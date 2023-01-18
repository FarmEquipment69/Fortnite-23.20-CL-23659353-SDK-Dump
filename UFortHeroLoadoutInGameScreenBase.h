// Class /Script/SaveTheWorldUI.FortHeroLoadoutInGameScreenBase
// Size: 0x530
class UFortHeroLoadoutInGameScreenBase : public UCommonActivatablePanelLegacy
{
	struct TArray<struct FFortInGamePerkDisplayData> PerksDisplayData; // 0x4e0 (0x10)
	class UClass* TileClass; // 0x4f0 (0x8)
	class UScrollBox* ScrollBoxContent; // 0x4f8 (0x8)
	class UFortItemDetailsHostPanel* ItemDetailsHostPanelHeader; // 0x500 (0x8)
	class UGridPanel* GridPanelPerks; // 0x508 (0x8)
	class UFortHeroLoadoutGadgetTileBase* GadgetTileGadget1; // 0x510 (0x8)
	class UFortHeroLoadoutGadgetTileBase* GadgetTileGadget2; // 0x518 (0x8)
	struct TArray<class UFortHeroLoadoutGadgetTileBase*> GadgetTiles; // 0x520 (0x10)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortHeroLoadoutInGameScreenBase.OnPerkWidgetAdded (Has no native function)
	void OnPerkWidgetAdded(class UGridSlot*& GridSlot); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortHeroLoadoutInGameScreenBase.GetGadgetDefinitionBySlot (Underlying native function: GetGadgetDefinitionBySlot 0x75969cc)
	class UFortGadgetItemDefinition* GetGadgetDefinitionBySlot(int& SlotIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

