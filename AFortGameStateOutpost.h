// Class /Script/FortniteGame.FortGameStateOutpost
// Size: 0x1170
class AFortGameStateOutpost : public AFortGameStatePvE
{
	bool bOutpostDefenseActive; // 0x10c8 (0x1)
	bool bWargameActive; // 0x10c9 (0x1)
	enum EStormShieldDefense StormShieldDefenseType; // 0x10ca (0x1)
	bool bOutpostStatusAllowsMissionStart; // 0x10cb (0x1)
	unsigned char unreflected_10cc[0x4]; // 0x10cc (0x4) 
	struct TArray<class UFortRegisteredPlayerInfo*> IronCityEarlyPlayerInfos; // 0x10d0 (0x10)
	int IronCityLowestPlayerAccountLevel; // 0x10e0 (0x4)
	float IronCityMinPowerLevel; // 0x10e4 (0x4)
	float IronCityMaxPowerLevel; // 0x10e8 (0x4)
	unsigned char unreflected_10ec[0x4]; // 0x10ec (0x4) 
	struct FIronCityDifficultyInfo IronCityDifficultyInfo; // 0x10f0 (0x28)
	float PlayerWeaponSkillLevel; // 0x1118 (0x4)
	unsigned char padding_111c[0x54]; // 0x111c (0x54)

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateOutpost.SetGameDifficultyRow (Underlying native function: SetGameDifficultyRow 0x8eac5d8)
	void SetGameDifficultyRow(struct FDataTableRowHandle& GameDifficultyInfo); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateOutpost.OnRep_PlayerWeaponSkillLevel (Underlying native function: OnRep_PlayerWeaponSkillLevel 0x8eac360)
	void OnRepPlayerWeaponSkillLevel(); // (Native | Protected)

	// Function /Script/FortniteGame.FortGameStateOutpost.DoesOutpostStatusAllowMissionStart (Underlying native function: DoesOutpostStatusAllowMissionStart 0x8ea97c8)
	bool DoesOutpostStatusAllowMissionStart(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

