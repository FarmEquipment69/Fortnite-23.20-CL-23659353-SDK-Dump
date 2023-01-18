// Class /Script/ContextualAnimation.ContextualAnimSceneActorComponent
// Size: 0x5f0
class UContextualAnimSceneActorComponent : public UPrimitiveComponent
{
	unsigned char unreflected_540[0x8]; // 0x540 (0x8) 
	struct FMulticastInlineDelegate OnJoinedSceneDelegate; // 0x548 (0x10)
	struct FMulticastInlineDelegate OnLeftSceneDelegate; // 0x558 (0x10)
	class UContextualAnimSceneAsset* SceneAsset; // 0x568 (0x8)
	bool bEnableDebug; // 0x570 (0x1)
	unsigned char unreflected_571[0x7]; // 0x571 (0x7) 
	struct FContextualAnimSceneBindings RepBindings; // 0x578 (0x30)
	struct FContextualAnimSceneBindings Bindings; // 0x5a8 (0x30)
	struct TArray<struct FContextualAnimIKTarget> IKTargets; // 0x5d8 (0x10)
	bool bAllowPhysicsRotationDuringAnimRootMotionBackup; // 0x5e8 (0x1)
	unsigned char padding_5e9[0x7]; // 0x5e9 (0x7)

	/* Functions */

	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.StartContextualAnimScene (Underlying native function: StartContextualAnimScene 0x5bc9be0)
	bool StartContextualAnimScene(struct FContextualAnimSceneBindings& InBindings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnTickPose (Underlying native function: OnTickPose 0x7f586e4)
	void OnTickPose(class USkinnedMeshComponent*& SkinnedMeshComponent, float& DeltaTime, bool& bNeedsValidRootMotion); // (Final | Native | Protected)

	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_Bindings (Underlying native function: OnRep_Bindings 0x7f585b4)
	void OnRepBindings(struct FContextualAnimSceneBindings& LastRepBindings); // (Final | Native | Protected | HasOutParms)

	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnMontageBlendingOut (Underlying native function: OnMontageBlendingOut 0x5bc9af0)
	void OnMontageBlendingOut(class UAnimMontage*& Montage, bool& bInterrupted); // (Final | Native | Protected)

	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnLeftScene (Underlying native function: OnLeftScene 0x7f58318)
	void OnLeftScene(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnJoinedScene (Underlying native function: OnJoinedScene 0x7f58268)
	void OnJoinedScene(struct FContextualAnimSceneBindings& InBindings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.GetIKTargets (Underlying native function: GetIKTargets 0x7f57f20)
	struct TArray<struct FContextualAnimIKTarget> GetIKTargets(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.GetIKTargetByGoalName (Underlying native function: GetIKTargetByGoalName 0x7f57e3c)
	struct FContextualAnimIKTarget GetIKTargetByGoalName(struct FName& GoalName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

