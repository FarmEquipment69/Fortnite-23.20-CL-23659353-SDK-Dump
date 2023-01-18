// Class /Script/FortniteAI.FortAthenaAIBotPlayStyleSkillSet
// Size: 0x108
class UFortAthenaAIBotPlayStyleSkillSet : public UFortAthenaAIBotSkillSet
{
	struct FScalableFloat AggressiveTowardsThreatWeight; // 0x30 (0x28)
	struct FScalableFloat DefensiveTowardsThreatWeight; // 0x58 (0x28)
	struct FScalableFloat PassiveDBNOPlayStyle; // 0x80 (0x28)
	struct FScalableFloat ThirstyDBNOPlayStyle; // 0xa8 (0x28)
	struct FScalableFloat PassiveOnHumansDBNOPlayStyle; // 0xd0 (0x28)
	struct TArray<struct FPlaystyleSwitchToAggressiveData> ChangeToAggressiveData; // 0xf8 (0x10)
};

