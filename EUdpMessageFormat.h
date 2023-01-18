// Enum /Script/UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : uint8_t
{
  None = 0,
  Json = 1,
  TaggedProperty = 2,
  CborPlatformEndianness = 3,
  CborStandardEndianness = 4,
  EUdpMessageFormat_MAX = 5
};