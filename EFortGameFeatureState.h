// Enum /Script/FortniteGame.EFortGameFeatureState
enum class EFortGameFeatureState : uint8_t
{
  Unknown = 0,
  Unavailable = 1,
  Downloading = 2,
  DownloadFailed = 3,
  Available = 4,
  Preloading = 5,
  Preloaded = 6,
  Loading = 7,
  Loaded = 8,
  Count = 8,
  EFortGameFeatureState_MAX = 9
};