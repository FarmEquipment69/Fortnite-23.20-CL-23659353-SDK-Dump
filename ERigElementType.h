// Enum /Script/ControlRig.ERigElementType
enum class ERigElementType : uint8_t
{
  None = 0,
  Bone = 1,
  Null = 2,
  Space = 2,
  Control = 4,
  Curve = 8,
  RigidBody = 16,
  Reference = 32,
  Last = 64,
  All = 63,
  ToResetAfterConstructionEvent = 13,
  ERigElementType_MAX = 65
};