// Class /Script/FortniteGame.FortAbilityTask_WaitForCustomCharacterParts
// Size: 0xa0
class UFortAbilityTask_WaitForCustomCharacterParts : public UAbilityTask
{
	struct FMulticastInlineDelegate OnReady; // 0x78 (0x10)
	struct TArray<struct TWeakObjectPtr<class UCustomCharacterPart>> CustomCharacterPartsToWaitFor; // 0x88 (0x10)
	class AFortPlayerPawn* FortPlayerPawn; // 0x98 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_WaitForCustomCharacterParts.WaitForCustomCharacterPartsReady (Underlying native function: WaitForCustomCharacterPartsReady 0x81e97a8)
	static class UFortAbilityTask_WaitForCustomCharacterParts* WaitForCustomCharacterPartsReady(class UGameplayAbility*& OwningAbility, struct TArray<struct TWeakObjectPtr<class UCustomCharacterPart>>& CustomCharacterParts); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_WaitForCustomCharacterParts.OnFinishedCharacterCustomizationCallback (Underlying native function: OnFinishedCharacterCustomizationCallback 0x81e8bc0)
	void OnFinishedCharacterCustomizationCallback(class AFortPlayerPawn*& InPawn); // (Final | Native | Public)
};

