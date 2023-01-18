// Enum /Script/Engine.ETextureColorSpace
enum class ETextureColorSpace : uint8_t
{
  TCS_None = 0,
  TCS_sRGB = 1,
  TCS_Rec2020 = 2,
  TCS_ACESAP0 = 3,
  TCS_ACESAP1 = 4,
  TCS_P3DCI = 5,
  TCS_P3D65 = 6,
  TCS_REDWideGamut = 7,
  TCS_SonySGamut3 = 8,
  TCS_SonySGamut3Cine = 9,
  TCS_AlexaWideGamut = 10,
  TCS_CanonCinemaGamut = 11,
  TCS_GoProProtuneNative = 12,
  TCS_PanasonicVGamut = 13,
  TCS_Custom = 99,
  TCS_MAX = 100
};