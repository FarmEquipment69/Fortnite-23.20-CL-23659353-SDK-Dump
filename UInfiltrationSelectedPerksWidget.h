// Class /Script/FortniteUI.InfiltrationSelectedPerksWidget
// Size: 0x348
class UInfiltrationSelectedPerksWidget : public ULTMWidgetBase
{
	struct TWeakObjectPtr<class AFortAthenaMutator_Infiltration> CachedMutator; // 0x328 (0x8)
	struct TArray<class UFortSpyTechItemDefinition*> CurrentDisplayedPerks; // 0x330 (0x10)
	struct FGameplayTag FilterTag; // 0x340 (0x4)
	unsigned char padding_344[0x4]; // 0x344 (0x4)

	/* Functions */

	// Function /Script/FortniteUI.InfiltrationSelectedPerksWidget.UpdatePerks (Has no native function)
	void UpdatePerks(); // (Event | Protected | BlueprintEvent)
};

