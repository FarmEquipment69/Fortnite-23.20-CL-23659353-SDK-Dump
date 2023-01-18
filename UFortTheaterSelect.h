// Class /Script/SaveTheWorldUI.FortTheaterSelect
// Size: 0x510
class UFortTheaterSelect : public UCommonActivatablePanelLegacy
{
	unsigned char unreflected_4e0[0x10]; // 0x4e0 (0x10) 
	class UOverlay* OverlayMain; // 0x4f0 (0x8)
	unsigned char unreflected_4f8[0x10]; // 0x4f8 (0x10) 
	class UFortQuestItemDefinition* DefaultRequiredCompletedQuest; // 0x508 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortTheaterSelect.OnNavigationRight (Has no native function)
	void OnNavigationRight(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortTheaterSelect.OnNavigationLeft (Has no native function)
	void OnNavigationLeft(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortTheaterSelect.GetTheaterRecommendedRatingRange (Underlying native function: GetTheaterRecommendedRatingRange 0x75cd0b4)
	bool GetTheaterRecommendedRatingRange(struct FString& UniqueId, int& Minimum, int& Maximum); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

