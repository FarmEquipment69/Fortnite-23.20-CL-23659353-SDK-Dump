// Enum /Script/DataRegistry.EDataRegistryAvailability
enum class EDataRegistryAvailability : uint8_t
{
  DoesNotExist = 0,
  Unknown = 1,
  Remote = 2,
  OnDisk = 3,
  LocalAsset = 4,
  PreCached = 5,
  EDataRegistryAvailability_MAX = 6
};