// Class /Script/FortniteGame.FortMcpProfileCommonCore
// Size: 0x320
class UFortMcpProfileCommonCore : public UFortMcpProfile
{
	unsigned char unreflected_180[0x140]; // 0x180 (0x140) 
	struct FString ListCatalogEntriesUrl; // 0x2c0 (0x10)
	unsigned char unreflected_2d0[0x44]; // 0x2d0 (0x44) 
	int AffiliateExpirationSeconds; // 0x314 (0x4)
	bool bMergePerPlayerEncryptionKeys; // 0x318 (0x1)
	unsigned char padding_319[0x7]; // 0x319 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortMcpProfileCommonCore.TwitchUpdateBroadcasterRegistration (Has no native function)
	void TwitchUpdateBroadcasterRegistration(struct FString& AccessToken, struct FString& ChannelId, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCommonCore.SetReceiveGiftsEnabled (Has no native function)
	void SetReceiveGiftsEnabled(bool& bReceiveGifts, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCommonCore.SetMtxPlatform (Has no native function)
	void SetMtxPlatform(struct FString& NewPlatform, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCommonCore.SetMatchmakingBansViewed (Has no native function)
	void SetMatchmakingBansViewed(struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCommonCore.SetForcedIntroPlayed (Has no native function)
	void SetForcedIntroPlayed(struct FString& ForcedIntroName, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCommonCore.SetAffiliateName (Has no native function)
	void SetAffiliateName(struct FString& AffiliateName, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCommonCore.RefundMtxPurchase (Has no native function)
	void RefundMtxPurchase(struct FString& PurchaseId, bool& QuickReturn, struct FString& GameContext, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCommonCore.PurchaseMultipleCatalogEntries (Has no native function)
	void PurchaseMultipleCatalogEntries(struct TArray<struct FCatalogPurchaseInfo>& PurchaseInfoList, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCommonCore.PurchaseCatalogEntry (Has no native function)
	void PurchaseCatalogEntry(struct FString& OfferId, struct TEnumAsByte<EStoreCurrencyType>& Currency, struct FString& CurrencySubType, int& ExpectedTotalPrice, int& PurchaseQuantity, struct FString& GameContext, struct FString& clientrequestid, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCommonCore.IssueFriendCode (Has no native function)
	void IssueFriendCode(struct FString& CodeTokenType, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCommonCore.CompletePlayerSurvey (Has no native function)
	void CompletePlayerSurvey(struct FString& SurveyID, bool& bUpdateAllSurveysMetadata, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCommonCore.ClearUndoTimeoutForPurchase (Has no native function)
	void ClearUndoTimeoutForPurchase(struct TArray<struct FString>& PurchaseIds, struct FDedicatedServerUrlContext& Context); // (Final | Net | NetReliable | NetRequest | Native | Event | Private | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCommonCore.ClaimMfaEnabled (Has no native function)
	void ClaimMfaEnabled(bool& bClaimForStw, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCommonCore.ClaimImportFriendsReward (Has no native function)
	void ClaimImportFriendsReward(enum ESocialImportPanelPlatform& Network, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCommonCore.CancelOrResumeSubscription (Has no native function)
	void CancelOrResumeSubscription(enum EAppStore& AppStore, struct FString& UniqueSubscriptionId, bool& WillAutoRenew, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)
};

