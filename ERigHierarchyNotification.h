// Enum /Script/ControlRig.ERigHierarchyNotification
enum class ERigHierarchyNotification : uint8_t
{
  ElementAdded = 0,
  ElementRemoved = 1,
  ElementRenamed = 2,
  ElementSelected = 3,
  ElementDeselected = 4,
  ParentChanged = 5,
  HierarchyReset = 6,
  ControlSettingChanged = 7,
  ControlVisibilityChanged = 8,
  ControlDrivenListChanged = 9,
  ControlShapeTransformChanged = 10,
  ParentWeightsChanged = 11,
  InteractionBracketOpened = 12,
  InteractionBracketClosed = 13,
  Max = 14
};