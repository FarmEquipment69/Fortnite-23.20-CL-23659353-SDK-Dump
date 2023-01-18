// Enum /Script/Engine.EPingType
enum class EPingType : uint8_t
{
  None = 0,
  RoundTrip = 1,
  RoundTripExclFrame = 2,
  ICMP = 4,
  UDPQoS = 8,
  Max = 8,
  Count = 4
};