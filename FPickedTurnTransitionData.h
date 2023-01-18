// ScriptStruct /Script/FortniteGame.PickedTurnTransitionData
// Size: 0x78
struct FPickedTurnTransitionData
{
	class UAnimMontage* MontageToPlay; // 0x0 (0x8)
	float PlayRate; // 0x8 (0x4)
	struct FName StartSection; // 0xc (0x4)
	struct FName RotateCurve; // 0x10 (0x4)
	bool bStopWhenAbilityEnds; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	float RootMotionTranslationScale; // 0x18 (0x4)
	enum FTurnTransitionCondition Condition; // 0x1c (0x1)
	bool bDisablePhysicsRotation; // 0x1d (0x1)
	unsigned char unreflected_1e[0x2]; // 0x1e (0x2) 
	float FacingPrecision; // 0x20 (0x4)
	bool bMaintainRotationOnFacing; // 0x24 (0x1)
	bool bLockBehaviorTree; // 0x25 (0x1)
	bool bUnlockBehaviorTreeOnFacing; // 0x26 (0x1)
	bool bScaleRotationToMatchDesired; // 0x27 (0x1)
	bool bUpdateRotationToMatchDesired; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	float MinRotationScaleToMatchDesired; // 0x2c (0x4)
	float MaxRotationScaleToMatchDesired; // 0x30 (0x4)
	float MaxUpdateRotationAngle; // 0x34 (0x4)
	struct FGameplayTagContainer RequiredGameplayTags; // 0x38 (0x20)
	struct FGameplayTagContainer GameplayTagsToRemoveOnFinished; // 0x58 (0x20)
};

