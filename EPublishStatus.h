// Enum /Script/FortniteGame.EPublishStatus
enum class EPublishStatus : uint8_t
{
  Banned = 0,
  CannotPublish = 1,
  NeedsCreatorName = 2,
  CanPublishProvisionally = 3,
  CanPublish = 4,
  EPublishStatus_MAX = 5
};