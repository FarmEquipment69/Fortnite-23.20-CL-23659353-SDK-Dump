// Class /Script/ContextualAnimation.ContextualAnimUtilities
// Size: 0x28
class UContextualAnimUtilities : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetSectionAndAnimSetIndices (Underlying native function: BP_SceneBindings_GetSectionAndAnimSetIndices 0x7f57430)
	static void BPSceneBindingsGetSectionAndAnimSetIndices(struct FContextualAnimSceneBindings& Bindings, int& SectionIdx, int& AnimSetIdx); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetSceneAsset (Underlying native function: BP_SceneBindings_GetSceneAsset 0x7f57334)
	static class UContextualAnimSceneAsset* BPSceneBindingsGetSceneAsset(struct FContextualAnimSceneBindings& Bindings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindings (Underlying native function: BP_SceneBindings_GetBindings 0x7f57280)
	static struct TArray<struct FContextualAnimSceneBinding> BPSceneBindingsGetBindings(struct FContextualAnimSceneBindings& Bindings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindingByRole (Underlying native function: BP_SceneBindings_GetBindingByRole 0x7f57140)
	static struct FContextualAnimSceneBinding BPSceneBindingsGetBindingByRole(struct FContextualAnimSceneBindings& Bindings, struct FName& Role); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindingByActor (Underlying native function: BP_SceneBindings_GetBindingByActor 0x7f56fec)
	static struct FContextualAnimSceneBinding BPSceneBindingsGetBindingByActor(struct FContextualAnimSceneBindings& Bindings, class AActor*& Actor); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetAlignmentTransformFromBinding (Underlying native function: BP_SceneBindings_GetAlignmentTransformFromBinding 0x7f56df4)
	static struct FTransform BPSceneBindingsGetAlignmentTransformFromBinding(struct FContextualAnimSceneBindings& Bindings, struct FContextualAnimSceneBinding& Binding, struct FContextualAnimSetPivot& Pivot); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot (Underlying native function: BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot 0x7f56bf4)
	static struct FTransform BPSceneBindingsGetAlignmentTransformForRoleRelativeToPivot(struct FContextualAnimSceneBindings& Bindings, struct FName& Role, struct FContextualAnimSetPivot& Pivot, float& Time); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole (Underlying native function: BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole 0x7f56a48)
	static struct FTransform BPSceneBindingsGetAlignmentTransformForRoleRelativeToOtherRole(struct FContextualAnimSceneBindings& Bindings, struct FName& Role, struct FName& RelativeToRole, float& Time); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_CalculateAnimSetPivots (Underlying native function: BP_SceneBindings_CalculateAnimSetPivots 0x7f56934)
	static void BPSceneBindingsCalculateAnimSetPivots(struct FContextualAnimSceneBindings& Bindings, struct TArray<struct FContextualAnimSetPivot>& OutPivots); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_AddOrUpdateWarpTargetsForBindings (Underlying native function: BP_SceneBindings_AddOrUpdateWarpTargetsForBindings 0x7f56894)
	static void BPSceneBindingsAddOrUpdateWarpTargetsForBindings(struct FContextualAnimSceneBindings& Bindings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_MakeFromActorWithExternalTransform (Underlying native function: BP_SceneBindingContext_MakeFromActorWithExternalTransform 0x7f561a4)
	static struct FContextualAnimSceneBindingContext BPSceneBindingContextMakeFromActorWithExternalTransform(class AActor*& Actor, struct FTransform& ExternalTransform); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_MakeFromActor (Underlying native function: BP_SceneBindingContext_MakeFromActor 0x7f560c8)
	static struct FContextualAnimSceneBindingContext BPSceneBindingContextMakeFromActor(class AActor*& Actor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetVelocity (Underlying native function: BP_SceneBindingContext_GetVelocity 0x7f55fe4)
	static struct FVector BPSceneBindingContextGetVelocity(struct FContextualAnimSceneBindingContext& BindingContext); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetTransform (Underlying native function: BP_SceneBindingContext_GetTransform 0x7f55ee4)
	static struct FTransform BPSceneBindingContextGetTransform(struct FContextualAnimSceneBindingContext& BindingContext); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetActor (Underlying native function: BP_SceneBindingContext_GetActor 0x7f55dc8)
	static class AActor* BPSceneBindingContextGetActor(struct FContextualAnimSceneBindingContext& BindingContext); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetSkeletalMesh (Underlying native function: BP_SceneBinding_GetSkeletalMesh 0x7f56738)
	static class USkeletalMeshComponent* BPSceneBindingGetSkeletalMesh(struct FContextualAnimSceneBinding& Binding); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetRoleFromBinding (Underlying native function: BP_SceneBinding_GetRoleFromBinding 0x7f565d0)
	static struct FName BPSceneBindingGetRoleFromBinding(struct FContextualAnimSceneBindings& Bindings, struct FContextualAnimSceneBinding& Binding); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetAnimationFromBinding (Underlying native function: BP_SceneBinding_GetAnimationFromBinding 0x7f56470)
	static class UAnimSequenceBase* BPSceneBindingGetAnimationFromBinding(struct FContextualAnimSceneBindings& Bindings, struct FContextualAnimSceneBinding& Binding); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetActor (Underlying native function: BP_SceneBinding_GetActor 0x7f56338)
	static class AActor* BPSceneBindingGetActor(struct FContextualAnimSceneBinding& Binding); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_Montage_GetSectionTimeLeftFromPos (Underlying native function: BP_Montage_GetSectionTimeLeftFromPos 0x7f55cf8)
	static float BPMontageGetSectionTimeLeftFromPos(class UAnimMontage*& Montage, float& Position); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_Montage_GetSectionStartAndEndTime (Underlying native function: BP_Montage_GetSectionStartAndEndTime 0x7f55ba8)
	static void BPMontageGetSectionStartAndEndTime(class UAnimMontage*& Montage, int& SectionIndex, float& OutStartTime, float& OutEndTime); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_Montage_GetSectionLength (Underlying native function: BP_Montage_GetSectionLength 0x7f55adc)
	static float BPMontageGetSectionLength(class UAnimMontage*& Montage, int& SectionIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_DrawDebugPose (Underlying native function: BP_DrawDebugPose 0x7f550cc)
	static void BPDrawDebugPose(class UObject*& WorldContextObject, class UAnimSequenceBase*& Animation, float& Time, struct FTransform& LocalToWorldTransform, struct FLinearColor& Color, float& LifeTime, float& Thickness); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_CreateContextualAnimSceneBindingsForTwoActors (Underlying native function: BP_CreateContextualAnimSceneBindingsForTwoActors 0x7f54eb0)
	static bool BPCreateContextualAnimSceneBindingsForTwoActors(class UContextualAnimSceneAsset*& SceneAsset, struct FContextualAnimSceneBindingContext& Primary, struct FContextualAnimSceneBindingContext& Secondary, struct FContextualAnimSceneBindings& OutBindings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_CreateContextualAnimSceneBindings (Underlying native function: BP_CreateContextualAnimSceneBindings 0x7f54d08)
	static bool BPCreateContextualAnimSceneBindings(class UContextualAnimSceneAsset*& SceneAsset, struct TMap<struct FName, struct FContextualAnimSceneBindingContext>& Params, struct FContextualAnimSceneBindings& OutBindings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

