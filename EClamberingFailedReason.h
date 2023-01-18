// Enum /Script/ClamberingCodeRuntime.EClamberingFailedReason
enum class EClamberingFailedReason : uint8_t
{
  None = 0,
  Unknown = 1,
  DebugForced = 2,
  OwnerDied = 3,
  OwnerDBNO = 4,
  OwnerLaunched = 5,
  SynchedActionNotStarted = 6,
  OwnerTeleported = 7,
  Ledge_PlayerTooFar = 8,
  Ledge_TargetLocationInvalid = 9,
  Ledge_TargetActorInvalid = 10,
  Ledge_TargetActorDestroyed = 11,
  Ledge_BlockerEncountered = 12,
  EClamberingFailedReason_MAX = 13
};