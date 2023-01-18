// Enum /Script/FortniteUI.EBattleMapTimelineWidgetState
enum class EBattleMapTimelineWidgetState : uint8_t
{
  None = 0,
  HasNext = 1,
  HasPrevious = 2,
  IsInReplay = 4,
  CanBeScrubbed = 8,
  IsStreaming = 16,
  Invalid = 32,
  EBattleMapTimelineWidgetState_MAX = 33
};