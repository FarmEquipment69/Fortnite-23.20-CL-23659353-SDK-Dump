// Enum /Script/HoagieRuntime.EHoagieState
enum class EHoagieState : uint8_t
{
  STARTUP = 0,
  STARTUP_LIFT = 1,
  FLIGHT = 2,
  AUTO_LANDING = 3,
  SPIN_CRASHING = 4,
  CRASHING_NO_SPIN = 5,
  CRASH_LANDED = 6,
  LANDED = 7,
  EXPLODING = 8,
  NONE = 9,
  EHoagieState_MAX = 10
};