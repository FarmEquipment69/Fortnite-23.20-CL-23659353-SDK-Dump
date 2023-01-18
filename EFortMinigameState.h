// Enum /Script/FortniteGame.EFortMinigameState
enum class EFortMinigameState : uint8_t
{
  PreGame = 0,
  Setup = 1,
  Transitioning = 2,
  WaitingForCameras = 3,
  Warmup = 4,
  InProgress = 5,
  PostGameTimeDilation = 6,
  PostRoundEnd = 7,
  PostGameEnd = 8,
  PostGameAbandon = 9,
  PostGameReset = 10,
  EFortMinigameState_MAX = 11
};