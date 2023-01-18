// Class /Script/FortniteAI.FortAthenaNpcEvaluator_Patrolling
// Size: 0x280
class UFortAthenaNpcEvaluator_Patrolling : public UFortAthenaAIBotEvaluator_Movement
{
	struct FName PatrollingKeyName; // 0x230 (0x4)
	struct FName PatrollingMovementStateKeyName; // 0x234 (0x4)
	struct FName PatrollingDestinationKeyName; // 0x238 (0x4)
	struct FName DynamicBlueprintStatusKeyName; // 0x23c (0x4)
	struct FName DynamicBlueprintActorKeyName; // 0x240 (0x4)
	struct FName PatrollingShouldMoveKeyName; // 0x244 (0x4)
	struct FName PatrollingAppendDestinationKeyName; // 0x248 (0x4)
	unsigned char unreflected_24c[0x10]; // 0x24c (0x10) 
	float DistanceToTestPoint; // 0x25c (0x4)
	bool bCanDisablePatrolling; // 0x260 (0x1)
	bool bCanReenablePatrolling; // 0x261 (0x1)
	unsigned char unreflected_262[0x2]; // 0x262 (0x2) 
	float ReenableTimer; // 0x264 (0x4)
	bool bCanSelectNearestPatrolPointAtStart; // 0x268 (0x1)
	unsigned char unreflected_269[0x7]; // 0x269 (0x7) 
	class UFortAthenaNpcPatrollingComponent* CachedNpcPatrollingComponent; // 0x270 (0x8)
	unsigned char padding_278[0x8]; // 0x278 (0x8)
};

