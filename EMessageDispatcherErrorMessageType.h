// Enum /Script/FortniteGame.EMessageDispatcherErrorMessageType
enum class EMessageDispatcherErrorMessageType : uint8_t
{
  FailedToSetTrigger_TooManyTriggers = 0,
  FailedToSetReceiver_TooManyReceivers = 1,
  FailedToSetReceiver_TooManyReceiversOnOneChannel = 2,
  FailedToSetTriggerReceiver_InvalidChannel = 3,
  FailedToEnqueueMessage = 4,
  BuildLimitReached = 5,
  UnknownError = 6,
  EMessageDispatcherErrorMessageType_MAX = 7
};