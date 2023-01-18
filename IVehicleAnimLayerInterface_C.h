// AnimBlueprintGeneratedClass /Game/Characters/Player/Male/Male_Avg_Base/AnimLayerInterface/VehicleAnimLayerInterface.VehicleAnimLayerInterface_C
// Size: 0x28
class IVehicleAnimLayerInterface_C : public IAnimLayerInterface
{

	/* Functions */

	// Function /Game/Characters/Player/Male/Male_Avg_Base/AnimLayerInterface/VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleFinalPoseOverride (Has no native function)
	void VehicleFinalPoseOverride(struct FPoseLink& InFinalPose, struct FPoseLink& VehicleFinalPoseOverride); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/AnimLayerInterface/VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleSplitBodyOverride (Has no native function)
	void VehicleSplitBodyOverride(struct FPoseLink& InPoseSplitBody, struct FPoseLink& InPoseUpperAndLowerBody, struct FFortAnimInput_TurnInPlace& TurnInPlace, struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink& VehicleSplitBodyOverride); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/AnimLayerInterface/VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleLowerBodyOverride (Has no native function)
	void VehicleLowerBodyOverride(struct FPoseLink& InPoseLowerBodyDefault, struct FPoseLink& InPoseUpperBody, struct FPoseLink& VehicleLowerBodyOverride); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/AnimLayerInterface/VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleFullBodyOverride (Has no native function)
	void VehicleFullBodyOverride(struct FPoseLink& InPoseFullBody, struct FPoseLink& VehicleFullBodyOverride); // (HasOutParms | BlueprintCallable | BlueprintEvent)
};

