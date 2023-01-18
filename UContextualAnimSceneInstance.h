// Class /Script/ContextualAnimation.ContextualAnimSceneInstance
// Size: 0xd8
class UContextualAnimSceneInstance : public UObject
{
	struct FMulticastInlineDelegate OnSectionEndTimeReached; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnSceneEnded; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnActorJoined; // 0x48 (0x10)
	struct FMulticastInlineDelegate OnActorLeft; // 0x58 (0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0x68 (0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0x78 (0x10)
	class UContextualAnimSceneAsset* SceneAsset; // 0x88 (0x8)
	struct FContextualAnimSceneBindings Bindings; // 0x90 (0x30)
	unsigned char padding_c0[0x18]; // 0xc0 (0x18)

	/* Functions */

	// Function /Script/ContextualAnimation.ContextualAnimSceneInstance.OnNotifyEndReceived (Underlying native function: OnNotifyEndReceived 0x7f584d4)
	void OnNotifyEndReceived(struct FName& NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // (Final | Native | Protected | HasOutParms)

	// Function /Script/ContextualAnimation.ContextualAnimSceneInstance.OnNotifyBeginReceived (Underlying native function: OnNotifyBeginReceived 0x7f583f4)
	void OnNotifyBeginReceived(struct FName& NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // (Final | Native | Protected | HasOutParms)

	// Function /Script/ContextualAnimation.ContextualAnimSceneInstance.OnMontageBlendingOut (Underlying native function: OnMontageBlendingOut 0x7f5832c)
	void OnMontageBlendingOut(class UAnimMontage*& Montage, bool& bInterrupted); // (Final | Native | Protected)

	// Function /Script/ContextualAnimation.ContextualAnimSceneInstance.GetActorByRole (Underlying native function: GetActorByRole 0x7f576dc)
	class AActor* GetActorByRole(struct FName& Role); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

