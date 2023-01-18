// Class /Script/FortniteGame.FortAsyncAction_RejoinSession
// Size: 0x60
class UFortAsyncAction_RejoinSession : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	class AFortPlayerController* PlayerController; // 0x50 (0x8)
	unsigned char padding_58[0x8]; // 0x58 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_RejoinSession.RejoinSession (Underlying native function: RejoinSession 0x888b70c)
	static class UFortAsyncAction_RejoinSession* RejoinSession(class AFortPlayerController*& PlayerController); // (Final | Native | Static | Public | BlueprintCallable)
};

