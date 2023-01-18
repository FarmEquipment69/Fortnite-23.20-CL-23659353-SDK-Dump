// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_TakeCover
// Size: 0x2c0
class UFortAthenaAIBotEvaluator_TakeCover : public UFortAthenaAIBotEvaluator_Movement
{
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackDigestedSkillSet; // 0x230 (0x8)
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0x238 (0x8)
	class UAthenaAIServiceCover* CachedAIServiceCover; // 0x240 (0x8)
	struct FName DestinationKeyName; // 0x248 (0x4)
	struct FName MoveToDestinationKeyName; // 0x24c (0x4)
	struct FName HealingStatusKeyName; // 0x250 (0x4)
	struct FName WeaponFireName; // 0x254 (0x4)
	struct FName TargetActorName; // 0x258 (0x4)
	struct FName BunkerStatusKeyName; // 0x25c (0x4)
	unsigned char unreflected_260[0x10]; // 0x260 (0x10) 
	class ABuildingActor* CachedCoverBuildingActor; // 0x270 (0x8)
	struct TArray<class ABuildingActor*> ExcludedBuildingActors; // 0x278 (0x10)
	unsigned char padding_288[0x38]; // 0x288 (0x38)
};

