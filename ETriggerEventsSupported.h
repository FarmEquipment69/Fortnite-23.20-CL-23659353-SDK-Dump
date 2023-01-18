// Enum /Script/EnhancedInput.ETriggerEventsSupported
enum class ETriggerEventsSupported : uint8_t
{
  None = 0,
  Instant = 1,
  Uninterruptible = 2,
  Ongoing = 4,
  All = 7,
  ETriggerEventsSupported_MAX = 8
};