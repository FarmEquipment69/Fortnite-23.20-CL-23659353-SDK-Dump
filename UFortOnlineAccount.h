// Class /Script/FortniteGame.FortOnlineAccount
// Size: 0x960
class UFortOnlineAccount : public UOnlineAccountCommon
{
	unsigned char unreflected_790[0x3a]; // 0x790 (0x3a) 
	bool bEnableEulaCheck; // 0x7ca (0x1)
	bool bShouldAthenaQueryRecentPlayers; // 0x7cb (0x1)
	unsigned char unreflected_7cc[0x1c]; // 0x7cc (0x1c) 
	bool bHadLoginPurchaseCheckFailure; // 0x7e8 (0x1)
	unsigned char unreflected_7e9[0x7]; // 0x7e9 (0x7) 
	struct TArray<struct FString> IgnoreProducts; // 0x7f0 (0x10)
	struct TArray<struct FString> IgnoreReceiptSuffixes; // 0x800 (0x10)
	struct TArray<struct FString> IncludeReceiptSuffixes; // 0x810 (0x10)
	struct TArray<struct FString> ResubmitProducts; // 0x820 (0x10)
	struct TMap<struct FString, struct FRestrictedCountry> RestrictedCountries; // 0x830 (0x50)
	unsigned char unreflected_880[0x4]; // 0x880 (0x4) 
	float EOSAuthRate; // 0x884 (0x4)
	unsigned char unreflected_888[0x31]; // 0x888 (0x31) 
	bool bShouldRefreshOnReactivate; // 0x8b9 (0x1)
	bool bShouldCallPurchaseRedemptionOnApplicationReactivate; // 0x8ba (0x1)
	unsigned char unreflected_8bb[0x5e]; // 0x8bb (0x5e) 
	bool bDisablePurchasingOnRedemptionFailure; // 0x919 (0x1)
	unsigned char unreflected_91a[0x6]; // 0x91a (0x6) 
	double MinimumSecondsBetweenPurchaseRedemptionAttempts; // 0x920 (0x8)
	bool bPromptUserAndReverifyAuthToken; // 0x928 (0x1)
	unsigned char unreflected_929[0x3]; // 0x929 (0x3) 
	float RefreshConnectionTimerDuration; // 0x92c (0x4)
	float RefreshChatPrivilegeOnReactivateTimerDuration; // 0x930 (0x4)
	unsigned char unreflected_934[0x14]; // 0x934 (0x14) 
	struct TArray<struct FString> RealMoneyPurchaseBlockedCountryCodes; // 0x948 (0x10)
	bool bMergePerPlayerEncryptionKeysOnLogin; // 0x958 (0x1)
	unsigned char padding_959[0x7]; // 0x959 (0x7)
};

