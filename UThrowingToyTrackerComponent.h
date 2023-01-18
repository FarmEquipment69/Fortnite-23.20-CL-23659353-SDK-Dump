// Class /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent
// Size: 0x1c0
class UThrowingToyTrackerComponent : public UActorComponent
{
	struct FThrowingToyDataArray ThrowingToysData; // 0xa0 (0x118)
	unsigned char padding_1b8[0x8]; // 0x1b8 (0x8)

	/* Functions */

	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.SetRecentThrowingToyItemRemovedReason (Underlying native function: SetRecentThrowingToyItemRemovedReason 0x733c4ec)
	void SetRecentThrowingToyItemRemovedReason(enum EThrowingToyItemRemovedReason& RemovedReason); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.GetThrowingToy (Underlying native function: GetThrowingToy 0x733c3e4)
	class AActor* GetThrowingToy(struct FGuid& WorldItemGuid); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.GetRecentThrowingToyItemRemovedReason (Underlying native function: GetRecentThrowingToyItemRemovedReason 0x733c3cc)
	enum EThrowingToyItemRemovedReason GetRecentThrowingToyItemRemovedReason(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.GetAndReleaseThrowingToy (Underlying native function: GetAndReleaseThrowingToy 0x733c330)
	class AActor* GetAndReleaseThrowingToy(struct FGuid& WorldItemGuid); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.AddThrowingToy (Underlying native function: AddThrowingToy 0x733c1b8)
	void AddThrowingToy(class AActor*& ThrowingToyActor, struct FGuid& WorldItemGuid); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

