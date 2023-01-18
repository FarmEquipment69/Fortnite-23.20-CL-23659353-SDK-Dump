// Enum /Script/AnimGraphRuntime.EAnimFunctionCallSite
enum class EAnimFunctionCallSite : uint8_t
{
  OnInitialize = 0,
  OnUpdate = 1,
  OnBecomeRelevant = 2,
  OnEvaluate = 3,
  OnInitializePostRecursion = 4,
  OnUpdatePostRecursion = 5,
  OnBecomeRelevantPostRecursion = 6,
  OnEvaluatePostRecursion = 7,
  OnStartedBlendingOut = 8,
  OnStartedBlendingIn = 9,
  OnFinishedBlendingOut = 10,
  OnFinishedBlendingIn = 11,
  EAnimFunctionCallSite_MAX = 12
};