// Class /Script/FortniteGame.FortMcpProfileCreative
// Size: 0x2f0
class UFortMcpProfileCreative : public UFortMcpProfile
{
	unsigned char unreflected_180[0x40]; // 0x180 (0x40) 
	bool bEnablePublishing; // 0x1c0 (0x1)
	bool bRequirePublishingPermissions; // 0x1c1 (0x1)
	unsigned char padding_1c2[0x12e]; // 0x1c2 (0x12e)

	/* Functions */

	// Function /Script/FortniteGame.FortMcpProfileCreative.UpdatePlotPublishInfo (Has no native function)
	void UpdatePlotPublishInfo(struct FString& PlotItemId, struct FString& LinkCode, struct FString& VkProjectId, struct FString& VkModuleId, int& LinkVersion, struct FString& ModerationLinkCode, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCreative.UpdatePlotBuildCode (Has no native function)
	void UpdatePlotBuildCode(struct FString& PlotItemId, struct FString& BuildCode, int& BuildCodeVersion, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCreative.SetLastUsedCreativePlot (Has no native function)
	void SetLastUsedCreativePlot(struct FString& PlotItemId, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCreative.SetCreativePlotMetadata (Has no native function)
	void SetCreativePlotMetadata(struct FString& PlotItemId, struct FString& locale, struct FString& Title, struct FString& Tagline, struct TArray<struct FString>& DescriptionTags, struct FString& Introduction, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCreative.RestoreDeletedIsland (Has no native function)
	void RestoreDeletedIsland(struct FString& PlotItemId, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCreative.ModifyCreativePlotPermissions (Has no native function)
	void ModifyCreativePlotPermissions(struct FString& PlotItemId, enum EFortCreativePlotPermission& Permission, struct TArray<struct FString>& AccountIds, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCreative.DuplicateIsland (Has no native function)
	void DuplicateIsland(struct FString& IslandId, struct FString& locale, struct FString& NewTitle, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCreative.DeleteIsland (Has no native function)
	void DeleteIsland(struct FString& PlotItemId, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCreative.CreateNewIslandFromLinkCode (Has no native function)
	void CreateNewIslandFromLinkCode(struct FString& LinkCode, struct FString& locale, struct FString& Title, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCreative.CreateNewIsland (Has no native function)
	void CreateNewIsland(struct FString& TemplateId, struct FString& locale, struct FString& Title, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCreative.CreateNewBattleLabFile (Has no native function)
	void CreateNewBattleLabFile(struct FString& TemplateId, struct FString& locale, struct FString& Title, struct FDedicatedServerUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)
};

