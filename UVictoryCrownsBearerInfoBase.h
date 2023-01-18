// Class /Script/VictoryCrownsUI.VictoryCrownsBearerInfoBase
// Size: 0x2a0
class UVictoryCrownsBearerInfoBase : public UCommonUserWidget
{
	struct TWeakObjectPtr<class AFortPlayerStateAthena> WeakPSA; // 0x290 (0x8)
	class UCommonTextBlock* TextPlayerName; // 0x298 (0x8)

	/* Functions */

	// Function /Script/VictoryCrownsUI.VictoryCrownsBearerInfoBase.SetPlayerState (Underlying native function: SetPlayerState 0x77c5f84)
	void SetPlayerState(class AFortPlayerStateAthena*& InPlayerState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VictoryCrownsUI.VictoryCrownsBearerInfoBase.OnSetPlayerState (Has no native function)
	void OnSetPlayerState(class AFortPlayerStateAthena*& PSA); // (Event | Protected | BlueprintEvent)
};

