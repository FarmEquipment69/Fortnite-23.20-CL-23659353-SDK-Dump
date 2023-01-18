// Enum /Script/SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8_t
{
  Unknown = 0,
  Explicit = 1,
  CustomDelegateBound = 2,
  CustomDelegateUnbound = 3,
  NextOrPrevious = 4,
  HitTestGrid = 5,
  ESlateDebuggingNavigationMethod_MAX = 6
};