// Enum /Script/FortniteGame.EFortWorldRecordState
enum class EFortWorldRecordState : uint8_t
{
  StartProcessing = 0,
  WaitingForResponse = 1,
  RetrievingTheaterInformation = 2,
  RetrievingZoneInformation = 3,
  LoadingWorldRecord = 4,
  LoadingZoneRecord = 5,
  SavingZoneRecord = 6,
  SavingPlayerProfiles = 7,
  SavingPlayerDeployableBases = 8,
  Succeeded = 9,
  Failed = 10,
  Max_None = 11,
  EFortWorldRecordState_MAX = 12
};