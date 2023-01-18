// Class /Script/FortniteAI.FortAthenaAIBotHealingSkillSet
// Size: 0x70
class UFortAthenaAIBotHealingSkillSet : public UFortAthenaAIBotSkillSet
{
	struct FFortBotHealingItemsList HealthItemsList; // 0x30 (0x10)
	struct TArray<struct FFortBotHealingItemsSpec> HealthItemsSpecializations; // 0x40 (0x10)
	struct FFortBotHealingItemsList ShieldItemsList; // 0x50 (0x10)
	struct TArray<struct FFortBotHealingItemsSpec> ShieldItemsSpecializations; // 0x60 (0x10)
};

