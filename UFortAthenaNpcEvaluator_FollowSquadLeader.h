// Class /Script/FortniteAI.FortAthenaNpcEvaluator_FollowSquadLeader
// Size: 0x380
class UFortAthenaNpcEvaluator_FollowSquadLeader : public UFortAthenaAIBotEvaluator_Movement
{
	struct FScalableFloat FormationOffsetRadiusMin; // 0x230 (0x28)
	struct FScalableFloat FormationOffsetRadiusMax; // 0x258 (0x28)
	struct FScalableFloat TooFarFromSquadLeaderDistance; // 0x280 (0x28)
	struct FScalableFloat MaxNoiseRadius; // 0x2a8 (0x28)
	struct FScalableFloat MinDurationNoiseEvaluate; // 0x2d0 (0x28)
	struct FScalableFloat MaxDurationNoiseEvaluate; // 0x2f8 (0x28)
	struct FName FollowSquadLeaderStatusKeyName; // 0x320 (0x4)
	unsigned char unreflected_324[0x4]; // 0x324 (0x4) 
	struct FName FollowSquadLeaderMovementStateKeyName; // 0x328 (0x4)
	unsigned char unreflected_32c[0x4]; // 0x32c (0x4) 
	struct FName FollowSquadLeaderDestinationKeyName; // 0x330 (0x4)
	unsigned char unreflected_334[0x4]; // 0x334 (0x4) 
	struct FName TooFarFromLeaderKeyName; // 0x338 (0x4)
	unsigned char unreflected_33c[0x4]; // 0x33c (0x4) 
	struct FVector CachedSquadFormationOffset; // 0x340 (0x18)
	struct FVector CachedNoiseOffset; // 0x358 (0x18)
	float CachedTooFarFromSquadLeaderDistanceSqr; // 0x370 (0x4)
	float LastNoiseOffsetUpdateTime; // 0x374 (0x4)
	float DurationNoiseEvaluate; // 0x378 (0x4)
	unsigned char padding_37c[0x4]; // 0x37c (0x4)
};

