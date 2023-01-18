// Enum /Script/Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
  CSD_KeyValueReadComplete = 0,
  CSD_KeyValueWriteComplete = 1,
  CSD_ValueChanged = 2,
  CSD_DocumentQueryComplete = 3,
  CSD_DocumentReadComplete = 4,
  CSD_DocumentWriteComplete = 5,
  CSD_DocumentConflictDetected = 6,
  CSD_MAX = 7
};