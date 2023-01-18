// Class /Script/AIModule.AIAsyncTaskBlueprintProxy
// Size: 0x68
class UAIAsyncTaskBlueprintProxy : public UObject
{
	struct FMulticastInlineDelegate OnSuccess; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnFail; // 0x38 (0x10)
	unsigned char padding_48[0x20]; // 0x48 (0x20)

	/* Functions */

	// Function /Script/AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted (Underlying native function: OnMoveCompleted 0xa17ebfc)
	void OnMoveCompleted(struct FAIRequestID& RequestId, struct TEnumAsByte<EPathFollowingResult>& MovementResult); // (Final | Native | Public)
};

