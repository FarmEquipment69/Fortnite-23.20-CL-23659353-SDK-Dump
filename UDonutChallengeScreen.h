// Class /Script/FortniteUI.DonutChallengeScreen
// Size: 0x4d0
class UDonutChallengeScreen : public UAthenaSpatialScreen
{
	unsigned char unreflected_438[0x18]; // 0x438 (0x18) 
	class UFortGameStateComponent_EventLevel* EventGameStateComponent; // 0x450 (0x8)
	class UAthenaSeasonItemDefinition* SeasonData; // 0x458 (0x8)
	struct TWeakObjectPtr<class UClass> CustomMouseCursorWidget; // 0x460 (0x28)
	class UClass* HeaderEntryClass; // 0x488 (0x8)
	class UClass* EntryClass; // 0x490 (0x8)
	struct TArray<class UFortChallengeBundleItemDefinition*> DonutBundles; // 0x498 (0x10)
	class UFortChallengeBundleItemDefinition* SkinUnlockBundle; // 0x4a8 (0x8)
	class UCommonTextBlock* TextAttractChallengeDescription; // 0x4b0 (0x8)
	class UCommonButtonLegacy* ButtonBattlepassUpsell; // 0x4b8 (0x8)
	class UCommonHierarchicalScrollBox* ScrollBoxChallenges; // 0x4c0 (0x8)
	class UDynamicEntryBox* EntryBoxChallenges; // 0x4c8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.DonutChallengeScreen.UpdateBPOwnedStateVisuals (Has no native function)
	void UpdateBPOwnedStateVisuals(bool& bInOwnsBattlePass); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.DonutChallengeScreen.ShowSkinUnlockMessage (Has no native function)
	void ShowSkinUnlockMessage(bool& bShowMessage, int& InChallengeNum); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.DonutChallengeScreen.SetStyledCursorEnabled (Underlying native function: SetStyledCursorEnabled 0xa7c3dfc)
	void SetStyledCursorEnabled(bool& bEnableStyledCursor); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.DonutChallengeScreen.SetEntryFocus (Underlying native function: SetEntryFocus 0xa7c3b30)
	void SetEntryFocus(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.DonutChallengeScreen.ScrollToEndOfChallenges (Underlying native function: ScrollToEndOfChallenges 0xa7c39bc)
	void ScrollToEndOfChallenges(); // (Final | Native | Protected | BlueprintCallable)
};

