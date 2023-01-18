// Class /Script/CommonConversationRuntime.ConversationContextHelpers
// Size: 0x28
class UConversationContextHelpers : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.ReturnToLastClientChoice (Underlying native function: ReturnToLastClientChoice 0x70dfed8)
	static struct FConversationTaskResult ReturnToLastClientChoice(struct FConversationContext& Context); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.ReturnToCurrentClientChoice (Underlying native function: ReturnToCurrentClientChoice 0x70dfed8)
	static struct FConversationTaskResult ReturnToCurrentClientChoice(struct FConversationContext& Context); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.ReturnToConversationStart (Underlying native function: ReturnToConversationStart 0x70dfed8)
	static struct FConversationTaskResult ReturnToConversationStart(struct FConversationContext& Context); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.PauseConversationAndSendClientChoices (Underlying native function: PauseConversationAndSendClientChoices 0x70e12f4)
	static struct FConversationTaskResult PauseConversationAndSendClientChoices(struct FConversationContext& Context, struct FClientConversationMessage& message); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.MakeConversationParticipant (Underlying native function: MakeConversationParticipant 0x70e1160)
	static void MakeConversationParticipant(struct FConversationContext& Context, class AActor*& ParticipantActor, struct FGameplayTag& ParticipantTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.GetCurrentConversationNodeHandle (Underlying native function: GetCurrentConversationNodeHandle 0x70e0d04)
	static struct FConversationNodeHandle GetCurrentConversationNodeHandle(struct FConversationContext& Context); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.GetConversationParticipantActor (Underlying native function: GetConversationParticipantActor 0x70e0bfc)
	static class AActor* GetConversationParticipantActor(struct FConversationContext& Context, struct FGameplayTag& ParticipantTag); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.GetConversationParticipant (Underlying native function: GetConversationParticipant 0x70e0af4)
	static class UConversationParticipantComponent* GetConversationParticipant(struct FConversationContext& Context, struct FGameplayTag& ParticipantTag); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.GetConversationInstance (Underlying native function: GetConversationInstance 0x70e0a44)
	static class UConversationInstance* GetConversationInstance(struct FConversationContext& Context); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.FindConversationComponent (Underlying native function: FindConversationComponent 0x70e0890)
	static class UConversationParticipantComponent* FindConversationComponent(class AActor*& Actor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.CanConversationContinue (Underlying native function: CanConversationContinue 0x70e010c)
	static bool CanConversationContinue(struct FConversationTaskResult& ConversationTasResult); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.AdvanceConversationWithChoice (Underlying native function: AdvanceConversationWithChoice 0x70dffb4)
	static struct FConversationTaskResult AdvanceConversationWithChoice(struct FConversationContext& Context, struct FAdvanceConversationRequest& Choice); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.AdvanceConversation (Underlying native function: AdvanceConversation 0x70dfed8)
	static struct FConversationTaskResult AdvanceConversation(struct FConversationContext& Context); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.AbortConversation (Underlying native function: AbortConversation 0x70dfed8)
	static struct FConversationTaskResult AbortConversation(struct FConversationContext& Context); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)
};

