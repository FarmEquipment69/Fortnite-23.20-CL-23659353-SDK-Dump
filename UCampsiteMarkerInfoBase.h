// Class /Script/CampsiteUI.CampsiteMarkerInfoBase
// Size: 0x2a0
class UCampsiteMarkerInfoBase : public UCommonUserWidget
{
	struct TWeakObjectPtr<class AFortPlayerStateAthena> WeakPSA; // 0x290 (0x8)
	class UCommonTextBlock* TextPlayerName; // 0x298 (0x8)

	/* Functions */

	// Function /Script/CampsiteUI.CampsiteMarkerInfoBase.SetPlayerState (Underlying native function: SetPlayerState 0x72a4eb8)
	void SetPlayerState(class AFortPlayerStateAthena*& InPlayerState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CampsiteUI.CampsiteMarkerInfoBase.OnSetPlayerState (Has no native function)
	void OnSetPlayerState(class AFortPlayerStateAthena*& PSA); // (Event | Protected | BlueprintEvent)
};

