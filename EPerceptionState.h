// Enum /Script/FortniteAI.EPerceptionState
enum class EPerceptionState : uint8_t
{
  Threat_Seeing = 0,
  Threat_LKP = 1,
  Threat_Alerted = 2,
  ObstacleIncoming = 3,
  ObstacleBlockedBy = 4,
  ObstacleDetectedTrap = 5,
  Unknown = 6,
  Count = 6,
  Threat_Count = 3,
  EPerceptionState_MAX = 7
};