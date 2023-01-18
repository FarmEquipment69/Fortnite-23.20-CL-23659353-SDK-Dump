// Class /Script/FortniteUI.FortCreativeStartScreen
// Size: 0x448
class UFortCreativeStartScreen : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x58]; // 0x3a8 (0x58) 
	class AFortMinigame* CurrentMinigame; // 0x400 (0x8)
	class AActor* CurrentContainer; // 0x408 (0x8)
	class UInputComponent* IgnoreToggleInventoryInputComponent; // 0x410 (0x8)
	class UFortCreativeMiniGameInfo* MinigameInfo; // 0x418 (0x8)
	class UFortHoldableButton* HoldableButtonStart; // 0x420 (0x8)
	class UCommonButtonBase* ButtonMoreInfo; // 0x428 (0x8)
	class UWidgetAnimation* BoundAnimStartGame; // 0x430 (0x8)
	unsigned char unreflected_438[0x4]; // 0x438 (0x4) 
	float AutoStartTimerPeriod; // 0x43c (0x4)
	unsigned char padding_440[0x8]; // 0x440 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeStartScreen.IsNewCreativeStartScreenEnabled (Underlying native function: IsNewCreativeStartScreenEnabled 0xa692e34)
	static bool IsNewCreativeStartScreenEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortCreativeStartScreen.HandleVolumeMinigameChanged (Underlying native function: HandleVolumeMinigameChanged 0xa692c1c)
	void HandleVolumeMinigameChanged(class AFortMinigame*& Minigame); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeStartScreen.HandleMinigameStateChanged (Underlying native function: HandleMinigameStateChanged 0xa692400)
	void HandleMinigameStateChanged(class AFortMinigame*& Minigame, enum EFortMinigameState& MinigameState); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeStartScreen.HandleInGameLoadScreenChanged (Underlying native function: HandleInGameLoadScreenChanged 0xa692170)
	void HandleInGameLoadScreenChanged(class AFortPlayerControllerAthena*& PlayerController, bool& bEnableLoadScreen, struct FText& HUDReasonText); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeStartScreen.HandleFullscreenMapToggled (Underlying native function: HandleFullscreenMapToggled 0xa691f6c)
	void HandleFullscreenMapToggled(bool& bMapVisible); // (Final | Native | Private)
};

