// Class /Script/Curie.CurieInterface
// Size: 0x28
class ICurieInterface : public IInterface
{

	/* Functions */

	// Function /Script/Curie.CurieInterface.OnCurieStateDetached_BP (Has no native function)
	void OnCurieStateDetachedBP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& StateTag); // (Event | Public | BlueprintEvent)

	// Function /Script/Curie.CurieInterface.OnCurieStateAttached_BP (Has no native function)
	void OnCurieStateAttachedBP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& StateTag); // (Event | Public | BlueprintEvent)

	// Function /Script/Curie.CurieInterface.OnCurieElementInteractEnded_BP (Has no native function)
	void OnCurieElementInteractEndedBP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/Curie.CurieInterface.OnCurieElementInteractBegun_BP (Has no native function)
	void OnCurieElementInteractBegunBP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/Curie.CurieInterface.OnCurieElementInteract_BP (Has no native function)
	void OnCurieElementInteractBP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/Curie.CurieInterface.OnCurieElementDetached_BP (Has no native function)
	void OnCurieElementDetachedBP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& ElementTag); // (Event | Public | BlueprintEvent)

	// Function /Script/Curie.CurieInterface.OnCurieElementAttached_BP (Has no native function)
	void OnCurieElementAttachedBP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& ElementTag); // (Event | Public | BlueprintEvent)

	// Function /Script/Curie.CurieInterface.OnCurieContainerReparented_BP (Has no native function)
	void OnCurieContainerReparentedBP(struct FCurieContainerHandle& CurieContainerHandle); // (Event | Public | BlueprintEvent)

	// Function /Script/Curie.CurieInterface.OnCurieContainerReleased_BP (Has no native function)
	void OnCurieContainerReleasedBP(struct FCurieContainerHandle& CurieContainerHandle); // (Event | Public | BlueprintEvent)

	// Function /Script/Curie.CurieInterface.OnCurieContainerAcquired_BP (Has no native function)
	void OnCurieContainerAcquiredBP(struct FCurieContainerHandle& CurieContainerHandle); // (Event | Public | BlueprintEvent)
};

