// Enum /Script/Engine.EPropertyAccessCopyBatch
enum class EPropertyAccessCopyBatch : uint8_t
{
  InternalUnbatched = 0,
  ExternalUnbatched = 1,
  InternalBatched = 2,
  ExternalBatched = 3,
  Count = 4,
  EPropertyAccessCopyBatch_MAX = 5
};