// Enum /Script/FortniteGame.EFortAutoTestState
enum class EFortAutoTestState : uint8_t
{
  InitialLoad = 0,
  Login = 1,
  FrontendLoad = 2,
  FrontendPvELoad = 3,
  FrontendPvETest = 4,
  PvEMatchmaking = 5,
  ZoneLoad = 6,
  ZoneTest = 7,
  Finished = 8,
  MAX = 9
};