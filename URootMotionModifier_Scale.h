// Class /Script/MotionWarping.RootMotionModifier_Scale
// Size: 0x100
class URootMotionModifier_Scale : public URootMotionModifier
{
	struct FVector Scale; // 0xe0 (0x18)
	unsigned char padding_f8[0x8]; // 0xf8 (0x8)

	/* Functions */

	// Function /Script/MotionWarping.RootMotionModifier_Scale.AddRootMotionModifierScale (Underlying native function: AddRootMotionModifierScale 0x7f63a84)
	static class URootMotionModifier_Scale* AddRootMotionModifierScale(class UMotionWarpingComponent*& InMotionWarpingComp, class UAnimSequenceBase*& InAnimation, float& InStartTime, float& InEndTime, struct FVector& InScale); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

