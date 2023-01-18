// Enum /Script/NVIDIAGfeSDK.EGfeSDKReturnCode
enum class EGfeSDKReturnCode : uint8_t
{
  Success = 0,
  SuccessIpcOldSdk = 1,
  SuccessIpcOldGfe = 2,
  Error = 3,
  ErrorGfeVersion = 4,
  ErrorSdkVersion = 5,
  ErrorModuleNotLoaded = 6,
  EGfeSDKReturnCode_MAX = 7
};