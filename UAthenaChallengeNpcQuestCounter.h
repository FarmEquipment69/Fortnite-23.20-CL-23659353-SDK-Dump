// Class /Script/FortniteUI.AthenaChallengeNpcQuestCounter
// Size: 0x2d8
class UAthenaChallengeNpcQuestCounter : public UUserWidget
{
	struct FGameplayTagContainer ExcludedTabs; // 0x268 (0x20)
	struct FText TextPartyTab; // 0x288 (0x18)
	struct FText TextPersonalTab; // 0x2a0 (0x18)
	unsigned char unreflected_2b8[0x8]; // 0x2b8 (0x8) 
	class URichTextBlock* RichTextHeaderDesc; // 0x2c0 (0x8)
	class URichTextBlock* RichTextMaxQuests; // 0x2c8 (0x8)
	class URichTextBlock* RichTextNumActiveQuests; // 0x2d0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaChallengeNpcQuestCounter.UpdateVisibility (Underlying native function: UpdateVisibility 0xa4e342c)
	void UpdateVisibility(struct FGameplayTag& CurrentTabTag); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteUI.AthenaChallengeNpcQuestCounter.HandleTransientQuestStarted (Underlying native function: HandleTransientQuestStarted 0xa4e224c)
	void HandleTransientQuestStarted(class UFortQuestItem*& QuestItem, class UFortQuestItemDefinition_Athena*& PreceedingQuestDefAthena); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaChallengeNpcQuestCounter.HandleTransientQuestRemoved (Underlying native function: HandleTransientQuestRemoved 0xa4e210c)
	void HandleTransientQuestRemoved(class UFortQuestItem*& QuestItem); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaChallengeNpcQuestCounter.HandleQuestUpdate (Underlying native function: HandleQuestUpdate 0xa4e1b4c)
	void HandleQuestUpdate(class UFortQuestObjectiveInfo*& QuestObjective, bool& bDisplayStatusUpdate, bool& bDisplayAnnouncementUpdate); // (Final | Native | Private)
};

