// Enum /Script/Hotfix.EUpdateCompletionStatus
enum class EUpdateCompletionStatus : uint8_t
{
  UpdateUnknown = 0,
  UpdateSuccess = 1,
  UpdateSuccess_NoChange = 2,
  UpdateSuccess_NeedsReload = 3,
  UpdateSuccess_NeedsRelaunch = 4,
  UpdateSuccess_NeedsPatch = 5,
  UpdateFailure_PatchCheck = 6,
  UpdateFailure_HotfixCheck = 7,
  UpdateFailure_NotLoggedIn = 8,
  EUpdateCompletionStatus_MAX = 9
};