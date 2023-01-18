// Enum /Script/FortniteGame.EFortKickReason
enum class EFortKickReason : uint8_t
{
  NotKicked = 0,
  GenericKick = 1,
  WasBanned = 2,
  EncryptionRequired = 3,
  CrossPlayRestriction = 4,
  ClientIdRestriction = 5,
  EFortKickReason_MAX = 6
};