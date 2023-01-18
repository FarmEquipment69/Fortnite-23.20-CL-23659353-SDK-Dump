// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_Investigate
// Size: 0x2e0
class UFortAthenaAIBotEvaluator_Investigate : public UFortAthenaAIBotEvaluator_Movement
{
	struct FName LastKnownPositionName; // 0x230 (0x4)
	struct FName DestinationKeyName; // 0x234 (0x4)
	struct FName MoveToDestinationKeyName; // 0x238 (0x4)
	struct FName AggressivenessName; // 0x23c (0x4)
	struct FName CautiousKeyName; // 0x240 (0x4)
	unsigned char unreflected_244[0xc]; // 0x244 (0xc) 
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0x250 (0x8)
	class UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingDigestedSkillSet; // 0x258 (0x8)
	unsigned char unreflected_260[0x38]; // 0x260 (0x38) 
	class AActor* InvestigatingSupportingActor; // 0x298 (0x8)
	unsigned char unreflected_2a0[0x8]; // 0x2a0 (0x8) 
	class ABuildingSMActor* UnderminingBuildingActor; // 0x2a8 (0x8)
	class AActor* ExcludeReachingTarget; // 0x2b0 (0x8)
	unsigned char padding_2b8[0x28]; // 0x2b8 (0x28)
};

