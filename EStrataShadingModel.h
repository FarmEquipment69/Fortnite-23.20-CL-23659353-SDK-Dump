// Enum /Script/Engine.EStrataShadingModel
enum class EStrataShadingModel : uint8_t
{
  SSM_Unlit = 0,
  SSM_DefaultLit = 1,
  SSM_SubsurfaceLit = 2,
  SSM_VolumetricFogCloud = 3,
  SSM_Hair = 4,
  SSM_Eye = 5,
  SSM_SingleLayerWater = 6,
  SSM_LightFunction = 7,
  SSM_PostProcess = 8,
  SSM_Decal = 9,
  SSM_NUM = 10
};