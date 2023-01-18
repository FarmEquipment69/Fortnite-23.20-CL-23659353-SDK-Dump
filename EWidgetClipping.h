// Enum /Script/SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8_t
{
  Inherit = 0,
  ClipToBounds = 1,
  ClipToBoundsWithoutIntersecting = 2,
  ClipToBoundsAlways = 3,
  OnDemand = 4,
  EWidgetClipping_MAX = 5
};