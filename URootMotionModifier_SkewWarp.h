// Class /Script/MotionWarping.RootMotionModifier_SkewWarp
// Size: 0x240
class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp
{

	/* Functions */

	// Function /Script/MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp (Underlying native function: AddRootMotionModifierSkewWarp 0x7f63cf4)
	static class URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(class UMotionWarpingComponent*& InMotionWarpingComp, class UAnimSequenceBase*& InAnimation, float& InStartTime, float& InEndTime, struct FName& InWarpTargetName, enum EWarpPointAnimProvider& InWarpPointAnimProvider, struct FTransform& InWarpPointAnimTransform, struct FName& InWarpPointAnimBoneName, bool& bInWarpTranslation, bool& bInIgnoreZAxis, bool& bInWarpRotation, enum EMotionWarpRotationType& InRotationType, float& InWarpRotationTimeMultiplier); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

