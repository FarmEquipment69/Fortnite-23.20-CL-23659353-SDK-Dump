// Enum /Script/FortniteGame.EFortPlayerWorkOverFramesStage
enum class EFortPlayerWorkOverFramesStage : uint8_t
{
  NotProcessing = 0,
  PreloadingParts = 1,
  QueuePostLoad = 2,
  PostLoad = 3,
  InitializeCharacterParts = 4,
  FinishUpdatingParts = 5,
  FinishUpdatingCharacter = 6,
  NumTypes = 7,
  EFortPlayerWorkOverFramesStage_MAX = 8
};