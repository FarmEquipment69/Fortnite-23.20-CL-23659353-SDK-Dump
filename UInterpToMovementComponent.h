// Class /Script/Engine.InterpToMovementComponent
// Size: 0x1b8
class UInterpToMovementComponent : public UMovementComponent
{
	float Duration; // 0x108 (0x4)
	unsigned char bPauseOnImpact; // 0x10c (0x1)
	unsigned char unreflected_10d[0x3]; // 0x10d (0x3) 
	bool bSweep; // 0x110 (0x1)
	enum ETeleportType TeleportType; // 0x111 (0x1)
	enum EInterpToBehaviourType BehaviourType; // 0x112 (0x1)
	bool bCheckIfStillInWorld; // 0x113 (0x1)
	unsigned char bForceSubStepping; // 0x114 (0x1)
	unsigned char unreflected_115[0x3]; // 0x115 (0x3) 
	struct FMulticastInlineDelegate OnInterpToReverse; // 0x118 (0x10)
	struct FMulticastInlineDelegate OnInterpToStop; // 0x128 (0x10)
	struct FMulticastInlineDelegate OnWaitBeginDelegate; // 0x138 (0x10)
	struct FMulticastInlineDelegate OnWaitEndDelegate; // 0x148 (0x10)
	struct FMulticastInlineDelegate OnResetDelegate; // 0x158 (0x10)
	float MaxSimulationTimeStep; // 0x168 (0x4)
	int MaxSimulationIterations; // 0x16c (0x4)
	struct TArray<struct FInterpControlPoint> ControlPoints; // 0x170 (0x10)
	unsigned char padding_180[0x38]; // 0x180 (0x38)

	/* Functions */

	// Function /Script/Engine.InterpToMovementComponent.StopSimulating (Underlying native function: StopSimulating 0x9cfabec)
	void StopSimulating(struct FHitResult& HitResult); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.InterpToMovementComponent.RestartMovement (Underlying native function: RestartMovement 0x9cf8100)
	void RestartMovement(float& InitialDirection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.InterpToMovementComponent.ResetControlPoints (Underlying native function: ResetControlPoints 0x9cf80c0)
	void ResetControlPoints(); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/Engine.InterpToMovementComponent.OnInterpToWaitEndDelegate__DelegateSignature (Has no native function)
	void OnInterpToWaitEndDelegateDelegateSignature(struct FHitResult& ImpactResult, float& Time); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/Engine.InterpToMovementComponent.OnInterpToWaitBeginDelegate__DelegateSignature (Has no native function)
	void OnInterpToWaitBeginDelegateDelegateSignature(struct FHitResult& ImpactResult, float& Time); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/Engine.InterpToMovementComponent.OnInterpToStopDelegate__DelegateSignature (Has no native function)
	void OnInterpToStopDelegateDelegateSignature(struct FHitResult& ImpactResult, float& Time); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/Engine.InterpToMovementComponent.OnInterpToReverseDelegate__DelegateSignature (Has no native function)
	void OnInterpToReverseDelegateDelegateSignature(struct FHitResult& ImpactResult, float& Time); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/Engine.InterpToMovementComponent.OnInterpToResetDelegate__DelegateSignature (Has no native function)
	void OnInterpToResetDelegateDelegateSignature(struct FHitResult& ImpactResult, float& Time); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/Engine.InterpToMovementComponent.FinaliseControlPoints (Underlying native function: FinaliseControlPoints 0x9cf6b40)
	void FinaliseControlPoints(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.InterpToMovementComponent.AddControlPointPosition (Underlying native function: AddControlPointPosition 0x9cf6190)
	void AddControlPointPosition(struct FVector& Pos, bool& bPositionIsRelative); // (Native | Public | HasDefaults | BlueprintCallable)
};

