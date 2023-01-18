// Enum /Script/Engine.EMeshApproximationGroundPlaneClippingPolicy
enum class EMeshApproximationGroundPlaneClippingPolicy : uint8_t
{
  NoGroundClipping = 0,
  DiscardWithZPlane = 1,
  CutWithZPlane = 2,
  CutAndFillWithZPlane = 3,
  EMeshApproximationGroundPlaneClippingPolicy_MAX = 4
};