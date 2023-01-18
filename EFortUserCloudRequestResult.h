// Enum /Script/FortniteGame.EFortUserCloudRequestResult
enum class EFortUserCloudRequestResult : uint8_t
{
  Success = 0,
  Failure_CloudStorageDisabled = 1,
  Failure_CloudStorageError = 2,
  Failure_FileNotFoundInUserFileList = 3,
  Failure_SavingNotAllowedForSpecifiedUser = 4,
  EFortUserCloudRequestResult_MAX = 5
};