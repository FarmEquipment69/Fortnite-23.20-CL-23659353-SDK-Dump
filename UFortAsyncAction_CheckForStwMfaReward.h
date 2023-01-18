// Class /Script/FortniteUI.FortAsyncAction_CheckForStwMfaReward
// Size: 0x58
class UFortAsyncAction_CheckForStwMfaReward : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnCompleted; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x40 (0x10)
	class AFortPlayerController* PlayerController; // 0x50 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortAsyncAction_CheckForStwMfaReward.CheckForStwMfaReward (Underlying native function: CheckForStwMfaReward 0xa46fd70)
	static class UFortAsyncAction_CheckForStwMfaReward* CheckForStwMfaReward(class AFortPlayerController*& PlayerController); // (Final | Native | Static | Public | BlueprintCallable)
};

