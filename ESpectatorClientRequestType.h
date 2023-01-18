// Enum /Script/OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8_t
{
  NonePending = 0,
  ExistingSessionReservation = 1,
  ReservationUpdate = 2,
  EmptyServerReservation = 3,
  Reconnect = 4,
  Abandon = 5,
  ESpectatorClientRequestType_MAX = 6
};