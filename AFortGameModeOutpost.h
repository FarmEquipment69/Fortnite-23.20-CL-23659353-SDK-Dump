// Class /Script/FortniteGame.FortGameModeOutpost
// Size: 0xcc0
class AFortGameModeOutpost : public AFortGameModePvE
{
	struct TArray<struct FFortItemEntry> OwnerItemRefundCache; // 0xc68 (0x10)
	struct FFortOutpostCoreInfo CurrentCoreInfo; // 0xc78 (0x28)
	bool bSavePlayerBuiltStructuresAtAllTimes; // 0xca0 (0x1)
	unsigned char unreflected_ca1[0x3]; // 0xca1 (0x3) 
	int MinTotalContinuousOneHitResourcesDistributedForForcedSave; // 0xca4 (0x4)
	int MaxContinuousOneHitResourcesDistributedBeforeForcedSave; // 0xca8 (0x4)
	unsigned char unreflected_cac[0xc]; // 0xcac (0xc) 
	bool bEnableLargeScaleDisassemblyForcedSaves; // 0xcb8 (0x1)
	unsigned char unreflected_cb9[0x3]; // 0xcb9 (0x3) 
	bool bEnableUnsupportedStructureDisassembly; // 0xcbc (0x1)
	unsigned char unreflected_cbd[0x2]; // 0xcbd (0x2) 
	bool bCheckNavMeshAvailability; // 0xcbf (0x1)

	/* Functions */

	// Function /Script/FortniteGame.FortGameModeOutpost.DoesOutpostStatusAllowMissionStart (Underlying native function: DoesOutpostStatusAllowMissionStart 0x8ea97a4)
	bool DoesOutpostStatusAllowMissionStart(); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

