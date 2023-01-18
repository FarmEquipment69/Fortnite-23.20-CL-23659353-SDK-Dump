// Enum /Script/Engine.ENormalMode
enum class ENormalMode : uint8_t
{
  NM_PreserveSmoothingGroups = 0,
  NM_RecalculateNormals = 1,
  NM_RecalculateNormalsSmooth = 2,
  NM_RecalculateNormalsHard = 3,
  TEMP_BROKEN = 4,
  ENormalMode_MAX = 5
};