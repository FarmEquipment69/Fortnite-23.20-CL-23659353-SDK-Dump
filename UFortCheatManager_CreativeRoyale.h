// Class /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale
// Size: 0x48
class UFortCheatManager_CreativeRoyale : public UFortCheatManager_Coupled
{
	class UFortCreativeRealEstatePlotItemDefinition* CreativeRoyaleEditPlotDefinition; // 0x38 (0x8)
	struct FGameplayTag CreativeRoyaleVolumeTag; // 0x40 (0x4)
	unsigned char padding_44[0x4]; // 0x44 (0x4)

	/* Functions */

	// Function /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.TeleportToPlotAferLoad (Underlying native function: TeleportToPlotAferLoad 0x7306b30)
	void TeleportToPlotAferLoad(); // (Final | Native | Protected | Const)

	// Function /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleTeleportToEditZone (Underlying native function: CreativeRoyaleTeleportToEditZone 0x26daa0c)
	void CreativeRoyaleTeleportToEditZone(); // (Final | Exec | Native | Public | Const)

	// Function /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleResetIslandFile (Underlying native function: CreativeRoyaleResetIslandFile 0x730635c)
	void CreativeRoyaleResetIslandFile(); // (Final | Exec | Native | Public | Const)

	// Function /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleLoadEditPlot (Underlying native function: CreativeRoyaleLoadEditPlot 0x26daa0c)
	void CreativeRoyaleLoadEditPlot(); // (Final | Exec | Native | Public | Const)
};

