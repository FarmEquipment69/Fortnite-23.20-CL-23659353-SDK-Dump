// Class /Script/ContextualAnimation.ContextualAnimManager
// Size: 0x90
class UContextualAnimManager : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct TSet<class UContextualAnimSceneActorComponent*> SceneActorCompContainer; // 0x30 (0x50)
	struct TArray<class UContextualAnimSceneInstance*> Instances; // 0x80 (0x10)

	/* Functions */

	// Function /Script/ContextualAnimation.ContextualAnimManager.TryStopSceneWithActor (Underlying native function: TryStopSceneWithActor 0x7f58ad4)
	bool TryStopSceneWithActor(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ContextualAnimation.ContextualAnimManager.OnSceneInstanceEnded (Underlying native function: OnSceneInstanceEnded 0x7f58650)
	void OnSceneInstanceEnded(class UContextualAnimSceneInstance*& SceneInstance); // (Final | Native | Protected)

	// Function /Script/ContextualAnimation.ContextualAnimManager.IsActorInAnyScene (Underlying native function: IsActorInAnyScene 0x7f581a0)
	bool IsActorInAnyScene(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ContextualAnimation.ContextualAnimManager.GetSceneWithActor (Underlying native function: GetSceneWithActor 0x7f580dc)
	class UContextualAnimSceneInstance* GetSceneWithActor(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ContextualAnimation.ContextualAnimManager.GetContextualAnimManager (Underlying native function: GetContextualAnimManager 0x7f57dac)
	static class UContextualAnimManager* GetContextualAnimManager(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ContextualAnimation.ContextualAnimManager.BP_TryStartScene (Underlying native function: BP_TryStartScene 0x7f5757c)
	class UContextualAnimSceneInstance* BPTryStartScene(class UContextualAnimSceneAsset*& SceneAsset, struct FContextualAnimStartSceneParams& Params); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

