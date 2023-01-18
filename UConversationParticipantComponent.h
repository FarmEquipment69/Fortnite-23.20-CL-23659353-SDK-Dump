// Class /Script/CommonConversationRuntime.ConversationParticipantComponent
// Size: 0x1a0
class UConversationParticipantComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x60]; // 0xa0 (0x60) 
	int ConversationsActive; // 0x100 (0x4)
	unsigned char unreflected_104[0x4]; // 0x104 (0x4) 
	class UConversationInstance* AuthCurrentConversation; // 0x108 (0x8)
	struct TArray<class UConversationInstance*> AuthConversations; // 0x110 (0x10)
	struct FClientConversationMessagePayload LastMessage; // 0x120 (0x78)
	unsigned char padding_198[0x8]; // 0x198 (0x8)

	/* Functions */

	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ServerAdvanceConversation (Underlying native function: ServerAdvanceConversation 0x70e1544)
	void ServerAdvanceConversation(struct FAdvanceConversationRequest& InChoicePicked); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.RequestServerAdvanceConversation (Underlying native function: RequestServerAdvanceConversation 0x70e1430)
	void RequestServerAdvanceConversation(struct FAdvanceConversationRequest& InChoicePicked); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.OnRep_ConversationsActive (Underlying native function: OnRep_ConversationsActive 0x70e1274)
	void OnRepConversationsActive(int& OldConversationsActive); // (Final | Native | Protected)

	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.IsInActiveConversation (Underlying native function: IsInActiveConversation 0x70e0fb8)
	bool IsInActiveConversation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.GetParticipantDisplayName (Underlying native function: GetParticipantDisplayName 0x70e0f38)
	struct FText GetParticipantDisplayName(); // (Native | Public | BlueprintCallable)

	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateParticipants (Underlying native function: ClientUpdateParticipants 0x70e051c)
	void ClientUpdateParticipants(struct FConversationParticipants& InParticipants); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversationTaskChoiceData (Underlying native function: ClientUpdateConversationTaskChoiceData 0x70e03a8)
	void ClientUpdateConversationTaskChoiceData(struct FConversationNodeHandle& Handle, struct FClientConversationOptionEntry& OptionEntry); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversations (Underlying native function: ClientUpdateConversations 0x70e0498)
	void ClientUpdateConversations(int& InConversationsActive); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversation (Underlying native function: ClientUpdateConversation 0x70e030c)
	void ClientUpdateConversation(struct FClientConversationMessagePayload& message); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientStartConversation (Underlying native function: ClientStartConversation 0x6ae56a0)
	void ClientStartConversation(struct FGameplayTag& AsParticipant); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientExecuteTaskAndSideEffects (Underlying native function: ClientExecuteTaskAndSideEffects 0x70e0278)
	void ClientExecuteTaskAndSideEffects(struct FConversationNodeHandle& Handle); // (Net | NetReliable | Native | Event | Protected | NetClient)
};

