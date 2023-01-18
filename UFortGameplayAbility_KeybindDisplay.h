// Class /Script/FortniteGame.FortGameplayAbility_KeybindDisplay
// Size: 0xb40
class UFortGameplayAbility_KeybindDisplay : public UFortGameplayAbility
{
	struct TArray<struct FActionDisplayTextData> ActionDisplays; // 0xb20 (0x10)
	class UFortInputComponent* KeybindInputComponent; // 0xb30 (0x8)
	bool bIsDisplayActive; // 0xb38 (0x1)
	unsigned char padding_b39[0x7]; // 0xb39 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayAbility_KeybindDisplay.SetActionDisplayVisibility (Underlying native function: SetActionDisplayVisibility 0x5c54c70)
	void SetActionDisplayVisibility(struct FName& Action, bool& bIsVisible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility_KeybindDisplay.SetActionDisplayText (Underlying native function: SetActionDisplayText 0x5c54b50)
	void SetActionDisplayText(struct FName& Action, struct FText& DisplayText); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility_KeybindDisplay.SetActionDisplayActive (Underlying native function: SetActionDisplayActive 0x5c54ab0)
	void SetActionDisplayActive(bool& bWillDisplayActive); // (Final | Native | Public | BlueprintCallable)
};

