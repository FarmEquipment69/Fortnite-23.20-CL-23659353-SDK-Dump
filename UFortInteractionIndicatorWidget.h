// Class /Script/FortniteUI.FortInteractionIndicatorWidget
// Size: 0x428
class UFortInteractionIndicatorWidget : public UFortActorIndicatorWidget
{
	class UCommonVisibilitySwitcher* SwitcherPrimaryContext; // 0x378 (0x8)
	class UCommonVisibilitySwitcher* SwitcherSecondaryContext; // 0x380 (0x8)
	struct TMap<class UClass*, class UFortInteractContextInfoWidget*> PrimaryContextOverrideMap; // 0x388 (0x50)
	struct TMap<class UClass*, class UFortInteractContextInfoWidget*> SecondaryContextOverrideMap; // 0x3d8 (0x50)

	/* Functions */

	// Function /Script/FortniteUI.FortInteractionIndicatorWidget.HandleRemoveContextOverride (Underlying native function: HandleRemoveContextOverride 0xa6ff198)
	void HandleRemoveContextOverride(class UClass*& ContextOverrideWidget, bool& bPrimary); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortInteractionIndicatorWidget.HandleImprovedDBNOStateChanged (Underlying native function: HandleImprovedDBNOStateChanged 0xa6febb4)
	void HandleImprovedDBNOStateChanged(bool& bImprovedDBNOEnabled); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortInteractionIndicatorWidget.HandleAddContextOverride (Underlying native function: HandleAddContextOverride 0xa6fea28)
	void HandleAddContextOverride(class UClass*& ContextOverrideWidget, bool& bPrimary); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortInteractionIndicatorWidget.ActivateContextOverride (Underlying native function: ActivateContextOverride 0xa6fd804)
	class UFortInteractContextInfoWidget* ActivateContextOverride(class UClass*& ContextOverrideWidget, class UFortInteractContextInfo*& ContextInfo, bool& bPrimary); // (Final | Native | Private | HasOutParms | BlueprintCallable)
};

