// Class /Script/Engine.TwitterIntegrationBase
// Size: 0x38
class UTwitterIntegrationBase : public UPlatformInterfaceBase
{

	/* Functions */

	// Function /Script/Engine.TwitterIntegrationBase.TwitterRequest (Underlying native function: TwitterRequest 0x9c20d20)
	bool TwitterRequest(struct FString& URL, struct TArray<struct FString>& ParamKeysAndValues, struct TEnumAsByte<ETwitterRequestMethod>& RequestMethod, int& AccountIndex); // (Native | Public | HasOutParms)

	// Function /Script/Engine.TwitterIntegrationBase.ShowTweetUI (Underlying native function: ShowTweetUI 0x9c209a4)
	bool ShowTweetUI(struct FString& InitialMessage, struct FString& URL, struct FString& Picture); // (Native | Public)

	// Function /Script/Engine.TwitterIntegrationBase.Init (Underlying native function: Init 0xfb0c9c)
	void Init(); // (Native | Public)

	// Function /Script/Engine.TwitterIntegrationBase.GetNumAccounts (Underlying native function: GetNumAccounts 0x9c1f884)
	int GetNumAccounts(); // (Native | Public)

	// Function /Script/Engine.TwitterIntegrationBase.GetAccountName (Underlying native function: GetAccountName 0x9c1f798)
	struct FString GetAccountName(int& AccountIndex); // (Native | Public)

	// Function /Script/Engine.TwitterIntegrationBase.CanShowTweetUI (Underlying native function: CanShowTweetUI 0x18f39fc)
	bool CanShowTweetUI(); // (Native | Public)

	// Function /Script/Engine.TwitterIntegrationBase.AuthorizeAccounts (Underlying native function: AuthorizeAccounts 0x8a64d0c)
	bool AuthorizeAccounts(); // (Native | Public)
};

