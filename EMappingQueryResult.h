// Enum /Script/EnhancedInput.EMappingQueryResult
enum class EMappingQueryResult : uint8_t
{
  Error_EnhancedInputNotEnabled = 0,
  Error_InputContextNotInActiveContexts = 1,
  Error_InvalidAction = 2,
  NotMappable = 3,
  MappingAvailable = 4,
  EMappingQueryResult_MAX = 5
};