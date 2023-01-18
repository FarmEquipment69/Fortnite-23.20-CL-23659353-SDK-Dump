// Class /Script/FortniteUI.AthenaSpecialEventChallengesWidget
// Size: 0x398
class UAthenaSpecialEventChallengesWidget : public UAthenaChallengesWidget
{
	float UrgentQuestMessagingStartBuffer; // 0x378 (0x4)
	unsigned char unreflected_37c[0x4]; // 0x37c (0x4) 
	class AFortPlayerStateAthena* AttachedPlayerState; // 0x380 (0x8)
	struct TArray<struct FUrgentQuestData> ActiveUrgentQuestDataArray; // 0x388 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpecialEventChallengesWidget.HandleUrgentQuestStarted (Underlying native function: HandleUrgentQuestStarted 0xa531dd8)
	void HandleUrgentQuestStarted(struct FUrgentQuestData& InUrgentQuestData, float& EventTimeRemaining); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaSpecialEventChallengesWidget.HandleUrgentQuestEnded (Underlying native function: HandleUrgentQuestEnded 0xa531d08)
	void HandleUrgentQuestEnded(class AFortPlayerStateAthena*& PlayerStateAthena, struct FGameplayTag& EventTag); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaSpecialEventChallengesWidget.HandleUrgentQuestDataChanged (Underlying native function: HandleUrgentQuestDataChanged 0xa531c64)
	void HandleUrgentQuestDataChanged(struct FUrgentQuestData& InUrgentQuestData); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaSpecialEventChallengesWidget.HandleSpectatorUrgentQuestEnded (Underlying native function: HandleSpectatorUrgentQuestEnded 0xa531ab4)
	void HandleSpectatorUrgentQuestEnded(struct FGameplayTag& EventTag); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaSpecialEventChallengesWidget.HandleClearAllUrgentQuestEntries (Underlying native function: HandleClearAllUrgentQuestEntries 0xa530a90)
	void HandleClearAllUrgentQuestEntries(); // (Final | Native | Private)
};

