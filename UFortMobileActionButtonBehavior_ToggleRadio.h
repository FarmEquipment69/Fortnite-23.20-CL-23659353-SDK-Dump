// Class /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
// Size: 0x120
class UFortMobileActionButtonBehavior_ToggleRadio : public UFortMobileActionButtonBehavior
{
	class UPaperSprite* ToggleRadioOffSprite; // 0x110 (0x8)
	unsigned char padding_118[0x8]; // 0x118 (0x8)

	/* Functions */

	// Function /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioStopped (Underlying native function: HandleRadioStopped 0x75495b8)
	void HandleRadioStopped(class UStreamingRadioPlayerComponent*& Radio, struct FAthenaRadioStation& Source); // (Final | Native | Private)

	// Function /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioPlaying (Underlying native function: HandleRadioPlaying 0x75494b8)
	void HandleRadioPlaying(class UStreamingRadioPlayerComponent*& Radio, struct FAthenaRadioStation& Source); // (Final | Native | Private)
};

