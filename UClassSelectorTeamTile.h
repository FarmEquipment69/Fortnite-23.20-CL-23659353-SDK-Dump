// Class /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile
// Size: 0x14d0
class UClassSelectorTeamTile : public UCreativeClassSelectorButton
{
	unsigned char unreflected_1420[0x90]; // 0x1420 (0x90) 
	class UTextBlock* PlayerCount; // 0x14b0 (0x8)
	class UCommonLazyImage* TeamIconImage; // 0x14b8 (0x8)
	unsigned char padding_14c0[0x10]; // 0x14c0 (0x10)

	/* Functions */

	// Function /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamSet (Has no native function)
	void OnTeamSet(struct FMinigameTeam& NewTeamData); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamIconSet (Has no native function)
	void OnTeamIconSet(struct FCreativeIconOption& NewTeamIcon); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamColorIndexSet (Has no native function)
	void OnTeamColorIndexSet(int& TeamColorIndex); // (Event | Public | BlueprintEvent)

	// Function /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile.OnPlayerCountSet (Has no native function)
	void OnPlayerCountSet(int& NewPlayerCount); // (Event | Public | BlueprintEvent)
};

