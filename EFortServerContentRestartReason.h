// Enum /Script/FortniteGame.EFortServerContentRestartReason
enum class EFortServerContentRestartReason : uint8_t
{
  None = 0,
  CreativeCuratedHubChanged = 1,
  CreativeFeaturedIslandsChanged = 2,
  CreativePreloadRevisionChanged = 4,
  CreativePlaylistConditionalFlagsChanged = 8,
  GameFeaturePluginDisabled = 16,
  ForceRestartEventFlagsChanged = 32,
  ForceRestartFlagActiveStateChanged = 64,
  EFortServerContentRestartReason_MAX = 65
};