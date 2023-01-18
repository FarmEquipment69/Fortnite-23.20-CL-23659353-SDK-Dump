// Class /Script/FortniteUI.AthenaChallengeTreeEntry_ChallengeSet
// Size: 0x2d0
class UAthenaChallengeTreeEntry_ChallengeSet : public UAthenaChallengeListEntryBase
{
	unsigned char unreflected_2a8[0x10]; // 0x2a8 (0x10) 
	class UCommonTextBlock* TextChallengeSetName; // 0x2b8 (0x8)
	class UCommonTextBlock* TextChallengeSetContext; // 0x2c0 (0x8)
	class UCommonTextBlock* TextPercentComplete; // 0x2c8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaChallengeTreeEntry_ChallengeSet.OnChallengeSetEstablished (Has no native function)
	void OnChallengeSetEstablished(struct FFortChallengeSetStyle& DisplayStyle); // (Event | Protected | HasOutParms | BlueprintEvent)
};

