// Class /Script/FortniteUI.UraniumRoundEndWidgetBase
// Size: 0x348
class UUraniumRoundEndWidgetBase : public UUraniumWidgetBase
{
	class UClass* RoundInfoWidgetClass; // 0x330 (0x8)
	class UOverlay* RoundInfoOverlay; // 0x338 (0x8)
	class UPerkIntroScreenWidget* PerkIntroScreenWidget; // 0x340 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.UraniumRoundEndWidgetBase.NativeOnPerkIntroFinished (Underlying native function: NativeOnPerkIntroFinished 0xa5a3a1c)
	void NativeOnPerkIntroFinished(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.UraniumRoundEndWidgetBase.HandleUpdateRoundEndVisibility (Underlying native function: HandleUpdateRoundEndVisibility 0xa5a37d4)
	void HandleUpdateRoundEndVisibility(bool& bNewVisibility); // (Final | Native | Protected)

	// Function /Script/FortniteUI.UraniumRoundEndWidgetBase.HandleShowRoundIntro (Underlying native function: HandleShowRoundIntro 0xa5a3458)
	void HandleShowRoundIntro(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.UraniumRoundEndWidgetBase.AttempShowRoundInfo (Underlying native function: AttempShowRoundInfo 0xa5a2d0c)
	void AttempShowRoundInfo(); // (Final | Native | Protected | BlueprintCallable)
};

