// Enum /Script/Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
  MTR_Succeeded = 0,
  MTR_Failed = 1,
  MTR_Canceled = 2,
  MTR_RestoredFromServer = 3,
  MTR_MAX = 4
};