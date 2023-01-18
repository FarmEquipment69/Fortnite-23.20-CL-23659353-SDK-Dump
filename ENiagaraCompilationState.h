// Enum /Script/Niagara.ENiagaraCompilationState
enum class ENiagaraCompilationState : uint8_t
{
  CheckDDC = 0,
  Precompile = 1,
  StartCompileJob = 2,
  AwaitResult = 3,
  OptimizeByteCode = 4,
  ProcessResult = 5,
  PutToDDC = 6,
  Finished = 7,
  Aborted = 8,
  ENiagaraCompilationState_MAX = 9
};