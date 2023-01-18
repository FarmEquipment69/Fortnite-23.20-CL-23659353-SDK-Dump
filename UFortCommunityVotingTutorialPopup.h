// Class /Script/FortniteUI.FortCommunityVotingTutorialPopup
// Size: 0x588
class UFortCommunityVotingTutorialPopup : public UFortActivatablePanel
{
	int NumberOfSlide; // 0x518 (0x4)
	float DelayBetweenSlide; // 0x51c (0x4)
	float DelayOutAnimation; // 0x520 (0x4)
	unsigned char unreflected_524[0x4]; // 0x524 (0x4) 
	struct FDataTableRowHandle ButtonNextInputAction; // 0x528 (0x10)
	struct FDataTableRowHandle ButtonCloseInputAction; // 0x538 (0x10)
	unsigned char unreflected_548[0x28]; // 0x548 (0x28) 
	class UCommonButtonLegacy* ButtonNextStep; // 0x570 (0x8)
	class UCommonButtonLegacy* ButtonClose; // 0x578 (0x8)
	class UCommonWidgetSwitcherLegacy* ButtonsSwitcher; // 0x580 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCommunityVotingTutorialPopup.PlayTutorialAnimation (Has no native function)
	void PlayTutorialAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingTutorialPopup.PlayOutSlideAnimation (Has no native function)
	void PlayOutSlideAnimation(int& Index); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingTutorialPopup.PlayInSlideAnimation (Has no native function)
	void PlayInSlideAnimation(int& Index); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingTutorialPopup.OnSlideAnimationFinished (Underlying native function: OnSlideAnimationFinished 0xa57fdc0)
	void OnSlideAnimationFinished(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCommunityVotingTutorialPopup.CloseTutorial (Underlying native function: CloseTutorial 0x6a4a708)
	void CloseTutorial(); // (Final | Native | Public | BlueprintCallable)
};

