// Enum /Script/FortniteAI.EBehaviorTreeBranches
enum class EBehaviorTreeBranches : uint8_t
{
  CanUseDiving = 0,
  CanUseGliding = 1,
  CanReactToProjectile = 2,
  CanReactToTraps = 3,
  CanAvoidDangerArea = 4,
  CanBeConverted = 5,
  CanPropagateAwareness = 6,
  CanUseThreatenedBehaviors = 7,
  CanUseLastKnownPositionBehavior = 8,
  CanUseAlertedBehavior = 9,
  CanUseSmartObjects = 10,
  CanReviveDBNOTeammates = 11,
  CanPlayEmote = 12,
  CanConverse = 13,
  CanPatrolOnPath = 14,
  CanPatrolAround = 15,
  CanTeleportWhenStuck = 16,
  CanEmoteWhenStuck = 17,
  Count = 18,
  EBehaviorTreeBranches_MAX = 19
};