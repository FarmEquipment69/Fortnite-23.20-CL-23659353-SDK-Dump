// Enum /Script/FortniteGame.EInnerErrorType
enum class EInnerErrorType : uint8_t
{
  None = 0,
  ContentServiceError = 1,
  ContentSentryUnknownError = 2,
  ProjectDuplicationError = 3,
  CookFailure = 4,
  CookFailureOutOfMemory = 5,
  CookUnknownError = 6,
  CookBadInput = 7,
  StagingFailure = 8,
  Unknown = 9,
  EInnerErrorType_MAX = 10
};