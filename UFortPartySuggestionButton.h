// Class /Script/FortniteUI.FortPartySuggestionButton
// Size: 0x1470
class UFortPartySuggestionButton : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x18]; // 0x1430 (0x18) 
	class UImage* ImagePartySize; // 0x1448 (0x8)
	class UFortSocialNameTextBlock* TextSocialName; // 0x1450 (0x8)
	class UCommonTextBlock* TextDescription; // 0x1458 (0x8)
	class UCommonTextBlock* TextActionText; // 0x1460 (0x8)
	unsigned char padding_1468[0x8]; // 0x1468 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPartySuggestionButton.UpdateDisplayInfo (Underlying native function: UpdateDisplayInfo 0xa73e014)
	void UpdateDisplayInfo(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPartySuggestionButton.OnSuggestionChanged (Has no native function)
	void OnSuggestionChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPartySuggestionButton.OnSuggestionAccepted (Has no native function)
	void OnSuggestionAccepted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPartySuggestionButton.OnNewSuggestionAdded (Has no native function)
	void OnNewSuggestionAdded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPartySuggestionButton.OnDisplayInfoUpdated (Has no native function)
	void OnDisplayInfoUpdated(bool& bIsInvited, bool& bIsPlaying); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPartySuggestionButton.OnDismissSuggestion (Has no native function)
	void OnDismissSuggestion(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPartySuggestionButton.HandleSuggestionAccepted (Underlying native function: HandleSuggestionAccepted 0xa73d2b0)
	void HandleSuggestionAccepted(int& PlayerId); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortPartySuggestionButton.HandleLobbyStarted (Underlying native function: HandleLobbyStarted 0xa73cc6c)
	void HandleLobbyStarted(); // (Final | Native | Private)
};

