// Class /Script/FortniteUI.AthenaChallengeListEntry_LockedQuest
// Size: 0x340
class UAthenaChallengeListEntry_LockedQuest : public UAthenaChallengeListEntryBase
{
	class UAthenaChallengeDateTimeTextBlock* DateTimeTextTimeUntilQuestUnlocks; // 0x2a8 (0x8)
	class URichTextBlock* RichTextBlockChallengesUntilUnlocked; // 0x2b0 (0x8)
	class URichTextBlock* RichTextBlockTimeUntilUnlocked; // 0x2b8 (0x8)
	struct FLockedQuestData LockedQuestData; // 0x2c0 (0x48)
	struct FText DisplayNameFallback; // 0x308 (0x18)
	struct FText DisplayTextOverride; // 0x320 (0x18)
	unsigned char padding_338[0x8]; // 0x338 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaChallengeListEntry_LockedQuest.OnInitDisplayText (Has no native function)
	void OnInitDisplayText(enum ELockedWidgetUnlockType& InUnlockType); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeListEntry_LockedQuest.GetStartingUnlockTime (Underlying native function: GetStartingUnlockTime 0x9ef4e78)
	struct FTimespan* GetStartingUnlockTime(); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

