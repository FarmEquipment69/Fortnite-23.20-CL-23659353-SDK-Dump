// Class /Script/FortniteUI.AthenaChallengeListEntry_DetailedChallenge
// Size: 0x338
class UAthenaChallengeListEntry_DetailedChallenge : public UAthenaChallengeListEntry_Challenge
{
	unsigned char unreflected_2d0[0x10]; // 0x2d0 (0x10) 
	bool bHasAnyOptionsAvailable; // 0x2e0 (0x1)
	bool bIsDisplayingChallengeActions; // 0x2e1 (0x1)
	unsigned char unreflected_2e2[0x6]; // 0x2e2 (0x6) 
	struct FDataTableRowHandle BackAction; // 0x2e8 (0x10)
	struct FDataTableRowHandle CloseChallengeOptionsAction; // 0x2f8 (0x10)
	class UWidgetAnimation* BoundAnimShowChallengeOptions; // 0x308 (0x8)
	class UButton* SimpleButtonTopClickArea; // 0x310 (0x8)
	class UAthenaChallengeRewardDisplay* RewardQuestReward; // 0x318 (0x8)
	class UCommonButtonLegacy* ButtonPartyAssist; // 0x320 (0x8)
	class UCommonButtonLegacy* ButtonReplaceChallenge; // 0x328 (0x8)
	class UCommonRichTextBlock* RichTextActionInfo; // 0x330 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaChallengeListEntry_DetailedChallenge.HandleUpperAreaClicked (Underlying native function: HandleUpperAreaClicked 0xa4e230c)
	void HandleUpperAreaClicked(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaChallengeListEntry_DetailedChallenge.HandleCloseChallengeOptionsInputAction (Underlying native function: HandleCloseChallengeOptionsInputAction 0xa4e0dbc)
	void HandleCloseChallengeOptionsInputAction(bool& bPassThrough); // (Final | Native | Private | HasOutParms)
};

