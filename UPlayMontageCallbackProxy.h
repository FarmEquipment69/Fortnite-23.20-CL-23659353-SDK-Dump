// Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy
// Size: 0xa8
class UPlayMontageCallbackProxy : public UObject
{
	struct FMulticastInlineDelegate OnCompleted; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x48 (0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0x58 (0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0x68 (0x10)
	unsigned char padding_78[0x30]; // 0x78 (0x30)

	/* Functions */

	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived (Underlying native function: OnNotifyEndReceived 0x99ff048)
	void OnNotifyEndReceived(struct FName& NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // (Final | Native | Protected | HasOutParms)

	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived (Underlying native function: OnNotifyBeginReceived 0x99fef54)
	void OnNotifyBeginReceived(struct FName& NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // (Final | Native | Protected | HasOutParms)

	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded (Underlying native function: OnMontageEnded 0x99fee8c)
	void OnMontageEnded(class UAnimMontage*& Montage, bool& bInterrupted); // (Final | Native | Protected)

	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut (Underlying native function: OnMontageBlendingOut 0x99fedc4)
	void OnMontageBlendingOut(class UAnimMontage*& Montage, bool& bInterrupted); // (Final | Native | Protected)

	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage (Underlying native function: CreateProxyObjectForPlayMontage 0x99fc388)
	static class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent*& InSkeletalMeshComponent, class UAnimMontage*& MontageToPlay, float& PlayRate, float& StartingPosition, struct FName& StartingSection); // (Final | Native | Static | Public | BlueprintCallable)
};

