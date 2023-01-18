// Class /Script/FortniteGame.FortConversationContextLibrary
// Size: 0x28
class UFortConversationContextLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortConversationContextLibrary.GetTaskBeingConsidered (Underlying native function: GetTaskBeingConsidered 0x871a7ac)
	static class UConversationTaskNode* GetTaskBeingConsidered(struct FConversationContext& Context); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortConversationContextLibrary.GetParticipantPlayerController (Underlying native function: GetParticipantPlayerController 0x871a4a8)
	static class AFortPlayerController* GetParticipantPlayerController(struct FConversationContext& Context); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortConversationContextLibrary.GetParticipantComponentPlayer (Underlying native function: GetParticipantComponentPlayer 0x871a3f8)
	static class UConversationParticipantComponent* GetParticipantComponentPlayer(struct FConversationContext& Context); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortConversationContextLibrary.GetParticipantComponentNPC (Underlying native function: GetParticipantComponentNPC 0x871a348)
	static class UConversationParticipantComponent* GetParticipantComponentNPC(struct FConversationContext& Context); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortConversationContextLibrary.GetParticipantActorPlayer (Underlying native function: GetParticipantActorPlayer 0x871a298)
	static class AActor* GetParticipantActorPlayer(struct FConversationContext& Context); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortConversationContextLibrary.GetParticipantActorNPC (Underlying native function: GetParticipantActorNPC 0x871a1e8)
	static class AActor* GetParticipantActorNPC(struct FConversationContext& Context); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)
};

