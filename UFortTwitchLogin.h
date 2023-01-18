// Class /Script/FortniteUI.FortTwitchLogin
// Size: 0x2e0
class UFortTwitchLogin : public UCommonUserWidget
{
	unsigned char unreflected_290[0x20]; // 0x290 (0x20) 
	struct TWeakObjectPtr<class UClass> TwitchLoginModalWidgetClass; // 0x2b0 (0x28)
	class UFortTwitchLoginModalWidget* ActiveLoginModal; // 0x2d8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortTwitchLogin.OnShowLoginError (Has no native function)
	void OnShowLoginError(struct FText& ErrorTitle, struct FText& ErrorMessage); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortTwitchLogin.OnLoginStatusChanged (Has no native function)
	void OnLoginStatusChanged(bool& bLoggedIn, struct FString& AccountName); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortTwitchLogin.OnLoginFlowModalDismissed (Underlying native function: OnLoginFlowModalDismissed 0x735cf90)
	void OnLoginFlowModalDismissed(class UFortTwitchLoginModalWidget*& Modal); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortTwitchLogin.OnLoginFlowModalCreated (Underlying native function: OnLoginFlowModalCreated 0x735cf0c)
	void OnLoginFlowModalCreated(class UFortTwitchLoginModalWidget*& Modal); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortTwitchLogin.OnLinkedTwitchAccountChanged (Has no native function)
	void OnLinkedTwitchAccountChanged(struct FString& AccountName); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortTwitchLogin.Logout (Underlying native function: Logout 0xa848b3c)
	void Logout(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortTwitchLogin.Login (Underlying native function: Login 0xa848b28)
	void Login(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortTwitchLogin.IsLoggedIn (Underlying native function: IsLoggedIn 0xa84844c)
	bool IsLoggedIn(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortTwitchLogin.GetLinkedTwitchAccountName (Underlying native function: GetLinkedTwitchAccountName 0xa8476cc)
	struct FString GetLinkedTwitchAccountName(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortTwitchLogin.GetAccountName (Underlying native function: GetAccountName 0xa846bf0)
	struct FString GetAccountName(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortTwitchLogin.CancelLoginFlow (Underlying native function: CancelLoginFlow 0xa8463d0)
	void CancelLoginFlow(); // (Final | Native | Private | BlueprintCallable)
};

