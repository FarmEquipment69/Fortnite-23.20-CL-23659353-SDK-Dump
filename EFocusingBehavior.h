// Enum /Script/FortniteAI.EFocusingBehavior
enum class EFocusingBehavior : uint8_t
{
  FocusCurrentTarget = 0,
  IgnoreThreatAfterTimer = 1,
  IgnoreThreatAlways = 2,
  IgnoreThreatToFlee = 3,
  LookAtInvestigate = 4,
  LookAtAmbush = 5,
  LookAtHeardSound = 6,
  LookAtScanAround = 7,
  LookAtScanAroundOnly = 8,
  Invalid = 9,
  EFocusingBehavior_MAX = 10
};