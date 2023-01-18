// Enum /Script/FortniteGame.EFortStartupPhase
enum class EFortStartupPhase : uint8_t
{
  InitializingEngine = 0,
  EarlyStartupLoading = 1,
  EarlyStartupFinished = 2,
  GameStartupLoading = 3,
  GameStartupFinished = 4,
  Invalid = 5,
  Count = 5,
  EFortStartupPhase_MAX = 6
};