// Enum /Script/Engine.EStrataBlendMode
enum class EStrataBlendMode : uint8_t
{
  SBM_Opaque = 0,
  SBM_Masked = 1,
  SBM_TranslucentGreyTransmittance = 2,
  SBM_TranslucentColoredTransmittance = 3,
  SBM_ColoredTransmittanceOnly = 4,
  SBM_AlphaHoldout = 5,
  SBM_MAX = 6
};