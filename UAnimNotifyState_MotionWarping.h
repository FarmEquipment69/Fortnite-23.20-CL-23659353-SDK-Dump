// Class /Script/MotionWarping.AnimNotifyState_MotionWarping
// Size: 0x38
class UAnimNotifyState_MotionWarping : public UAnimNotifyState
{
	class URootMotionModifier* RootMotionModifier; // 0x30 (0x8)

	/* Functions */

	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate (Has no native function)
	void OnWarpUpdate(class UMotionWarpingComponent*& MotionWarpingComp, class URootMotionModifier*& Modifier); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd (Has no native function)
	void OnWarpEnd(class UMotionWarpingComponent*& MotionWarpingComp, class URootMotionModifier*& Modifier); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin (Has no native function)
	void OnWarpBegin(class UMotionWarpingComponent*& MotionWarpingComp, class URootMotionModifier*& Modifier); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate (Underlying native function: OnRootMotionModifierUpdate 0x7f64ae0)
	void OnRootMotionModifierUpdate(class UMotionWarpingComponent*& MotionWarpingComp, class URootMotionModifier*& Modifier); // (Final | Native | Public | Const)

	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate (Underlying native function: OnRootMotionModifierDeactivate 0x7f649f4)
	void OnRootMotionModifierDeactivate(class UMotionWarpingComponent*& MotionWarpingComp, class URootMotionModifier*& Modifier); // (Final | Native | Public | Const)

	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate (Underlying native function: OnRootMotionModifierActivate 0x7f64908)
	void OnRootMotionModifierActivate(class UMotionWarpingComponent*& MotionWarpingComp, class URootMotionModifier*& Modifier); // (Final | Native | Public | Const)

	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier (Underlying native function: AddRootMotionModifier 0x7f6393c)
	class URootMotionModifier* AddRootMotionModifier(class UMotionWarpingComponent*& MotionWarpingComp, class UAnimSequenceBase*& Animation, float& StartTime, float& EndTime); // (Native | Event | Public | BlueprintEvent | Const)
};

