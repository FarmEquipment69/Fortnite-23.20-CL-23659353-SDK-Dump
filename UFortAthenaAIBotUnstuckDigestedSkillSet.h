// Class /Script/FortniteAI.FortAthenaAIBotUnstuckDigestedSkillSet
// Size: 0x80
class UFortAthenaAIBotUnstuckDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
	bool bCanTeleportWhenStuck; // 0x30 (0x1)
	bool bCanTeleportWhenStuckWithPlayerAround; // 0x31 (0x1)
	unsigned char unreflected_32[0x2]; // 0x32 (0x2) 
	float MaxDistanceSqToPlayerToTeleport; // 0x34 (0x4)
	float PlayerToPhoebeAngleVisibilityConeToTeleport; // 0x38 (0x4)
	float TimeBetweenPartialPathToConsiderPathStuck; // 0x3c (0x4)
	int ConsecutivePartialPathCountToConsiderPathStuck; // 0x40 (0x4)
	float DistanceSqBetweenBlockedPathToConsiderPathStuck; // 0x44 (0x4)
	float DistanceBetweenSampleToConsiderPathStuckInWater; // 0x48 (0x4)
	float TimeBetweenSampleToConsiderPathStuckInWater; // 0x4c (0x4)
	float DistanceBetweenSampleToConsiderPathStuckOnGround; // 0x50 (0x4)
	float TimeBetweenSampleToConsiderPathStuckOnGround; // 0x54 (0x4)
	int ConsecutiveBlockedPathCountToConsiderPathStuck; // 0x58 (0x4)
	int MaxSafeZoneIndexToAllowTeleport; // 0x5c (0x4)
	float TimeToBreakBlockingDoor; // 0x60 (0x4)
	float TimeToCloseBlockingDoor; // 0x64 (0x4)
	float RiverbedObstacleCollisionNormalThreshold; // 0x68 (0x4)
	bool bCanUseSteeringWhenStuckOnIsolatedIsland; // 0x6c (0x1)
	unsigned char unreflected_6d[0x3]; // 0x6d (0x3) 
	int MaxSteeringDirectionAttempts; // 0x70 (0x4)
	float SteeringAttemptDuration; // 0x74 (0x4)
	float EvaluateIsolatedIslandSteeringTime; // 0x78 (0x4)
	unsigned char padding_7c[0x4]; // 0x7c (0x4)
};

