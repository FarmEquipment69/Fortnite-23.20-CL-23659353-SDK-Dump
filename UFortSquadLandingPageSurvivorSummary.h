// Class /Script/SaveTheWorldUI.FortSquadLandingPageSurvivorSummary
// Size: 0x318
class UFortSquadLandingPageSurvivorSummary : public UCommonUserWidget
{
	class UFortSquadStatValueWithIcon* FortitudeStatValue; // 0x290 (0x8)
	class UFortSquadStatValueWithIcon* OffenseStatValue; // 0x298 (0x8)
	class UFortSquadStatValueWithIcon* ResistanceStatValue; // 0x2a0 (0x8)
	class UFortSquadStatValueWithIcon* TechStatValue; // 0x2a8 (0x8)
	unsigned char padding_2b0[0x68]; // 0x2b0 (0x68)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSquadLandingPageSurvivorSummary.HandleClearSetBonusSummaryLineItemsBP (Has no native function)
	void HandleClearSetBonusSummaryLineItemsBP(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadLandingPageSurvivorSummary.HandleAddSetBonusSummaryLineItemBP (Has no native function)
	void HandleAddSetBonusSummaryLineItemBP(struct FFortAttributeModifierAccumulation& AttributeModifierAccumulation); // (Event | Public | BlueprintEvent)
};

