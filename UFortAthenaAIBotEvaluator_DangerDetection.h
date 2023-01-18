// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_DangerDetection
// Size: 0x128
class UFortAthenaAIBotEvaluator_DangerDetection : public UFortAthenaAIBotEvaluator_TagQuery
{
	unsigned char unreflected_d8[0x10]; // 0xd8 (0x10) 
	class UClass* DangerNavAreaClass; // 0xe8 (0x8)
	float TimeToCheckForDangerAfterValidQuery; // 0xf0 (0x4)
	float MaxRadiusToSearchForSafePlace; // 0xf4 (0x4)
	struct FName DangerZoneDetectedExecutionStatusName; // 0xf8 (0x4)
	struct FName DangerZoneDetectedSafeLocationKeyName; // 0xfc (0x4)
	unsigned char unreflected_100[0x8]; // 0x100 (0x8) 
	class UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementSkillSet; // 0x108 (0x8)
	class UAthenaAIServiceZoneManager* CacheZoneManager; // 0x110 (0x8)
	unsigned char padding_118[0x10]; // 0x118 (0x10)
};

