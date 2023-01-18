// Class /Script/FortniteUI.AthenaMiniChallenges
// Size: 0x3d8
class UAthenaMiniChallenges : public UCommonActivatableWidget
{
	class UDynamicEntryBox* EntryBoxMiniChallenges; // 0x3a8 (0x8)
	bool bPlacedAtEndOfMatch; // 0x3b0 (0x1)
	unsigned char unreflected_3b1[0x1f]; // 0x3b1 (0x1f) 
	int UpdatingWidgets; // 0x3d0 (0x4)
	unsigned char padding_3d4[0x4]; // 0x3d4 (0x4)

	/* Functions */

	// Function /Script/FortniteUI.AthenaMiniChallenges.InspectModeEnabled (Has no native function)
	void InspectModeEnabled(bool& bEnabled); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMiniChallenges.ClearQuestDescriptions (Has no native function)
	void ClearQuestDescriptions(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMiniChallenges.AddQuestDetails (Has no native function)
	void AddQuestDetails(struct FText& QuestDescription, int& AchivedCount, int& GoalCount); // (Event | Public | HasOutParms | BlueprintEvent)
};

