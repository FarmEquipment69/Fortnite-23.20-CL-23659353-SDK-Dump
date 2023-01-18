// Enum /Script/Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint8_t
{
  Inherited = 0,
  RetainOnLoad = 1,
  PrimeOnLoad = 2,
  LoadOnDemand = 3,
  ForceInline = 4,
  Uninitialized = 255,
  ESoundWaveLoadingBehavior_MAX = 256
};