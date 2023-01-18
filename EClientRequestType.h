// Enum /Script/OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{
  NonePending = 0,
  ExistingSessionReservation = 1,
  ReservationUpdate = 2,
  EmptyServerReservation = 3,
  Reconnect = 4,
  Abandon = 5,
  ReservationRemoveMembers = 6,
  AddOrUpdateReservation = 7,
  EClientRequestType_MAX = 8
};