// Class /Script/FortniteUI.AthenaGrantChallengeModal
// Size: 0x560
class UAthenaGrantChallengeModal : public UFortMessageReceivedScreen
{
	struct TArray<class UFortChallengeBundleItemDefinition*> BundleDefs; // 0x538 (0x10)
	class UCommonTextBlock* TextChallengeName; // 0x548 (0x8)
	class UCommonTextBlock* TextChallengeContext; // 0x550 (0x8)
	class UCommonTextBlock* TextBodyCopy; // 0x558 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaGrantChallengeModal.ShowNextChallengePopup (Underlying native function: ShowNextChallengePopup 0xa73df58)
	void ShowNextChallengePopup(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaGrantChallengeModal.OnChallengeBundleSet (Has no native function)
	void OnChallengeBundleSet(struct FFortChallengeSetStyle& DisplayStyle); // (Event | Protected | HasOutParms | BlueprintEvent)
};

