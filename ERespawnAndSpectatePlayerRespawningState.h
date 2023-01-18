// Enum /Script/FortniteGame.ERespawnAndSpectatePlayerRespawningState
enum class ERespawnAndSpectatePlayerRespawningState : uint8_t
{
  None = 0,
  WaitingOnTimer = 1,
  WaitingOnPlayerSelection = 2,
  WaitingOnClientReady = 3,
  Respawning = 4,
  RespawnFinishing = 5,
  ERespawnAndSpectatePlayerRespawningState_MAX = 6
};