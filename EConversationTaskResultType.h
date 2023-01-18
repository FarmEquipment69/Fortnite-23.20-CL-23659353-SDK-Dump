// Enum /Script/CommonConversationRuntime.EConversationTaskResultType
enum class EConversationTaskResultType : uint8_t
{
  Invalid = 0,
  AbortConversation = 1,
  AdvanceConversation = 2,
  AdvanceConversationWithChoice = 3,
  PauseConversationAndSendClientChoices = 4,
  ReturnToLastClientChoice = 5,
  ReturnToCurrentClientChoice = 6,
  ReturnToConversationStart = 7,
  EConversationTaskResultType_MAX = 8
};