// Enum /Script/Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{
  TLM_VolumetricNonDirectional = 0,
  TLM_VolumetricDirectional = 1,
  TLM_VolumetricPerVertexNonDirectional = 2,
  TLM_VolumetricPerVertexDirectional = 3,
  TLM_Surface = 4,
  TLM_SurfacePerPixelLighting = 5,
  TLM_MAX = 6
};