// Enum /Script/SmartObjectsModule.ESmartObjectCollectionRegistrationResult
enum class ESmartObjectCollectionRegistrationResult : uint8_t
{
  Failed_InvalidCollection = 0,
  Failed_AlreadyRegistered = 1,
  Failed_NotFromPersistentLevel = 2,
  Succeeded = 3,
  ESmartObjectCollectionRegistrationResult_MAX = 4
};