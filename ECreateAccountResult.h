// Enum /Script/Account.ECreateAccountResult
enum class ECreateAccountResult : uint8_t
{
  NotStarted = 0,
  Pending = 1,
  Success = 2,
  Console_LoginFailed = 3,
  Console_DuplicateAuthAssociation = 4,
  DuplicateAccount = 5,
  GenericError = 6,
  ECreateAccountResult_MAX = 7
};