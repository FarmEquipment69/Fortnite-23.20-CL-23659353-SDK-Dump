// Enum /Script/FortniteGame.EFortAnalyticsClientEngagementEventType
enum class EFortAnalyticsClientEngagementEventType : uint8_t
{
  None = 0,
  DamageReceivedFromPlayerPawn = 1,
  DamageDealtToPlayerPawn = 2,
  DamageDealtToPlayerBuild = 3,
  DamageDealtToOther = 4,
  EngagementTimeout = 5,
  PlayerWon = 6,
  PlayerDeathOnWin = 7,
  TeamWon = 8,
  TeamLost = 9,
  PlayerLost = 10,
  PlayerKilledPlayer = 11,
  PlayerFiredWeapon = 12,
  ManagerStopped = 13,
  PlayerPawnDied = 14,
  PlayerPawnSpawned = 15,
  Count = 16,
  EFortAnalyticsClientEngagementEventType_MAX = 17
};