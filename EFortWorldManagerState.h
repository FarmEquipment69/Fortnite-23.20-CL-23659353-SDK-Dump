// Enum /Script/FortniteGame.EFortWorldManagerState
enum class EFortWorldManagerState : uint8_t
{
  WMS_Created = 0,
  WMS_QueryingWorld = 1,
  WMS_WorldQueryComplete = 2,
  WMS_CreatingNewWorld = 3,
  WMS_LoadingExistingWorld = 4,
  WMS_Running = 5,
  WMS_Failed = 6,
  WMS_MAX = 7
};