// Enum /Script/FortniteGame.EUnconvertReason
enum class EUnconvertReason : uint8_t
{
  StealByOtherPlayer = 0,
  ConverterDeath = 1,
  ConvertedDeath = 2,
  TooManyConverted = 3,
  TooFarFromConverter = 4,
  GameplayTagBlockConvert = 5,
  EndPlay = 6,
  Unknown = 7,
  EUnconvertReason_MAX = 8
};