// AnimBlueprintGeneratedClass /Game/Characters/Player/Male/Male_Avg_Base/AnimLayerInterface/MovementModeLayerInterface.MovementModeLayerInterface_C
// Size: 0x28
class IMovementModeLayerInterface_C : public IAnimLayerInterface
{

	/* Functions */

	// Function /Game/Characters/Player/Male/Male_Avg_Base/AnimLayerInterface/MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_AimOffset (Has no native function)
	void MovementModeAimOffset(struct FPoseLink& InAimOffsetsPose, struct FPoseLink& InSourcePosePreAimOffsets, struct FPoseLink& MovementModeAimOffset); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/AnimLayerInterface/MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_FinalPoseOverride (Has no native function)
	void MovementModeFinalPoseOverride(struct FPoseLink& InFinalPose, struct FPoseLink& MovementModeFinalPoseOverride); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/AnimLayerInterface/MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_FullBodyOverride (Has no native function)
	void MovementModeFullBodyOverride(struct FPoseLink& InputPoseFullBody, struct FPoseLink& MovementModeFullBodyOverride); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/AnimLayerInterface/MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_SourcePose (Has no native function)
	void MovementModeSourcePose(struct FPoseLink& InSourcePoseBase, struct FPoseLink& MovementModeSourcePose); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/AnimLayerInterface/MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_LocomotionAdditives (Has no native function)
	void MovementModeLocomotionAdditives(struct FPoseLink& InLocomotionAdditivesPose, struct FPoseLink& MovementModeLocomotionAdditives); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/AnimLayerInterface/MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_LowerBodyOverride (Has no native function)
	void MovementModeLowerBodyOverride(struct FPoseLink& InLowerBodyPose, struct FPoseLink& InSourcePose, struct FPoseLink& InSourcePosePreUpperBodySlot, struct FPoseLink& MovementModeLowerBodyOverride); // (HasOutParms | BlueprintCallable | BlueprintEvent)
};

