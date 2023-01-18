// Enum /Script/VkEngineTypes.EValkyrieProjectDescriptorFileVersion
enum class EValkyrieProjectDescriptorFileVersion : uint8_t
{
  Invalid = 0,
  Initial = 1,
  AddProjectMetadata = 2,
  AddedCompatibilityLabel = 3,
  AddBindings = 4,
  AddEditorPermissions = 5,
  AddEpicApp = 6,
  AddDataSets = 7,
  AddVersionSuffix = 8,
  AddProjectKind = 9,
  AddMetaDataTags = 10,
  LatestPlusOne = 11,
  Latest = 10,
  EValkyrieProjectDescriptorFileVersion_MAX = 12
};