// Class /Script/FortniteUI.MashBossBattleWidget
// Size: 0x340
class UMashBossBattleWidget : public ULTMWidgetBase
{
	class AFortAthenaMutator_Mash* MashMutatorRef; // 0x328 (0x8)
	float CurrentBossHealth; // 0x330 (0x4)
	float TotalBossHealth; // 0x334 (0x4)
	float BossHealthRatio; // 0x338 (0x4)
	unsigned char padding_33c[0x4]; // 0x33c (0x4)

	/* Functions */

	// Function /Script/FortniteUI.MashBossBattleWidget.UpdateBossBattle (Underlying native function: UpdateBossBattle 0xa58062c)
	void UpdateBossBattle(struct FMashBossHealthShieldData& BossHealthShieldData); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.MashBossBattleWidget.OnBossHealthUpdate (Has no native function)
	void OnBossHealthUpdate(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.MashBossBattleWidget.OnBossFightStarted (Has no native function)
	void OnBossFightStarted(); // (Event | Public | BlueprintEvent)
};

