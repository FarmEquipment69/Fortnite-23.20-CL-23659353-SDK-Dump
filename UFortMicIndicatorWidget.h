// Class /Script/FortniteUI.FortMicIndicatorWidget
// Size: 0x2c0
class UFortMicIndicatorWidget : public UCommonUserWidget
{
	unsigned char unreflected_2c0[0x2c0]; 

	/* Functions */

	// Function /Script/FortniteUI.FortMicIndicatorWidget.SetPlayerUniqueId (Underlying native function: SetPlayerUniqueId 0xa7021a8)
	void SetPlayerUniqueId(struct FUniqueNetIdRepl& InPlayerUniqueId); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortMicIndicatorWidget.OnPlayerTalkingChanged (Has no native function)
	void OnPlayerTalkingChanged(bool& bIsTalking); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMicIndicatorWidget.OnPlayerMuted (Has no native function)
	void OnPlayerMuted(bool& bIsMuted); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMicIndicatorWidget.OnPlayerMicAvailable (Has no native function)
	void OnPlayerMicAvailable(bool& bIsTalking); // (Event | Protected | BlueprintEvent)
};

