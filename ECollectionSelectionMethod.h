// Enum /Script/FortniteGame.ECollectionSelectionMethod
enum class ECollectionSelectionMethod : uint8_t
{
  TierAsIndex = 0,
  TierAsIndexOverflowToLastValid = 1,
  Modulo = 2,
  Random = 3,
  None = 4,
  ECollectionSelectionMethod_MAX = 5
};