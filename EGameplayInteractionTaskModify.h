// Enum /Script/GameplayInteractionsModule.EGameplayInteractionTaskModify
enum class EGameplayInteractionTaskModify : uint8_t
{
  OnEnterStateUndoOnExitState = 0,
  OnEnterState = 1,
  OnExitState = 2,
  OnExitStateFailed = 3,
  OnExitStateSucceeded = 4,
  EGameplayInteractionTaskModify_MAX = 5
};