// Enum /Script/SmartObjectsModule.ESmartObjectChangeReason
enum class ESmartObjectChangeReason : uint8_t
{
  None = 0,
  OnEvent = 1,
  OnTagAdded = 2,
  OnTagRemoved = 3,
  OnClaimed = 4,
  OnReleased = 5,
  OnEnabled = 6,
  OnDisabled = 7,
  ESmartObjectChangeReason_MAX = 8
};