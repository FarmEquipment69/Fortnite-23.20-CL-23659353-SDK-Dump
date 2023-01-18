// Class /Script/FortniteGame.FortAIAnimInstance
// Size: 0x570
class UFortAIAnimInstance : public UFortAnimInstance
{
	float Speed; // 0x530 (0x4)
	float UpwardVelocity; // 0x534 (0x4)
	float MovementDirection; // 0x538 (0x4)
	float LowerBodyCurrentWeight; // 0x53c (0x4)
	float LowerBodyBlendTime; // 0x540 (0x4)
	int RunVariation; // 0x544 (0x4)
	int WalkVariation; // 0x548 (0x4)
	struct TEnumAsByte<EFortMovementStyle> MovementStyle; // 0x54c (0x1)
	unsigned char unreflected_54d[0x3]; // 0x54d (0x3) 
	unsigned char BlockGetUp; // 0x550 (0x1)
	unsigned char bIsStunned; // 0x550 (0x1)
	unsigned char bIsKnockedback; // 0x550 (0x1)
	unsigned char bIsStaggered; // 0x550 (0x1)
	unsigned char bIsSleeping; // 0x550 (0x1)
	unsigned char bIsDBNO; // 0x550 (0x1)
	unsigned char bIsDead; // 0x550 (0x1)
	unsigned char bIsSprinting; // 0x550 (0x1)
	unsigned char bIsCowering; // 0x551 (0x1)
	unsigned char bHasWeapon; // 0x551 (0x1)
	unsigned char bAdditiveHitReactLoop; // 0x551 (0x1)
	unsigned char bUseAltSleepAnim; // 0x551 (0x1)
	unsigned char bShouldUseMovementLocomotion; // 0x551 (0x1)
	unsigned char bCanLookAtAimTarget; // 0x551 (0x1)
	unsigned char bIsTargeting; // 0x551 (0x1)
	unsigned char bTransitionToIdle; // 0x551 (0x1)
	unsigned char unreflected_552[0x2]; // 0x552 (0x2) 
	struct TEnumAsByte<EFortWeaponCoreAnimation> WeaponCoreAnimation; // 0x554 (0x1)
	bool bStartTurn; // 0x555 (0x1)
	unsigned char unreflected_556[0x2]; // 0x556 (0x2) 
	float TurnAngle; // 0x558 (0x4)
	float TurnRate; // 0x55c (0x4)
	float ForwardHeading; // 0x560 (0x4)
	float MovementHeading; // 0x564 (0x4)
	float HeadingDelta; // 0x568 (0x4)
	unsigned char padding_56c[0x4]; // 0x56c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortAIAnimInstance.AnimNotify_SleepingFullyBlended (Underlying native function: AnimNotify_SleepingFullyBlended 0x820c3b0)
	void AnimNotifySleepingFullyBlended(class UAnimNotify*& Notify); // (Final | Native | Protected)
};

