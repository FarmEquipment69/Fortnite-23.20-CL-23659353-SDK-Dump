// Class /Script/FortniteGame.FortPlayerAttrSet
// Size: 0x4d0
class UFortPlayerAttrSet : public UFortAttributeSet
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct FFortGameplayAttributeData Stamina; // 0x38 (0x28)
	struct FFortGameplayAttributeData StaminaRegenRate; // 0x60 (0x28)
	struct FFortGameplayAttributeData StaminaRegenDelay; // 0x88 (0x28)
	struct FFortGameplayAttributeData MaxStamina; // 0xb0 (0x28)
	struct FFortGameplayAttributeData StaminaCost; // 0xd8 (0x28)
	struct FFortGameplayAttributeData SprintCost; // 0x100 (0x28)
	unsigned char unreflected_128[0x8]; // 0x128 (0x8) 
	struct FFortGameplayAttributeData ItemRegenMaxStack; // 0x130 (0x28)
	struct FFortGameplayAttributeData ItemRegenCooldown; // 0x158 (0x28)
	struct FFortGameplayAttributeData ItemMaxStack; // 0x180 (0x28)
	struct FFortGameplayAttributeData DoubleLootRollChance; // 0x1a8 (0x28)
	struct FFortGameplayAttributeData DoubleItemLootChance; // 0x1d0 (0x28)
	struct FFortGameplayAttributeData DoubleCraftChance; // 0x1f8 (0x28)
	struct FFortGameplayAttributeData CraftingTimeMultiplier; // 0x220 (0x28)
	struct FFortGameplayAttributeData CraftItemLevelBonusMin; // 0x248 (0x28)
	struct FFortGameplayAttributeData CraftItemLevelBonusMax; // 0x270 (0x28)
	struct FFortGameplayAttributeData ResourceHarvesting; // 0x298 (0x28)
	struct FFortGameplayAttributeData HarvestingTool; // 0x2c0 (0x28)
	struct FFortGameplayAttributeData ExtraLives; // 0x2e8 (0x28)
	struct FFortGameplayAttributeData ResurrectTeammateDuration; // 0x310 (0x28)
	struct FFortGameplayAttributeData FortitudeTeam; // 0x338 (0x28)
	struct FFortGameplayAttributeData OffenseTeam; // 0x360 (0x28)
	struct FFortGameplayAttributeData TechTeam; // 0x388 (0x28)
	struct FFortGameplayAttributeData ResistanceTeam; // 0x3b0 (0x28)
	struct FFortGameplayAttributeData TurboBuildFirstInterval; // 0x3d8 (0x28)
	struct FFortGameplayAttributeData TurboBuildInterval; // 0x400 (0x28)
	struct FFortGameplayAttributeData BuildSpeedModifier; // 0x428 (0x28)
	struct FFortGameplayAttributeData BuildCostModifier; // 0x450 (0x28)
	struct FFortGameplayAttributeData ActiveEffectDuration; // 0x478 (0x28)
	unsigned char padding_4a0[0x30]; // 0x4a0 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_Tech_Team (Underlying native function: OnRep_Tech_Team 0x85a88d8)
	void OnRepTechTeam(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_StaminaRegenRate (Underlying native function: OnRep_StaminaRegenRate 0x85a8410)
	void OnRepStaminaRegenRate(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_StaminaRegenDelay (Underlying native function: OnRep_StaminaRegenDelay 0x85a8344)
	void OnRepStaminaRegenDelay(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_StaminaCost (Underlying native function: OnRep_StaminaCost 0x85a8278)
	void OnRepStaminaCost(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_Stamina (Underlying native function: OnRep_Stamina 0x85a81ac)
	void OnRepStamina(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_SprintCost (Underlying native function: OnRep_SprintCost 0x85a80e0)
	void OnRepSprintCost(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_ResurrectTeammateDuration (Underlying native function: OnRep_ResurrectTeammateDuration 0x85a7e7c)
	void OnRepResurrectTeammateDuration(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_ResourceHarvesting (Underlying native function: OnRep_ResourceHarvesting 0x85a7db0)
	void OnRepResourceHarvesting(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_Resistance_Team (Underlying native function: OnRep_Resistance_Team 0x85a7ce4)
	void OnRepResistanceTeam(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_Offense_Team (Underlying native function: OnRep_Offense_Team 0x85a7354)
	void OnRepOffenseTeam(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_MaxStamina (Underlying native function: OnRep_MaxStamina 0x85a71bc)
	void OnRepMaxStamina(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_ItemRegenMaxStack (Underlying native function: OnRep_ItemRegenMaxStack 0x85a5dd0)
	void OnRepItemRegenMaxStack(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_ItemRegenCooldown (Underlying native function: OnRep_ItemRegenCooldown 0x85a5d04)
	void OnRepItemRegenCooldown(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_ItemMaxStack (Underlying native function: OnRep_ItemMaxStack 0x85a5c38)
	void OnRepItemMaxStack(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_HarvestingTool (Underlying native function: OnRep_HarvestingTool 0x85a59d4)
	void OnRepHarvestingTool(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_Fortitude_Team (Underlying native function: OnRep_Fortitude_Team 0x85a56a4)
	void OnRepFortitudeTeam(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_ExtraLives (Underlying native function: OnRep_ExtraLives 0x85a550c)
	void OnRepExtraLives(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_DoubleLootRollChance (Underlying native function: OnRep_DoubleLootRollChance 0x85a542c)
	void OnRepDoubleLootRollChance(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_DoubleItemLootChance (Underlying native function: OnRep_DoubleItemLootChance 0x85a5360)
	void OnRepDoubleItemLootChance(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_DoubleCraftChance (Underlying native function: OnRep_DoubleCraftChance 0x85a5294)
	void OnRepDoubleCraftChance(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_CraftItemLevelBonusMin (Underlying native function: OnRep_CraftItemLevelBonusMin 0x85a4f64)
	void OnRepCraftItemLevelBonusMin(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_CraftItemLevelBonusMax (Underlying native function: OnRep_CraftItemLevelBonusMax 0x85a4e98)
	void OnRepCraftItemLevelBonusMax(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_CraftingTimeMultiplier (Underlying native function: OnRep_CraftingTimeMultiplier 0x20beaa0)
	void OnRepCraftingTimeMultiplier(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_BuildSpeedModifier (Underlying native function: OnRep_BuildSpeedModifier 0x85a443c)
	void OnRepBuildSpeedModifier(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerAttrSet.OnRep_BuildCostModifier (Underlying native function: OnRep_BuildCostModifier 0x85a42a4)
	void OnRepBuildCostModifier(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)
};

