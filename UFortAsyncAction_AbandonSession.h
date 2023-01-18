// Class /Script/FortniteGame.FortAsyncAction_AbandonSession
// Size: 0x60
class UFortAsyncAction_AbandonSession : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	class AFortPlayerController* PlayerController; // 0x50 (0x8)
	unsigned char padding_58[0x8]; // 0x58 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_AbandonSession.AbandonSession (Underlying native function: AbandonSession 0x888b4a4)
	static class UFortAsyncAction_AbandonSession* AbandonSession(class AFortPlayerController*& PlayerController); // (Final | Native | Static | Public | BlueprintCallable)
};

