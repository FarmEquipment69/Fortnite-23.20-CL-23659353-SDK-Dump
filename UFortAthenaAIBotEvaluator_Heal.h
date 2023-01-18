// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_Heal
// Size: 0xf8
class UFortAthenaAIBotEvaluator_Heal : public UFortAthenaAIBotEvaluator
{
	struct FName HealingObjectKeyName; // 0x88 (0x4)
	unsigned char unreflected_8c[0xc]; // 0x8c (0xc) 
	struct FGameplayTagQuery RequiredTagQuery; // 0x98 (0x48)
	bool bAllowEvaluationRetry; // 0xe0 (0x1)
	unsigned char unreflected_e1[0x7]; // 0xe1 (0x7) 
	class UFortAthenaAIBotHealingDigestedSkillSet* HealingSkillSet; // 0xe8 (0x8)
	unsigned char padding_f0[0x8]; // 0xf0 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIBotEvaluator_Heal.HandlePlayerHealthOrShieldChanged (Underlying native function: HandlePlayerHealthOrShieldChanged 0xa374da0)
	void HandlePlayerHealthOrShieldChanged(); // (Final | Native | Private)
};

