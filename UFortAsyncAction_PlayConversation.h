// Class /Script/FortniteGame.FortAsyncAction_PlayConversation
// Size: 0x88
class UFortAsyncAction_PlayConversation : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnCanceled; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x50 (0x10)
	struct TWeakObjectPtr<class AFortPawn> PawnWeak; // 0x60 (0x8)
	class UFortConversation* ConversationToPlay; // 0x68 (0x8)
	unsigned char padding_70[0x18]; // 0x70 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_PlayConversation.PlayConversation (Underlying native function: PlayConversation 0x871b624)
	static class UFortAsyncAction_PlayConversation* PlayConversation(class AFortPawn*& Pawn, class UFortConversation*& ConversationToPlay); // (Final | Native | Static | Public | BlueprintCallable)
};

