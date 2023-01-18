// Enum /Script/Engine.EAnimPropertyAccessCallSite
enum class EAnimPropertyAccessCallSite : uint8_t
{
  WorkerThread_Unbatched = 0,
  WorkerThread_Batched_PreEventGraph = 1,
  WorkerThread_Batched_PostEventGraph = 2,
  GameThread_Batched_PreEventGraph = 3,
  GameThread_Batched_PostEventGraph = 4,
  EAnimPropertyAccessCallSite_MAX = 5
};