// Class /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent
// Size: 0xe8
class UDynamicCapsuleComponent : public UFortPawnComponent
{
	struct FDynamicCapsuleState ReplicatedCapsuleState; // 0xa0 (0x10)
	unsigned char padding_b0[0x38]; // 0xb0 (0x38)

	/* Functions */

	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ServerRemoveDynamicCapsule (Underlying native function: ServerRemoveDynamicCapsule 0x742388c)
	void ServerRemoveDynamicCapsule(struct FGameplayTag& tag); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ServerApplyDynamicCapsule (Underlying native function: ServerApplyDynamicCapsule 0x7423710)
	void ServerApplyDynamicCapsule(struct FGameplayTag& tag, float& CapsuleRadius, float& CapsuleHalfHeight, double& NewRelativeMeshHeight); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.RemoveDynamicCapsule (Underlying native function: RemoveDynamicCapsule 0x7423678)
	bool RemoveDynamicCapsule(struct FGameplayTag& tag); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.OnRep_DynamicCapsuleReplicatedState (Underlying native function: OnRep_DynamicCapsuleReplicatedState 0x21bb698)
	void OnRepDynamicCapsuleReplicatedState(); // (Final | Native | Private)

	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ApplyDynamicCapsuleWithLocationAdjust (Underlying native function: ApplyDynamicCapsuleWithLocationAdjust 0x742341c)
	bool ApplyDynamicCapsuleWithLocationAdjust(struct FGameplayTag& tag, float& CapsuleRadius, float& CapsuleHalfHeight, double& NewRelativeMeshHeight); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ApplyDynamicCapsule (Underlying native function: ApplyDynamicCapsule 0x7423308)
	bool ApplyDynamicCapsule(struct FGameplayTag& tag, float& CapsuleRadius, float& CapsuleHalfHeight); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

