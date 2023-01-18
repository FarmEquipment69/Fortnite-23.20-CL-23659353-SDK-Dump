// Class /Script/FortniteUI.AthenaChallengePunchCard
// Size: 0x2f8
class UAthenaChallengePunchCard : public UCommonUserWidget
{
	int MaxPunchesAllowed; // 0x290 (0x4)
	unsigned char unreflected_294[0x4]; // 0x294 (0x4) 
	class UDynamicEntryBox* BoxPunchSlots; // 0x298 (0x8)
	class UCommonTextBlock* TextTitle; // 0x2a0 (0x8)
	class UCommonTextBlock* TextDescription; // 0x2a8 (0x8)
	unsigned char unreflected_2b0[0x30]; // 0x2b0 (0x30) 
	bool bInitializedWidgetPool; // 0x2e0 (0x1)
	bool bBundleIsKnown; // 0x2e1 (0x1)
	bool bBangShown; // 0x2e2 (0x1)
	unsigned char unreflected_2e3[0x1]; // 0x2e3 (0x1) 
	struct TWeakObjectPtr<class UFortChallengeBundleItemDefinition> WeakBundleDef; // 0x2e4 (0x8)
	unsigned char unreflected_2ec[0x4]; // 0x2ec (0x4) 
	struct FDateTime* MostRecentPunch; // 0x2f0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaChallengePunchCard.UpdateChallengePunchCard (Underlying native function: UpdateChallengePunchCard 0xa4e3354)
	void UpdateChallengePunchCard(class UFortChallengeBundleItem*& Bundle, class UFortQuestItem*& CopmpletedQuest); // (Final | Native | Public)

	// Function /Script/FortniteUI.AthenaChallengePunchCard.UnfocusPunchCard (Has no native function)
	void UnfocusPunchCard(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengePunchCard.TryToClearBangState (Underlying native function: TryToClearBangState 0xa4e32c0)
	void TryToClearBangState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaChallengePunchCard.ShowWidget (Has no native function)
	void ShowWidget(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengePunchCard.SetUpEncodedName (Has no native function)
	void SetUpEncodedName(struct FString& Name, int& Count); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengePunchCard.SetUnkownState (Has no native function)
	void SetUnkownState(bool& bKnown); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengePunchCard.SetStyle (Has no native function)
	void SetStyle(struct FFortChallengePunchCardStyles& PunchStyle); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengePunchCard.SetProgressCount (Has no native function)
	void SetProgressCount(int& AchivedCount, int& GoalCount); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengePunchCard.SetBangState (Has no native function)
	void SetBangState(bool& bShowBang); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengePunchCard.HideProgressCount (Has no native function)
	void HideProgressCount(bool& bBundleCompleted); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengePunchCard.FocusPunchCard (Has no native function)
	void FocusPunchCard(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengePunchCard.FinishedPunchingCard (Has no native function)
	void FinishedPunchingCard(bool& bPlayOutro); // (Event | Public | BlueprintEvent)
};

