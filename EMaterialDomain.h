// Enum /Script/Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t
{
  MD_Surface = 0,
  MD_DeferredDecal = 1,
  MD_LightFunction = 2,
  MD_Volume = 3,
  MD_PostProcess = 4,
  MD_UI = 5,
  MD_RuntimeVirtualTexture = 6,
  MD_MAX = 7
};