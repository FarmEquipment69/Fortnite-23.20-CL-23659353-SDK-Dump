// Enum /Script/Account.EConsoleAuthLinkState
enum class EConsoleAuthLinkState : uint8_t
{
  NotOnConsole = 0,
  ConsoleNotLoggedIn = 1,
  EpicNotLoggedIn = 2,
  ThisEpicAccountLinked = 3,
  OtherEpicAccountLinked = 4,
  NoEpicAccountLinked = 5,
  PrimaryIdNotLinked = 6,
  SecondaryIdNotLinked = 7,
  EConsoleAuthLinkState_MAX = 8
};