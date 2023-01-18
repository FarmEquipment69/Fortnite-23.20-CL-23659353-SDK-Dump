// Class /Script/FortniteAI.FortAthenaAIBotPlayStyleDigestedSkillSet
// Size: 0x98
class UFortAthenaAIBotPlayStyleDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
	struct FScalableFloat AggressiveTowardsThreatWeight; // 0x30 (0x28)
	struct FScalableFloat DefensiveTowardsThreatWeight; // 0x58 (0x28)
	enum EDBNOPlayStyle DBNOPlayStyle; // 0x80 (0x1)
	unsigned char unreflected_81[0x7]; // 0x81 (0x7) 
	struct TArray<struct FPlaystyleSwitchToAggressiveDataDigested> ChangeToAggressiveData; // 0x88 (0x10)
};

