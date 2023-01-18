// Class /Script/FortniteUI.AthenaChallengePunchCardEntry
// Size: 0x2d0
class UAthenaChallengePunchCardEntry : public UCommonUserWidget
{
	struct FName IconParamName; // 0x290 (0x4)
	int SlotIndex; // 0x294 (0x4)
	bool bIsBeingPlaced; // 0x298 (0x1)
	unsigned char unreflected_299[0x1f]; // 0x299 (0x1f) 
	class UCommonTextBlock* TextRewardQuantity; // 0x2b8 (0x8)
	class UCommonRichTextBlock* TextUnlockDate; // 0x2c0 (0x8)
	class UFortLazyImage* LazyImageStamp; // 0x2c8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaChallengePunchCardEntry.SetToDefaultSlot (Has no native function)
	void SetToDefaultSlot(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengePunchCardEntry.SetStyle (Has no native function)
	void SetStyle(struct FFortChallengePunchCardStyles& PunchStyle); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengePunchCardEntry.SetIsNonsequentialSlot (Has no native function)
	void SetIsNonsequentialSlot(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengePunchCardEntry.SetIsLastSlot (Has no native function)
	void SetIsLastSlot(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengePunchCardEntry.SetIsFirstSlot (Has no native function)
	void SetIsFirstSlot(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengePunchCardEntry.OnPlacedEntry (Has no native function)
	void OnPlacedEntry(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengePunchCardEntry.OnFinishedPlacingEntry (Underlying native function: OnFinishedPlacingEntry 0xa4e26d0)
	void OnFinishedPlacingEntry(); // (Final | Native | Public | BlueprintCallable)
};

