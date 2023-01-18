// Enum /Script/FortniteGame.ECreativeBotIslandLoadingState
enum class ECreativeBotIslandLoadingState : uint8_t
{
  ILS_NONE = 0,
  ILS_LoadNotStarted = 1,
  ILS_GrantPlotItem = 2,
  ILS_WaitingUserPlotReady = 3,
  ILS_LoadInProgress = 4,
  ILS_LoadComplete = 5,
  ILS_Teleporting = 6,
  ILS_Returning = 7,
  ILS_Items = 8,
  ILS_MAX = 9
};