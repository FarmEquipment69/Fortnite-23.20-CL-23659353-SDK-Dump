// Enum /Script/FortniteGame.EFortAIDirectorEvent
enum class EFortAIDirectorEvent : uint8_t
{
  PlayerAIEnemies = 0,
  PlayerTakeDamage = 1,
  PlayerHealth = 2,
  PlayerDeath = 3,
  PlayerLookAtAIEnemy = 4,
  PlayerDamageAIEnemy = 5,
  PlayerKillAIEnemy = 6,
  PlayerHealingPotential = 7,
  PlayerAmmoLight = 8,
  PlayerAmmoMedium = 9,
  PlayerAmmoHeavy = 10,
  PlayerAmmoShells = 11,
  PlayerAmmoEnergy = 12,
  PlayerAINear = 13,
  PlayerMovement = 14,
  ObjectiveTakeDamage = 15,
  ObjectiveHealth = 16,
  ObjectiveDestroyed = 17,
  TrapFired = 18,
  TrapDamagedAIEnemy = 19,
  ObjectivePathCost = 20,
  PlayerPathCost = 21,
  ObjectiveNearbyBuildingDamaged = 22,
  Max_None = 23,
  EFortAIDirectorEvent_MAX = 24
};