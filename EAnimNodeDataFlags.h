// Enum /Script/Engine.EAnimNodeDataFlags
enum class EAnimNodeDataFlags : uint8_t
{
  None = 0,
  HasInitialUpdateFunction = 1,
  HasBecomeRelevantFunction = 2,
  HasUpdateFunction = 4,
  EAnimNodeDataFlags_MAX = 5
};