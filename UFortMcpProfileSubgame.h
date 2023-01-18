// Class /Script/FortniteGame.FortMcpProfileSubgame
// Size: 0x3b0
class UFortMcpProfileSubgame : public UFortMcpProfile
{
	unsigned char unreflected_180[0x1e8]; // 0x180 (0x1e8) 
	struct TArray<class UFortCosmeticLockerItem*> LoadoutLockerItems; // 0x368 (0x10)
	class UFortCosmeticLockerItem* LastAppliedLoadout; // 0x378 (0x8)
	struct FFortSubgameClientSettings CachedClientSettings; // 0x380 (0x10)
	unsigned char padding_390[0x20]; // 0x390 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortMcpProfileSubgame.UpdateQuests (Has no native function)
	void UpdateQuests(struct TArray<struct FFortQuestObjectiveCompletion>& Advance, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileSubgame.UpdateQuestClientObjectives (Has no native function)
	void UpdateQuestClientObjectives(struct TArray<struct FFortQuestObjectiveCompletion>& Advance, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileSubgame.SetRandomCosmeticLoadoutFlag (Has no native function)
	void SetRandomCosmeticLoadoutFlag(bool& Random, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileSubgame.SetPinnedQuests (Has no native function)
	void SetPinnedQuests(struct TArray<struct FString>& PinnedQuestIds, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileSubgame.SetItemFavoriteStatusBatch (Has no native function)
	void SetItemFavoriteStatusBatch(struct TArray<struct FString>& ItemIds, struct TArray<bool>& itemFavStatus, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileSubgame.SetItemFavoriteStatus (Has no native function)
	void SetItemFavoriteStatus(struct FString& TargetItemId, bool& bFavorite, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileSubgame.SetItemArchivedStatusBatch (Has no native function)
	void SetItemArchivedStatusBatch(struct TArray<struct FString>& ItemIds, bool& archived, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileSubgame.SetCosmeticLockerSlots (Has no native function)
	void SetCosmeticLockerSlots(struct FString& LockerItem, struct TArray<struct FFortAthenaLoadoutData>& LoadoutData, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileSubgame.SetCosmeticLockerSlot (Has no native function)
	void SetCosmeticLockerSlot(struct FString& LockerItem, enum EAthenaCustomizationCategory& category, struct FString& ItemToSlot, int& SlotIndex, struct TArray<struct FMcpVariantReader>& VariantUpdates, int& OptLockerUseCountOverride, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileSubgame.SetCosmeticLockerName (Has no native function)
	void SetCosmeticLockerName(struct FString& LockerItem, struct FString& Name, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileSubgame.SetCosmeticLockerBanner (Has no native function)
	void SetCosmeticLockerBanner(struct FString& LockerItem, struct FString& BannerIconTemplateName, struct FString& BannerColorTemplateName, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileSubgame.ServerQuestLogin (Has no native function)
	void ServerQuestLogin(struct FString& MatchmakingSessionId, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileSubgame.MarkNewQuestNotificationSent (Has no native function)
	void MarkNewQuestNotificationSent(struct TArray<struct FString>& ItemIds, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileSubgame.FortRerollDailyQuest (Has no native function)
	void FortRerollDailyQuest(struct FString& QuestId, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileSubgame.DeleteCosmeticLoadout (Has no native function)
	void DeleteCosmeticLoadout(int& Index, int& FallbackLoadoutIndex, bool& leaveNullSlot, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileSubgame.CopyCosmeticLoadout (Has no native function)
	void CopyCosmeticLoadout(int& SourceIndex, int& TargetIndex, struct FString& OptNewNameForTarget, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileSubgame.ClientQuestLogin (Has no native function)
	void ClientQuestLogin(struct FString& StreamingAppKey, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileSubgame.ClaimQuestReward (Has no native function)
	void ClaimQuestReward(struct FString& QuestId, int& SelectedRewardIndex, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)
};

