// Class /Script/KeysAndLocksUI.KeyPlayerInfoWidget
// Size: 0x2f8
class UKeyPlayerInfoWidget : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x8]; // 0x2d0 (0x8) 
	struct FGameplayTag KeyStatusTag; // 0x2d8 (0x4)
	unsigned char padding_2dc[0x1c]; // 0x2dc (0x1c)

	/* Functions */

	// Function /Script/KeysAndLocksUI.KeyPlayerInfoWidget.OnKeyStatusActivated (Has no native function)
	void OnKeyStatusActivated(class AFortPlayerStateAthena*& InPlayerState, bool& bActivated); // (Event | Protected | BlueprintEvent)

	// Function /Script/KeysAndLocksUI.KeyPlayerInfoWidget.HandleGameplayTagEvent (Underlying native function: HandleGameplayTagEvent 0x7477ee0)
	void HandleGameplayTagEvent(struct FGameplayTag& UpdatedTag, int& TagCount); // (Final | Native | Protected)
};

