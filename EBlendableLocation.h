// Enum /Script/Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t
{
  BL_AfterTonemapping = 0,
  BL_BeforeTonemapping = 1,
  BL_BeforeTranslucency = 2,
  BL_ReplacingTonemapper = 3,
  BL_SSRInput = 4,
  BL_MAX = 5
};