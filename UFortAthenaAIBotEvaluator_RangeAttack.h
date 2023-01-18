// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_RangeAttack
// Size: 0x370
class UFortAthenaAIBotEvaluator_RangeAttack : public UFortAthenaAIBotEvaluator_Attack
{
	struct FName WeaponReloadName; // 0x248 (0x4)
	struct FName WeaponFireName; // 0x24c (0x4)
	struct FName RangeAttackIsReadyToFireName; // 0x250 (0x4)
	struct FName WeaponTargetingName; // 0x254 (0x4)
	struct FName AggressivenessName; // 0x258 (0x4)
	struct FName HasLoSOnThreatName; // 0x25c (0x4)
	struct FName UrgentMovementKeyName; // 0x260 (0x4)
	unsigned char unreflected_264[0xe]; // 0x264 (0xe) 
	bool bAlwaysAllowTargetingEvaluation; // 0x272 (0x1)
	bool bSkipADSEvaluation; // 0x273 (0x1)
	bool bConsiderLoF; // 0x274 (0x1)
	unsigned char unreflected_275[0x3]; // 0x275 (0x3) 
	float RangeReachHysteresisRatio; // 0x278 (0x4)
	unsigned char unreflected_27c[0x1c]; // 0x27c (0x1c) 
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackDigestedSkillSet; // 0x298 (0x8)
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0x2a0 (0x8)
	class UFortAthenaAIBotPerceptionDigestedSkillSet* CachePerceptionDigestedSkillSet; // 0x2a8 (0x8)
	class UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingDigestedSkillSet; // 0x2b0 (0x8)
	class UAthenaAIServiceZoneManager* CacheZoneManager; // 0x2b8 (0x8)
	class AActor* ExcludeReachingTarget; // 0x2c0 (0x8)
	unsigned char unreflected_2c8[0x38]; // 0x2c8 (0x38) 
	class AActor* CachedLastMoveToRangeTarget; // 0x300 (0x8)
	unsigned char padding_308[0x68]; // 0x308 (0x68)
};

