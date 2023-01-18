// Enum /Script/GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8_t
{
  StartOnTop = 0,
  StartAtEnd = 1,
  RequestCancelAndStartOnTop = 2,
  RequestCancelAndStartAtEnd = 3,
  ETaskResourceOverlapPolicy_MAX = 4
};