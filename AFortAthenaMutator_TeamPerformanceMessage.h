// Class /Script/FortniteGame.FortAthenaMutator_TeamPerformanceMessage
// Size: 0x348
class AFortAthenaMutator_TeamPerformanceMessage : public AFortAthenaMutator
{
	struct TArray<struct FTeamPerformanceMessageData> MessageDatas; // 0x330 (0x10)
	struct FTeamPerformanceMessageReplication* MessageTriggerReplicated; // 0x340 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_TeamPerformanceMessage.SetMessageEnabled (Underlying native function: SetMessageEnabled 0x85061d4)
	void SetMessageEnabled(struct FName& NameIdentifier, bool& bEnabled); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_TeamPerformanceMessage.OnTeamScoreChanged (Underlying native function: OnTeamScoreChanged 0x8487db8)
	void OnTeamScoreChanged(unsigned char& TeamId, int& NewScore); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_TeamPerformanceMessage.OnRep_MessageTriggerReplicated (Underlying native function: OnRep_MessageTriggerReplicated 0x8505dac)
	void OnRepMessageTriggerReplicated(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_TeamPerformanceMessage.OnGoalScoreChanged (Underlying native function: OnGoalScoreChanged 0x26daa0c)
	void OnGoalScoreChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_TeamPerformanceMessage.MulticastTriggerMessage_Unreliable (Underlying native function: MulticastTriggerMessage_Unreliable 0x8505170)
	void MulticastTriggerMessageUnreliable(struct FTeamPerformanceMessageReplication*& InMessageTrigger); // (Net | Native | Event | NetMulticast | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_TeamPerformanceMessage.MulticastTriggerMessage_Reliable (Underlying native function: MulticastTriggerMessage_Reliable 0x85050e8)
	void MulticastTriggerMessageReliable(struct FTeamPerformanceMessageReplication*& InMessageTrigger); // (Net | NetReliable | Native | Event | NetMulticast | Protected)
};

