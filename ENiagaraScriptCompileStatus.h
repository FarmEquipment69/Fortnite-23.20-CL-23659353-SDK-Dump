// Enum /Script/Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8_t
{
  NCS_Unknown = 0,
  NCS_Dirty = 1,
  NCS_Error = 2,
  NCS_UpToDate = 3,
  NCS_BeingCreated = 4,
  NCS_UpToDateWithWarnings = 5,
  NCS_ComputeUpToDateWithWarnings = 6,
  NCS_MAX = 7
};