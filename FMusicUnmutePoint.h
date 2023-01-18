// Enum /Script/HmxAudio.FMusicUnmutePoint
enum class FMusicUnmutePoint : uint8_t
{
  kUnmutePoint_Immediate = 0,
  kUnmutePoint_NextSixteenth = 1,
  kUnmutePoint_NextEighth = 2,
  kUnmutePoint_NextQuarter = 3,
  kUnmutePoint_NextDownbeat = 4,
  kUnmutePoint_SpecificLocalTick = 5,
  kUnmutePoint_SpecificMasterTick = 6,
  kUnmutePoint_MAX = 7
};