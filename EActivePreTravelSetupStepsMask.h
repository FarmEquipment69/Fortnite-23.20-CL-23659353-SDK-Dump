// Enum /Script/FortniteGame.EActivePreTravelSetupStepsMask
enum class EActivePreTravelSetupStepsMask : uint8_t
{
  None = 0,
  WaitingForSubGameContent = 1,
  WaitingForDownloadableContent = 2,
  WaitingForServerInitialization = 4,
  WaitingForContentBeaconDisconnect = 8,
  WaitingForSecondContentBeacon = 16,
  CancelingPreTravelSetup = 32,
  EActivePreTravelSetupStepsMask_MAX = 33
};