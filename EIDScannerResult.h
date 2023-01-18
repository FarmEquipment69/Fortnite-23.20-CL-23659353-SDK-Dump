// Enum /Script/FortniteGame.EIDScannerResult
enum class EIDScannerResult : uint8_t
{
  Success_PlayerBelongsToFaction = 0,
  Success_DownedPlayer = 1,
  Success_DownedGuard = 2,
  Success_PlayerIsDisguised = 3,
  Failure_NotFromFaction = 4,
  Other = 5,
  EIDScannerResult_MAX = 6
};