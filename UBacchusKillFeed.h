// Class /Script/FortniteUI.BacchusKillFeed
// Size: 0x3c0
class UBacchusKillFeed : public UBacchusHUDElement
{
	unsigned char unreflected_318[0x40]; // 0x318 (0x40) 
	class USizeBox* MainSizeBox; // 0x358 (0x8)
	struct TWeakObjectPtr<class UImage> FireImageRef; // 0x360 (0x28)
	struct FVector2D FireImageAbsoluteOffset; // 0x388 (0x10)
	struct FText ShowAllTimeTimePropertyName; // 0x398 (0x18)
	int NumberOfActiveLines; // 0x3b0 (0x4)
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x3b4 (0x2)
	unsigned char unreflected_3b6[0x2]; // 0x3b6 (0x2) 
	struct FGameplayTag NumberOfKillfeedLinesTag; // 0x3b8 (0x4)
	unsigned char padding_3bc[0x4]; // 0x3bc (0x4)

	/* Functions */

	// Function /Script/FortniteUI.BacchusKillFeed.SetActiveNumberOfLines (Underlying native function: SetActiveNumberOfLines 0xa5a41fc)
	void SetActiveNumberOfLines(float& numberOfLines); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.BacchusKillFeed.OnStompFailed (Has no native function)
	void OnStompFailed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BacchusKillFeed.OnStompedByOtherWidget (Has no native function)
	void OnStompedByOtherWidget(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BacchusKillFeed.K2_OnBecomeInactive (Has no native function)
	void K2OnBecomeInactive(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BacchusKillFeed.K2_OnBecomeActive (Has no native function)
	void K2OnBecomeActive(); // (Event | Protected | BlueprintEvent)
};

