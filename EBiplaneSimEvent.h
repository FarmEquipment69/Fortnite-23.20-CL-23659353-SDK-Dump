// Enum /Script/FortniteGame.EBiplaneSimEvent
enum class EBiplaneSimEvent : uint8_t
{
  EngineStart = 0,
  EngineStop = 1,
  Takeoff = 2,
  Landing = 3,
  BoostBegin = 4,
  BoostEnd = 5,
  BoostChargeAboveThreshold = 6,
  AileronRoll = 7,
  ControlContextChange = 8,
  EBiplaneSimEvent_MAX = 9
};