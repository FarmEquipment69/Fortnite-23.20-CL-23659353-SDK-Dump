// Class /Script/FortniteUI.AthenaCollectionItemToastFishing
// Size: 0x398
class UAthenaCollectionItemToastFishing : public UAthenaCollectionItemToast
{
	struct FText LengthFormat; // 0x350 (0x18)
	struct FText LeaderLengthFormat; // 0x368 (0x18)
	class UCommonRichTextBlock* RichTextLength; // 0x380 (0x8)
	class UCommonTextBlock* TextLeaderName; // 0x388 (0x8)
	class UCommonRichTextBlock* RichTextLeaderLength; // 0x390 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCollectionItemToastFishing.BP_OnUnlockedNewClue (Has no native function)
	void BPOnUnlockedNewClue(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionItemToastFishing.BP_OnStarRatingSet (Has no native function)
	void BPOnStarRatingSet(int& StarRating); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionItemToastFishing.BP_OnRankSet (Has no native function)
	void BPOnRankSet(int& Rank, int& NumEntries); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionItemToastFishing.BP_OnNormalizedLengthSet (Has no native function)
	void BPOnNormalizedLengthSet(float& NormalizedLength, float& NormalizedMinLength, float& NormalizedMaxLength); // (Event | Protected | BlueprintEvent)
};

