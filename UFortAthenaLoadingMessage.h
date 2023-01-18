// Class /Script/FortniteUI.FortAthenaLoadingMessage
// Size: 0x268
class UFortAthenaLoadingMessage : public UUserWidget
{

	/* Functions */

	// Function /Script/FortniteUI.FortAthenaLoadingMessage.LoadingScreenStateChanged (Has no native function)
	void LoadingScreenStateChanged(bool& bEnableLoadScreen, struct FText& HUDReasonText); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaLoadingMessage.HandleInGameLoadScreenChanged (Underlying native function: HandleInGameLoadScreenChanged 0xa530e28)
	void HandleInGameLoadScreenChanged(class AFortPlayerControllerAthena*& PlayerController, bool& bEnableLoadScreen, struct FText& HUDReasonText); // (Final | Native | Private)
};

