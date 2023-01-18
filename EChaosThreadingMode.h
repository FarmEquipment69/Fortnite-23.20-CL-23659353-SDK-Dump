// Enum /Script/Chaos.EChaosThreadingMode
enum class EChaosThreadingMode : uint8_t
{
  DedicatedThread = 0,
  TaskGraph = 1,
  SingleThread = 2,
  Num = 3,
  Invalid = 4,
  EChaosThreadingMode_MAX = 5
};