// Class /Script/FortniteUI.AthenaSpatialScreen
// Size: 0x438
class UAthenaSpatialScreen : public UCommonActivatableWidget
{
	bool bEnableSpatialInputPreprocessing; // 0x3a8 (0x1)
	bool bEnableAnalytics; // 0x3a9 (0x1)
	unsigned char unreflected_3aa[0x2]; // 0x3aa (0x2) 
	struct FGameplayTag OverrideScreenTag; // 0x3ac (0x4)
	class UCommonButtonLegacy* ButtonBack; // 0x3b0 (0x8)
	struct FGameplayTag ScreenTag; // 0x3b8 (0x4)
	unsigned char unreflected_3bc[0x4]; // 0x3bc (0x4) 
	class UCommonButtonLegacy* ButtonCloseMobile; // 0x3c0 (0x8)
	bool bNeedsBottomBar; // 0x3c8 (0x1)
	unsigned char padding_3c9[0x6f]; // 0x3c9 (0x6f)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpatialScreen.OnInputSuspensionChanged (Underlying native function: OnInputSuspensionChanged 0x1d01d9c)
	void OnInputSuspensionChanged(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpatialScreen.FireSpatialScreenAnalytic (Underlying native function: FireSpatialScreenAnalytic 0xa7c2d94)
	void FireSpatialScreenAnalytic(struct FString& Interaction); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaSpatialScreen.AddSpatialScreenSessionCounter (Underlying native function: AddSpatialScreenSessionCounter 0xa7c2bcc)
	void AddSpatialScreenSessionCounter(struct FString& Entry, int& Count); // (Final | Native | Protected | BlueprintCallable)
};

