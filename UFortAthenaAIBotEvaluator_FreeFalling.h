// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_FreeFalling
// Size: 0x190
class UFortAthenaAIBotEvaluator_FreeFalling : public UFortAthenaAIBotEvaluator
{
	struct FName DiveExecutionStatusKeyName; // 0x88 (0x4)
	struct FName DiveDestinationKeyName; // 0x8c (0x4)
	struct FName GlideExecutionStatusKeyName; // 0x90 (0x4)
	struct FName GlideDestinationKeyName; // 0x94 (0x4)
	struct FName JumpOffBusDestinationName; // 0x98 (0x4)
	unsigned char unreflected_9c[0xa]; // 0x9c (0xa) 
	bool bRandomlySelectFreeFallingMode; // 0xa6 (0x1)
	unsigned char unreflected_a7[0x1]; // 0xa7 (0x1) 
	struct FScalableFloat IdleWeight; // 0xa8 (0x28)
	struct FScalableFloat RandomWeight; // 0xd0 (0x28)
	struct FScalableFloat TowardNearestAllyWeight; // 0xf8 (0x28)
	enum EFreeFallingMode FreeFallingMode; // 0x120 (0x1)
	unsigned char unreflected_121[0x3]; // 0x121 (0x3) 
	float MaxOffsetRangeFromNearestAlly; // 0x124 (0x4)
	unsigned char bShouldRecomputeDestinationWhenTowardNearestAlly; // 0x128 (0x1)
	unsigned char bShouldSearchAllyInSquad; // 0x128 (0x1)
	unsigned char bShouldSearchAllyInTeam; // 0x128 (0x1)
	unsigned char bGlideAllowed; // 0x128 (0x1)
	unsigned char unreflected_129[0x3]; // 0x129 (0x3) 
	float SkyTubeDivingStuckTimeThreshold; // 0x12c (0x4)
	unsigned char unreflected_130[0x20]; // 0x130 (0x20) 
	class AFortPlayerStateAthena* NearestAlly; // 0x150 (0x8)
	struct FVector CachedLatestDestination; // 0x158 (0x18)
	class UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet; // 0x170 (0x8)
	unsigned char unreflected_178[0x8]; // 0x178 (0x8) 
	class AFortSkyTube* CachedSkyTube; // 0x180 (0x8)
	unsigned char padding_188[0x8]; // 0x188 (0x8)
};

