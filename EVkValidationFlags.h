// Enum /Script/VkEngineTypes.EVkValidationFlags
enum class EVkValidationFlags : uint8_t
{
  None = 0,
  VF_IgnoreValidation = 1,
  VF_AllowMissingGameFeatureDataAsset = 2,
  VF_AllowEngineContent = 4,
  VF_AllowGameContent = 8,
  VF_NoPreCheckVerse = 16,
  EVkValidationFlags_MAX = 17
};