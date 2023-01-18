// Enum /Script/OodleNetworkHandlerComponent.EOodleNetResult
enum class EOodleNetResult : uint8_t
{
  Unknown = 0,
  Success = 1,
  OodleDecodeFailed = 2,
  OodleSerializePayloadFail = 3,
  OodleBadDecompressedLength = 4,
  OodleNoDictionary = 5,
  EOodleNetResult_MAX = 6
};