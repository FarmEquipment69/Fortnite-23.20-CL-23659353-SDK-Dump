// Class /Script/FortniteAI.FortAthenaAIBotUnstuckSkillSet
// Size: 0x350
class UFortAthenaAIBotUnstuckSkillSet : public UFortAthenaAIBotSkillSet
{
	struct FScalableFloat CanTeleportWhenStuck; // 0x30 (0x28)
	struct FScalableFloat CanTeleportWhenStuckWithPlayerAround; // 0x58 (0x28)
	struct FScalableFloat MaxDistanceToPlayerToTeleport; // 0x80 (0x28)
	struct FScalableFloat PlayerToPhoebeAngleVisibilityConeToTeleport; // 0xa8 (0x28)
	struct FScalableFloat MaxSafeZoneIndexToAllowTeleport; // 0xd0 (0x28)
	struct FScalableFloat TimeToCloseBlockingDoor; // 0xf8 (0x28)
	struct FScalableFloat TimeToBreakBlockingDoor; // 0x120 (0x28)
	struct FScalableFloat RiverbedObstacleCollisionNormalThreshold; // 0x148 (0x28)
	struct FScalableFloat CanUseSteeringWhenStuckOnIsolatedIsland; // 0x170 (0x28)
	struct FScalableFloat MaxSteeringDirectionAttempts; // 0x198 (0x28)
	struct FScalableFloat SteeringAttemptDuration; // 0x1c0 (0x28)
	struct FScalableFloat EvaluateIsolatedIslandSteeringTime; // 0x1e8 (0x28)
	struct FScalableFloat TimeBetweenPartialPathToConsiderPathStuck; // 0x210 (0x28)
	struct FScalableFloat ConsecutivePartialPathCountToConsiderPathStuck; // 0x238 (0x28)
	struct FScalableFloat DistanceBetweenSampleToConsiderPathStuckInWater; // 0x260 (0x28)
	struct FScalableFloat TimeBetweenSampleToConsiderPathStuckInWater; // 0x288 (0x28)
	struct FScalableFloat DistanceBetweenSampleToConsiderPathStuckOnGround; // 0x2b0 (0x28)
	struct FScalableFloat TimeBetweenSampleToConsiderPathStuckOnGround; // 0x2d8 (0x28)
	struct FScalableFloat DistanceBetweenBlockedPathToConsiderPathStuck; // 0x300 (0x28)
	struct FScalableFloat ConsecutiveBlockedPathCountToConsiderPathStuck; // 0x328 (0x28)
};

