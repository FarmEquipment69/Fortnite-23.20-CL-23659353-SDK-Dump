// Enum /Script/DSSNetworkReplayStreamer.EDSSReplayResult
enum class EDSSReplayResult : uint8_t
{
  Success = 0,
  FailedJsonParse = 1,
  DataUnavailable = 2,
  InvalidHttpResponse = 3,
  CompressionFailed = 4,
  InvalidPayload = 5,
  Unknown = 6,
  EDSSReplayResult_MAX = 7
};