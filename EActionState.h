// Enum /Script/FortniteAI.EActionState
enum class EActionState : uint8_t
{
  TryingToEquip = 0,
  EquippingItem = 1,
  UsingItem = 2,
  WaitingItemTermination = 3,
  WaitBeforeEquippingNextItem = 4,
  ActionEndedWithNoError = 5,
  ActionEndedWithError = 6,
  EActionState_MAX = 7
};