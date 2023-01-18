// Enum /Script/ClamberingCodeRuntime.EClamberingState
enum class EClamberingState : uint8_t
{
  Inactive = 0,
  Targeting = 1,
  Ledge_Moving = 2,
  Ledge_Failed = 3,
  Window_Moving = 4,
  Window_Failed = 5,
  EClamberingState_MAX = 6
};