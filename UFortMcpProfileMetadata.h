// Class /Script/FortniteGame.FortMcpProfileMetadata
// Size: 0x180
class UFortMcpProfileMetadata : public UFortMcpProfile
{

	/* Functions */

	// Function /Script/FortniteGame.FortMcpProfileMetadata.UpdateOutpostCore (Has no native function)
	void UpdateOutpostCore(struct FString& CoreId, struct FFortOutpostCoreInfo& CoreInfo, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileMetadata.UpdateDeployableBaseTierProgression (Has no native function)
	void UpdateDeployableBaseTierProgression(struct FString& DeployableBaseItemId, struct FString& ProgressionLayoutGuid, int& TierDefeated, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileMetadata.CreateOrUpgradeOutpostItem (Has no native function)
	void CreateOrUpgradeOutpostItem(struct FString& TemplateId, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileMetadata.CreateDeployableBaseItem (Has no native function)
	void CreateDeployableBaseItem(struct FString& TemplateId, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)
};

