// Class /Script/FortniteGame.FortHuskAnimInstance
// Size: 0x5c0
class UFortHuskAnimInstance : public UFortAIAnimInstance
{
	enum EFortHuskAnimType HuskAnimType; // 0x570 (0x1)
	unsigned char unreflected_571[0xb]; // 0x571 (0xb) 
	float FallAsleepAnimDuration; // 0x57c (0x4)
	float AltFallAsleepAnimDuration; // 0x580 (0x4)
	float WakeUpAnimDuration; // 0x584 (0x4)
	float FallAsleepToSleepingCrossfade; // 0x588 (0x4)
	float WakeUpToIdleCrossfade; // 0x58c (0x4)
	float DefaultToDwarfScaleRatio; // 0x590 (0x4)
	float LookAtAlpha; // 0x594 (0x4)
	float LookAtInterpSpeed; // 0x598 (0x4)
	float AdjustedLowerBodyWeight; // 0x59c (0x4)
	float AdjustedLowerBodyInterpSpeed; // 0x5a0 (0x4)
	float RunPlayRate; // 0x5a4 (0x4)
	float ZapperOverrideWeight; // 0x5a8 (0x4)
	float RunStartPosition; // 0x5ac (0x4)
	float AuthoredJogSpeed; // 0x5b0 (0x4)
	int MovementStyleIsWalking; // 0x5b4 (0x4)
	unsigned char bForceFullBodyMontage; // 0x5b8 (0x1)
	unsigned char bIsDwarf; // 0x5b8 (0x1)
	unsigned char bIsZapper; // 0x5b8 (0x1)
	unsigned char StateTransitionIdleToMove; // 0x5b8 (0x1)
	unsigned char StateTransitionIdleToFallAsleep; // 0x5b8 (0x1)
	unsigned char StateTransitionIdleToStunned; // 0x5b8 (0x1)
	unsigned char StateTransitionIdleToKnockedbackDown; // 0x5b8 (0x1)
	unsigned char StateTransitionIdleToKnockedbackUp; // 0x5b8 (0x1)
	unsigned char StateTransitionMoveToIdle; // 0x5b9 (0x1)
	unsigned char StateTransitionFallAsleepToSleeping; // 0x5b9 (0x1)
	unsigned char StateTransitionSleepingToWakeUp; // 0x5b9 (0x1)
	unsigned char StateTransitionWakeUpToIdle; // 0x5b9 (0x1)
	unsigned char StateTransitionStunnedToIdle; // 0x5b9 (0x1)
	unsigned char StateTransitionKnockedbackDownToIdle; // 0x5b9 (0x1)
	unsigned char StateTransitionKnockedbackUpToKnockedbackDown; // 0x5b9 (0x1)
	unsigned char padding_5ba[0x6]; // 0x5ba (0x6)

	/* Functions */

	// Function /Script/FortniteGame.FortHuskAnimInstance.SetHuskAnimType (Underlying native function: SetHuskAnimType 0x824687c)
	void SetHuskAnimType(enum EFortHuskAnimType& NewHuskAnimType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHuskAnimInstance.GetHuskAnimType (Underlying native function: GetHuskAnimType 0x8245d88)
	enum EFortHuskAnimType GetHuskAnimType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

