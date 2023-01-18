// Enum /Script/FortniteGame.EFortLevelStreamingState
enum class EFortLevelStreamingState : uint8_t
{
  LSS_Unloaded = 0,
  LSS_Loaded = 1,
  LSS_UnconditionalFoundationsUpdated = 2,
  LSS_AllFoundationsUpdated = 3,
  LSS_NewActorsCreatedButNotUpdated = 4,
  LSS_AllUpdated = 5,
  LSS_Ready = 6,
  LSS_MAX = 7
};