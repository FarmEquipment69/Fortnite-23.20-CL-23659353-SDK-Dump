// Class /Script/FortniteGame.FortAthenaHUDInfoDataAsset
// Size: 0xd0
class UFortAthenaHUDInfoDataAsset : public UPrimaryDataAsset
{
	struct TMap<unsigned char, struct FFortAthenaTeamHUDInfo> TeamInfo; // 0x30 (0x50)
	struct TMap<struct TEnumAsByte<EFortTeamAffiliation>, struct FFortAthenaTeamHUDInfo> TeamAffiliationInfo; // 0x80 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaHUDInfoDataAsset.FindTeamInfoForTeamAffiliation (Underlying native function: FindTeamInfoForTeamAffiliation 0x82e3058)
	void FindTeamInfoForTeamAffiliation(struct TEnumAsByte<EFortTeamAffiliation>& TeamAffiliation, bool& bOutWasInfoFound, struct FFortAthenaTeamHUDInfo& OutTeamInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaHUDInfoDataAsset.FindTeamInfoForTeam (Underlying native function: FindTeamInfoForTeam 0x82e2ef4)
	void FindTeamInfoForTeam(unsigned char& Team, bool& bOutWasInfoFound, struct FFortAthenaTeamHUDInfo& OutTeamInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

