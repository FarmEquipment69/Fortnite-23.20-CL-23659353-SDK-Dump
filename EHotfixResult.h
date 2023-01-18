// Enum /Script/Hotfix.EHotfixResult
enum class EHotfixResult : uint8_t
{
  Failed = 0,
  Success = 1,
  SuccessNoChange = 2,
  SuccessNeedsReload = 3,
  SuccessNeedsRelaunch = 4,
  EHotfixResult_MAX = 5
};