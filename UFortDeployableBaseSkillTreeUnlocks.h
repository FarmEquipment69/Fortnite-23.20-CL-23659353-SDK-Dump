// Class /Script/FortniteGame.FortDeployableBaseSkillTreeUnlocks
// Size: 0x70
class UFortDeployableBaseSkillTreeUnlocks : public UDataAsset
{
	struct TArray<struct FFortTaggedDeployableBasePlotExpansionUnlock> PlotSizeUnlocks; // 0x30 (0x10)
	struct TArray<struct FFortTaggedDeployableBaseLootUnlock*> NeighborhoodLootGrantUnlocks; // 0x40 (0x10)
	struct TArray<struct FFortTaggedDeployableBaseLootUnlock*> CombatZoneStartLootGrantUnlocks; // 0x50 (0x10)
	struct TArray<struct FFortTaggedDeployableBaseLootUnlock*> CombatZoneWaveCompleteLootGrantUnlocks; // 0x60 (0x10)
};

