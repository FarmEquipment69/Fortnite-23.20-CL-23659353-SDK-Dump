// Enum /Script/GameSubCatalog.ECatalogRequirementType
enum class ECatalogRequirementType : uint8_t
{
  RequireFulfillment = 0,
  DenyOnFulfillment = 1,
  RequireItemOwnership = 2,
  DenyOnItemOwnership = 3,
  ECatalogRequirementType_MAX = 4
};