// Class /Script/FortniteAI.FortAthenaAIEvaluator_FollowGroupLeader
// Size: 0x258
class UFortAthenaAIEvaluator_FollowGroupLeader : public UFortAthenaAIBotEvaluator_Movement
{
	struct FName FollowGroupLeaderStatusKeyName; // 0x230 (0x4)
	struct FName FollowGroupLeaderMovementStateKeyName; // 0x234 (0x4)
	struct FName FollowGroupLeaderDestinationKeyName; // 0x238 (0x4)
	struct FName TooFarFromLeaderKeyName; // 0x23c (0x4)
	unsigned char unreflected_240[0x8]; // 0x240 (0x8) 
	class AAIController* CachedAIController; // 0x248 (0x8)
	class UFortPawnComponent_AIGroup* CachedAIGroupComponent; // 0x250 (0x8)
};

