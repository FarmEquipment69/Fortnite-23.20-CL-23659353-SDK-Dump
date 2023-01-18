// Class /Script/FortniteGame.FortMcpContext
// Size: 0x460
class UFortMcpContext : public UBlueprintContextBase
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct FMulticastInlineDelegate OnHeroesChanged; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnGiftBoxRemovedDelegate; // 0x48 (0x10)
	struct FMulticastInlineDelegate OnXpBoostChanged; // 0x58 (0x10)
	struct FMulticastInlineDelegate OnFounderGranted; // 0x68 (0x10)
	struct FMulticastInlineDelegate OnDailyRewardTokenGranted; // 0x78 (0x10)
	unsigned char unreflected_88[0x18]; // 0x88 (0x18) 
	struct FMulticastInlineDelegate OnPhoenixXpChanged; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnLocalAccountInfoChanged; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnCurrentlyViewedAccountInfoChanged; // 0xc0 (0x10)
	struct FMcpPrivacySettings PrivacySettings; // 0xd0 (0x2)
	unsigned char unreflected_d2[0x6]; // 0xd2 (0x6) 
	struct FMulticastInlineDelegate OnMissionRewardsOpened; // 0xd8 (0x10)
	struct FMulticastInlineDelegate OnMissionRewardsOpenFailed; // 0xe8 (0x10)
	struct FMulticastInlineDelegate OnMissionAlertRewardsOpened; // 0xf8 (0x10)
	struct FMulticastInlineDelegate OnDifficultyIncreaseRewardsClaimed; // 0x108 (0x10)
	struct FMulticastInlineDelegate OnDifficultyIncreaseRewardsClaimFailed; // 0x118 (0x10)
	struct FMulticastInlineDelegate OnItemCacheRewardsClaimed; // 0x128 (0x10)
	struct FMulticastInlineDelegate OnItemCacheRewardsClaimFailed; // 0x138 (0x10)
	struct FMulticastInlineDelegate OnResourceCollectorClaimed; // 0x148 (0x10)
	struct FMulticastInlineDelegate OnConversionBegin; // 0x158 (0x10)
	struct FMulticastInlineDelegate OnConversionComplete; // 0x168 (0x10)
	struct FMulticastInlineDelegate OnRarityUpgradeBegin; // 0x178 (0x10)
	struct FMulticastInlineDelegate OnRarityUpgradeComplete; // 0x188 (0x10)
	struct FMulticastInlineDelegate OnPromotionComplete; // 0x198 (0x10)
	struct FMulticastInlineDelegate OnTransmogComplete; // 0x1a8 (0x10)
	struct FMulticastInlineDelegate OnTransmogFailed; // 0x1b8 (0x10)
	struct FMulticastInlineDelegate OnRefundBegin; // 0x1c8 (0x10)
	struct FMulticastInlineDelegate OnRefundComplete; // 0x1d8 (0x10)
	struct FMulticastInlineDelegate OnLiveStreamingQuestWindowStarts; // 0x1e8 (0x10)
	struct FMulticastInlineDelegate OnLiveStreamingQuestWindowEnds; // 0x1f8 (0x10)
	struct FMulticastInlineDelegate OnLiveStreamingQuestWindowSelectedViewers; // 0x208 (0x10)
	struct FMulticastInlineDelegate OnOfferPurchaseComplete; // 0x218 (0x10)
	struct FMulticastInlineDelegate OnRealMoneyPurchaseComplete; // 0x228 (0x10)
	unsigned char unreflected_238[0x88]; // 0x238 (0x88) 
	struct TArray<struct FFriendCode> CachedFriendCodes; // 0x2c0 (0x10)
	struct TArray<struct FDelegate> PendingFriendCodeOnCompleteDelegates; // 0x2d0 (0x10)
	unsigned char unreflected_2e0[0x10]; // 0x2e0 (0x10) 
	double MinTimeBetweenFriendCodeRequestsSeconds; // 0x2f0 (0x8)
	struct FText FriendCodeMessageBody; // 0x2f8 (0x18)
	struct TArray<struct FString> EUCountryCodes; // 0x310 (0x10)
	unsigned char unreflected_320[0x68]; // 0x320 (0x68) 
	struct TArray<class UFortGiftBoxItem*> RequestedGiftBoxesToDisplay; // 0x388 (0x10)
	unsigned char unreflected_398[0x70]; // 0x398 (0x70) 
	struct FDelegate DisplayPurchaseWidget; // 0x408 (0xc)
	struct FDelegate DismissPurchaseWidget; // 0x414 (0xc)
	struct FDelegate DisplayLoginWidget; // 0x420 (0xc)
	struct FDelegate DismissLoginWidget; // 0x42c (0xc)
	struct FDelegate DisplayAccountCreationWidget; // 0x438 (0xc)
	struct FDelegate DismissAccountCreationWidget; // 0x444 (0xc)
	unsigned char padding_450[0x10]; // 0x450 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortMcpContext.UpgradeItemRarity (Underlying native function: UpgradeItemRarity 0x8c44fac)
	void UpgradeItemRarity(class UFortItem*& ItemToUpgrade); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.UpdatePrivacySettings (Underlying native function: UpdatePrivacySettings 0x8c44c90)
	void UpdatePrivacySettings(struct FMcpPrivacySettings& NewSettings, struct FDelegate& OnComplete); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.TransmogItem (Underlying native function: TransmogItem 0x8c44bac)
	void TransmogItem(class UFortConversionControlItemDefinition*& ControlKeyItem, struct TArray<class UFortItem*>& ItemsToSacrifice); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.StartExpedition (Underlying native function: StartExpedition 0x8c448c8)
	bool StartExpedition(class UFortExpeditionItem*& Expedition, float& SuccessChance, struct FName& SquadId, float& SquadRating, struct TArray<class UFortItem*>& SlottedSquadItems, struct TArray<int>& SlotIndices, struct TArray<float>& ItemRatingMods, float& GlobalMod); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.ShouldApplyEUText (Underlying native function: ShouldApplyEUText 0x8c448a4)
	bool ShouldApplyEUText(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.SetItemFavoriteStatus (Underlying native function: SetItemFavoriteStatus 0x8c44798)
	void SetItemFavoriteStatus(class UFortAccountItem*& Item, bool& bFavorite, bool& ShouldDeferMarking); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.SetBansViewed (Underlying native function: SetBansViewed 0x8c44700)
	void SetBansViewed(struct FDelegate& OnBanAcknowledged); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.SetAffiliateName (Underlying native function: SetAffiliateName 0x8c443d0)
	void SetAffiliateName(class AFortPlayerController*& FortPC, struct FString& Name, struct FString& SourceName, struct FDelegate& OnAffilateNameSetAcknowledged); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.SendFriendCodePlatformMessage (Underlying native function: SendFriendCodePlatformMessage 0x8c44298)
	void SendFriendCodePlatformMessage(struct FFriendCode& FriendCode, struct FDelegate& OnCompleteDelegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.RemoveGiftBox (Underlying native function: RemoveGiftBox 0x8c44218)
	void RemoveGiftBox(class UFortGiftBoxItem*& GiftBoxToRemove); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.RegisterForEpicPurchasingDisplay (Underlying native function: RegisterForEpicPurchasingDisplay 0x8c44100)
	void RegisterForEpicPurchasingDisplay(struct FDelegate& DisplayCallback, struct FDelegate& DismissCallback); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.RefundItem (Underlying native function: RefundItem 0x8c44080)
	void RefundItem(class UFortAccountItem*& ItemToConvert); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.RecycleItemBatch (Underlying native function: RecycleItemBatch 0x8c43f00)
	void RecycleItemBatch(struct TArray<class UFortItem*>& ItemsToRecycle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.RecycleItem (Underlying native function: RecycleItem 0x8c43e80)
	void RecycleItem(class UFortItem*& ItemToRecycle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.ReadPrivacySettings (Underlying native function: ReadPrivacySettings 0x8c43ddc)
	void ReadPrivacySettings(struct FDelegate& OnComplete); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.QueryUnredeemedFriendCodes (Underlying native function: QueryUnredeemedFriendCodes 0x8c43d38)
	void QueryUnredeemedFriendCodes(struct FDelegate& OnCompleteDelegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.PurchaseRealMoneyCatalogEntry (Underlying native function: PurchaseRealMoneyCatalogEntry 0x8c43af8)
	void PurchaseRealMoneyCatalogEntry(struct FString& OfferId, struct FDelegate& Callback, int& PriceIndex, int& Quantity); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.PurchaseOfferAsGift (Underlying native function: PurchaseOfferAsGift 0x8c435d4)
	enum EOfferPurchaseError PurchaseOfferAsGift(struct FString& OfferId, int& Quantity, int& PriceIndex, struct TArray<struct FString>& ReceiverAccountIds, struct FString& GiftWrapTemplateId, struct FString& UserMessageToRecipients, struct FDelegate& OnComplete, int& ExpectedTotalPrice); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.PurchaseOffer (Underlying native function: PurchaseOffer 0x8c431c8)
	enum EOfferPurchaseError PurchaseOffer(struct FString& OfferId, int& PriceIndex, struct FDelegate& Callback, int& Quantity, int& IndexInSection, bool& bIsIncarousel, int& IndexIncarousel, int& LengthOfCarousel, int& ColumnIndexInSection, int& InnerRowIndexInSection, int& SectionIndex); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.PurchaseMultipleOffers (Underlying native function: PurchaseMultipleOffers 0x8c42f80)
	enum EOfferPurchaseError PurchaseMultipleOffers(struct TMap<struct FString, int>& OfferIdToQuantityMap, struct FDelegate& Callback, int& IndexInSection, int& ColumnIndexInSection, int& InnerRowIndexInSection, int& SectionIndex); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.PurchaseBattlePassOffer (Underlying native function: PurchaseBattlePassOffer 0x8c42e70)
	void PurchaseBattlePassOffer(struct TArray<struct FString>& OfferIdList, struct FDelegate& Callback); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.PromoteItem (Underlying native function: PromoteItem 0x8c42cc8)
	void PromoteItem(class UFortItem*& ItemToPromote); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.OpenMissionRewards (Underlying native function: OpenMissionRewards 0x8c42cb4)
	void OpenMissionRewards(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortMcpContext.OnSendFriendCodePlatformMessageComplete__DelegateSignature (Has no native function)
	void OnSendFriendCodePlatformMessageCompleteDelegateSignature(bool& bMessageSent); // (Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortMcpContext.OnQueryUnredeemedFriendCodesComplete__DelegateSignature (Has no native function)
	void OnQueryUnredeemedFriendCodesCompleteDelegateSignature(bool& bSuccess, struct TArray<struct FFriendCode>& FriendCodes); // (Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteGame.FortMcpContext.OnIssueFriendCodeComplete__DelegateSignature (Has no native function)
	void OnIssueFriendCodeCompleteDelegateSignature(bool& bSuccess, struct FFriendCode& FriendCode); // (Public | Delegate | HasOutParms)

	// Function /Script/FortniteGame.FortMcpContext.MarkItemSeen (Underlying native function: MarkItemSeen 0x8c42c44)
	void MarkItemSeen(class UFortAccountItem*& ItemToMarkSeen); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.IsValid (Underlying native function: IsValid 0x8c42a3c)
	bool IsValid(struct FString& OfferId); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.IsUserOnlyCompetitiveBanned (Underlying native function: IsUserOnlyCompetitiveBanned 0x8c42954)
	bool IsUserOnlyCompetitiveBanned(struct FMcpBanInfo& BanInfo); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.IsUserCurrentlyBanned (Underlying native function: IsUserCurrentlyBanned 0x8c4286c)
	bool IsUserCurrentlyBanned(struct FMcpBanInfo& BanInfo); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.IssueFriendCode (Underlying native function: IssueFriendCode 0x8c42ba0)
	void IssueFriendCode(struct FDelegate& OnCompleteDelegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.IsRealMoneyPurchasePending (Underlying native function: IsRealMoneyPurchasePending 0x8a65118)
	bool IsRealMoneyPurchasePending(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.IsQosProbeDone (Underlying native function: IsQosProbeDone 0x8c42848)
	bool IsQosProbeDone(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.IsPublicFacing (Underlying native function: IsPublicFacing 0x8c42824)
	bool IsPublicFacing(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.IsPendingAccountTransfer (Underlying native function: IsPendingAccountTransfer 0x265f914)
	bool IsPendingAccountTransfer(struct FDateTime*& EstimatedCompletionMax); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.IsOwned (Underlying native function: IsOwned 0x8c426c0)
	bool IsOwned(struct FString& OfferId); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.IsOfferCompletelyFree (Underlying native function: IsOfferCompletelyFree 0x8c424e4)
	bool IsOfferCompletelyFree(struct FString& OfferId, int& PriceIndex, int& Quantity); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.IsLocalPlayersUniqueID (Underlying native function: IsLocalPlayersUniqueID 0x8c42410)
	bool IsLocalPlayersUniqueID(struct FUniqueNetIdRepl& PlayerId); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.IsDailyRewardAvailable (Underlying native function: IsDailyRewardAvailable 0x8c42378)
	bool IsDailyRewardAvailable(int& OutMinutesUntilNextReward); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.IsAllowedConversionIndex (Underlying native function: IsAllowedConversionIndex 0x8c4228c)
	bool IsAllowedConversionIndex(class UFortItem*& ItemToConvert, int& RecipeIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.HasPendingMissionAlertRewards (Underlying native function: HasPendingMissionAlertRewards 0x8c421cc)
	bool HasPendingMissionAlertRewards(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.HasPendingDifficultyIncreaseRewards (Underlying native function: HasPendingDifficultyIncreaseRewards 0x8c421a8)
	bool HasPendingDifficultyIncreaseRewards(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.HasMfaBeenEnabledAtSomePoint (Underlying native function: HasMfaBeenEnabledAtSomePoint 0x8c42144)
	bool HasMfaBeenEnabledAtSomePoint(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.HasEULAWithKeyDownloaded (Underlying native function: HasEULAWithKeyDownloaded 0x8c41fe0)
	bool HasEULAWithKeyDownloaded(struct FString& EulaKey); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.HasEULADownloaded (Underlying native function: HasEULADownloaded 0x8c41fbc)
	bool HasEULADownloaded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GrantPendingMissionAlertRewards (Underlying native function: GrantPendingMissionAlertRewards 0x8c41f10)
	void GrantPendingMissionAlertRewards(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.GrantPendingDifficultyIncreaseRewards (Underlying native function: GrantPendingDifficultyIncreaseRewards 0x8c41efc)
	void GrantPendingDifficultyIncreaseRewards(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.GetXpBoostBalance (Underlying native function: GetXpBoostBalance 0x8c41eac)
	int GetXpBoostBalance(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetUpgradeXPBalance (Underlying native function: GetUpgradeXPBalance 0x8c41e20)
	int GetUpgradeXPBalance(enum EFortItemType& ItemTypeToBeUpgraded); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetTencentIdString (Underlying native function: GetTencentIdString 0x8c41dac)
	struct FString GetTencentIdString(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetSchematicXpBalance (Underlying native function: GetSchematicXpBalance 0x8c41d5c)
	int GetSchematicXpBalance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetRestXpBonusPercent (Underlying native function: GetRestXpBonusPercent 0x8c41d1c)
	int GetRestXpBonusPercent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetRestXpBalance (Underlying native function: GetRestXpBalance 0x8c41cf8)
	int GetRestXpBalance(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetReceivesMTXCurrency (Underlying native function: GetReceivesMTXCurrency 0x8c41cb0)
	bool GetReceivesMTXCurrency(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.GetPlayersXPPercentContributionToLocalPlayer (Underlying native function: GetPlayersXPPercentContributionToLocalPlayer 0x8c41bdc)
	int GetPlayersXPPercentContributionToLocalPlayer(struct FUniqueNetIdRepl& PlayerId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetPhoenixXpToNextLevel (Underlying native function: GetPhoenixXpToNextLevel 0x8c41b8c)
	int GetPhoenixXpToNextLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetPhoenixLevelProgressRatio (Underlying native function: GetPhoenixLevelProgressRatio 0x8c41b64)
	float GetPhoenixLevelProgressRatio(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetPersonnelXpBalance (Underlying native function: GetPersonnelXpBalance 0x8c41b14)
	int GetPersonnelXpBalance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetPersonalXpBonusPercent (Underlying native function: GetPersonalXpBonusPercent 0x8c41ad4)
	int GetPersonalXpBonusPercent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetPendingItemCacheRewards (Underlying native function: GetPendingItemCacheRewards 0x8c41a18)
	void GetPendingItemCacheRewards(struct TArray<class UFortItem*>& OutItemCacheRewards); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetNumFriendCodesToIssue (Underlying native function: GetNumFriendCodesToIssue 0x8c418b4)
	int GetNumFriendCodesToIssue(struct FString& CodeType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetNextMessage (Underlying native function: GetNextMessage 0x8c41890)
	class UFortGiftBoxItem* GetNextMessage(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetNextGiftBox (Underlying native function: GetNextGiftBox 0x8c4186c)
	class UFortGiftBoxItem* GetNextGiftBox(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetMcpProfile (Underlying native function: GetMcpProfile 0x8c41830)
	class UFortMcpProfileCampaign* GetMcpProfile(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetMaxPhoenixLevel (Underlying native function: GetMaxPhoenixLevel 0x8c417fc)
	int GetMaxPhoenixLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetMaxAccountLevel (Underlying native function: GetMaxAccountLevel 0x8c417c8)
	int GetMaxAccountLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetLocalAccountInfo (Underlying native function: GetLocalAccountInfo 0x8c41720)
	void GetLocalAccountInfo(struct FFortPrivateAccountInfo& Result); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetLoadoutProfile (Underlying native function: GetLoadoutProfile 0x8c416fc)
	class UFortMcpProfileSubgame* GetLoadoutProfile(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetLoadoutForPlayer (Underlying native function: GetLoadoutForPlayer 0x8c415b4)
	struct FFortAthenaLoadout GetLoadoutForPlayer(struct FUniqueNetIdRepl& MemberUniqueId); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetHomeBaseInfoForPlayer (Underlying native function: GetHomeBaseInfoForPlayer 0x8c4147c)
	void GetHomeBaseInfoForPlayer(struct FFortHomeBaseInfo& Result, struct FUniqueNetIdRepl& MemberUniqueId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetHomeBaseInfo (Underlying native function: GetHomeBaseInfo 0x8c413e0)
	void GetHomeBaseInfo(struct FFortHomeBaseInfo& Result); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetHeroXpBalance (Underlying native function: GetHeroXpBalance 0x8c41390)
	int GetHeroXpBalance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetGroupXpBonusPercent (Underlying native function: GetGroupXpBonusPercent 0x8c41350)
	int GetGroupXpBonusPercent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetFriendCodeDisplayName (Underlying native function: GetFriendCodeDisplayName 0x8c411c0)
	struct FText GetFriendCodeDisplayName(struct FFriendCode& FriendCode); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMcpContext.GetFriendCodeDescription (Underlying native function: GetFriendCodeDescription 0x8c410a0)
	struct FText GetFriendCodeDescription(struct FFriendCode& FriendCode); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMcpContext.GetEULAText (Underlying native function: GetEULAText 0x8c41024)
	struct FText GetEULAText(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetDefaultHero (Underlying native function: GetDefaultHero 0x8c40fdc)
	class UFortHero* GetDefaultHero(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetCurrentPhoenixXp (Underlying native function: GetCurrentPhoenixXp 0x8c40f10)
	int GetCurrentPhoenixXp(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetCurrentPhoenixLevel (Underlying native function: GetCurrentPhoenixLevel 0x8c40eec)
	int GetCurrentPhoenixLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetCurrentlyViewedAccountInfo (Underlying native function: GetCurrentlyViewedAccountInfo 0x8c40f34)
	void GetCurrentlyViewedAccountInfo(struct FFortPublicAccountInfo& Result); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetCreativeProfile (Underlying native function: GetCreativeProfile 0x8c40eb0)
	class UFortMcpProfileCreative* GetCreativeProfile(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetCommonPublicMcpProfile (Underlying native function: GetCommonPublicMcpProfile 0x8c40e74)
	class UFortMcpProfileCommonPublic* GetCommonPublicMcpProfile(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetCommonCoreMcpProfile (Underlying native function: GetCommonCoreMcpProfile 0x8c40e38)
	class UFortMcpProfileCommonCore* GetCommonCoreMcpProfile(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetCampaignLoadoutForPlayer (Underlying native function: GetCampaignLoadoutForPlayer 0x8c40d64)
	struct FFortCampaignLoadout* GetCampaignLoadoutForPlayer(struct FUniqueNetIdRepl& MemberUniqueId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetBanInfo (Underlying native function: GetBanInfo 0x8c40d38)
	struct FMcpBanInfo GetBanInfo(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetBanDuration (Underlying native function: GetBanDuration 0x8c40c44)
	struct FTimespan* GetBanDuration(struct FMcpBanInfo& BanInfo); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetAthenaProfile (Underlying native function: GetAthenaProfile 0x276de7c)
	class UFortMcpProfileAthena* GetAthenaProfile(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetAllResourceCollectors (Underlying native function: GetAllResourceCollectors 0x8c40ae8)
	void GetAllResourceCollectors(struct TArray<class UFortCollectedResourceItem*>& ResourceCollectorsOwned); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.GetAllHeroes (Underlying native function: GetAllHeroes 0x8c40a28)
	void GetAllHeroes(struct TArray<class UFortHero*>& Result); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetAllAlterations (Underlying native function: GetAllAlterations 0x8c40878)
	void GetAllAlterations(struct TArray<class UFortAlterationItem*>& OutAlterations, struct TEnumAsByte<EFortAlteration>& InAlterationType); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetAffiliateName (Underlying native function: GetAffiliateName 0x8c4073c)
	struct FString GetAffiliateName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetAffiliateId (Underlying native function: GetAffiliateId 0x8c40600)
	struct FString GetAffiliateId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.GetAccountItemWithDefinition (Underlying native function: GetAccountItemWithDefinition 0x8c4050c)
	class UFortAccountItem* GetAccountItemWithDefinition(class UFortAccountItemDefinition*& AccountItemDefinition); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.DownloadEULAWithKey (Underlying native function: DownloadEULAWithKey 0x8c40360)
	void DownloadEULAWithKey(struct FDelegate& OnCompleteDelegate, struct FString& Key); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.DownloadEULA (Underlying native function: DownloadEULA 0x8c402c8)
	void DownloadEULA(struct FDelegate& OnCompleteDelegate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.DoesPlatformSupportFriendCodes (Underlying native function: DoesPlatformSupportFriendCodes 0x8c40284)
	bool DoesPlatformSupportFriendCodes(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.DisplayEmptyStoreDialog (Underlying native function: DisplayEmptyStoreDialog 0x8c40270)
	void DisplayEmptyStoreDialog(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortMcpContext.ConvertItem (Underlying native function: ConvertItem 0x8c401ac)
	void ConvertItem(class UFortItem*& ItemToConvert, int& RecipeIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.CollectExpedition (Underlying native function: CollectExpedition 0x8c3feac)
	void CollectExpedition(class UFortExpeditionItem*& Expedition); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.ClaimResourceCollectors (Underlying native function: ClaimResourceCollectors 0x8c3fd50)
	void ClaimResourceCollectors(struct TArray<class UFortCollectedResourceItem*>& CollectorTypes); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.ClaimItemCacheReward (Underlying native function: ClaimItemCacheReward 0x8c3fcd0)
	void ClaimItemCacheReward(class UFortItem*& ItemCache); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.ClaimAllResourceCollectors (Underlying native function: ClaimAllResourceCollectors 0x8c3fcbc)
	void ClaimAllResourceCollectors(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.CheckAffiliateName (Underlying native function: CheckAffiliateName 0x8c3fb10)
	void CheckAffiliateName(struct FString& AffiliateName, struct FDelegate& OnCheckAffiliateNameComplete); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.CanPurchaseOffer (Underlying native function: CanPurchaseOffer 0x8c3f920)
	enum EOfferPurchaseError CanPurchaseOffer(struct FString& OfferId, int& PriceIndex, int& Quantity); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.CanGiftOffer (Underlying native function: CanGiftOffer 0x8c3f4e4)
	enum EOfferPurchaseError CanGiftOffer(struct FString& OfferId, struct TArray<struct FString>& ReceiverAccountIds, struct FString& GiftWrapTemplateId, struct FString& UserMessageToRecipients, int& PriceIndex); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpContext.CancelEpicPurchasingDisplay (Underlying native function: CancelEpicPurchasingDisplay 0x8c3fafc)
	void CancelEpicPurchasingDisplay(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.AreMissionRewardsAvailable (Underlying native function: AreMissionRewardsAvailable 0x8c3f4c0)
	bool AreMissionRewardsAvailable(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.ApplyAlteration (Underlying native function: ApplyAlteration 0x8c3f1f4)
	void ApplyAlteration(class UFortAlterableItem*& Item, class UFortAlterationItem*& AlterationToApply); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpContext.AbandonExpedition (Underlying native function: AbandonExpedition 0x8c3ef5c)
	void AbandonExpedition(class UFortExpeditionItem*& Expedition); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

