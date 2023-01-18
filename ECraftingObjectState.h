// Enum /Script/CraftingRuntime.ECraftingObjectState
enum class ECraftingObjectState : uint8_t
{
  Invalid = 0,
  Idle = 1,
  Crafting = 2,
  Ready = 3,
  OverCrafting = 4,
  Resetting = 5,
  TotalStates = 6,
  ECraftingObjectState_MAX = 7
};