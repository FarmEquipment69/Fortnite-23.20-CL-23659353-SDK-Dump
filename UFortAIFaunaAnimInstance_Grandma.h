// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma
// Size: 0x790
class UFortAIFaunaAnimInstance_Grandma : public UFortAIFaunaAnimInstance
{
	class AFortAIPawn* AIPawn; // 0x6d0 (0x8)
	float MeshScale; // 0x6d8 (0x4)
	bool bShouldPlayFullBodyInPlace; // 0x6dc (0x1)
	unsigned char unreflected_6dd[0x3]; // 0x6dd (0x3) 
	float BlinkAlpha; // 0x6e0 (0x4)
	float WalkRunPlayRate; // 0x6e4 (0x4)
	float LocomotionPoseAdditiveAlpha; // 0x6e8 (0x4)
	bool bEnableSniffAdditive; // 0x6ec (0x1)
	bool bEnableAlertAdditive; // 0x6ed (0x1)
	bool bIdleStartTurn; // 0x6ee (0x1)
	bool bLookAtAdditiveTurnAlpha; // 0x6ef (0x1)
	bool bIsIdleShuffleTurn; // 0x6f0 (0x1)
	unsigned char unreflected_6f1[0x3]; // 0x6f1 (0x3) 
	float IdleShuffleBodyBend; // 0x6f4 (0x4)
	float IdleShufflePlayRate; // 0x6f8 (0x4)
	bool bIdleShuffleTurnDirection; // 0x6fc (0x1)
	unsigned char unreflected_6fd[0x3]; // 0x6fd (0x3) 
	float TurnInPlaceModulatedSpeed; // 0x700 (0x4)
	float MaxSpeedFullBodyInPlace; // 0x704 (0x4)
	float MinCurveValueFullBodyInPlace; // 0x708 (0x4)
	float LocomotionPoseAdditiveAlphaInterpRate; // 0x70c (0x4)
	int SniffAdditiveFrequenceySeconds; // 0x710 (0x4)
	int AlertAdditiveFrequenceySeconds; // 0x714 (0x4)
	int PawnIDScale; // 0x718 (0x4)
	struct FName ShouldPlayFullBodyInPlaceCurveName; // 0x71c (0x4)
	struct FName BlinkAlphaCurveName; // 0x720 (0x4)
	float IdleStartTurnInterruptibleThreshold; // 0x724 (0x4)
	float IdleShuffleBodyBendMultiplier; // 0x728 (0x4)
	float IdleShuffleTurnThreshold; // 0x72c (0x4)
	float IdleShuffleTurnDirectionThreshold; // 0x730 (0x4)
	float LookAtAdditiveTurnAlphaThreshold; // 0x734 (0x4)
	float IdleShufflePlayRateInRangeA; // 0x738 (0x4)
	float IdleShufflePlayRateInRangeB; // 0x73c (0x4)
	float IdleShufflePlayRateOutRangeA; // 0x740 (0x4)
	float IdleShufflePlayRateOutRangeB; // 0x744 (0x4)
	float TurnInPlaceModulatedSpeedFactor; // 0x748 (0x4)
	bool bIsMovingOnGroundORIsSurfaceSwimming; // 0x74c (0x1)
	bool bStateRuleDefaultJumpToJumpApex; // 0x74d (0x1)
	bool bStateRuleTurnIdleIdle; // 0x74e (0x1)
	bool bStateRuleTurnIdleMoving; // 0x74f (0x1)
	bool bStateRuleMovingTurnIdle; // 0x750 (0x1)
	bool bStateRuleTurnMovingMoving; // 0x751 (0x1)
	bool bStateRuleMovingTurnMoving; // 0x752 (0x1)
	bool bStateRuleIdleMoving; // 0x753 (0x1)
	bool bStateRuleMovingIdle; // 0x754 (0x1)
	bool bStateRuleJumpLandIdle; // 0x755 (0x1)
	bool bStateRuleJumpLandMoving; // 0x756 (0x1)
	bool bStateRuleJumpStartJumpApex; // 0x757 (0x1)
	bool bStateRuleFallMoving; // 0x758 (0x1)
	bool bStateRuleFallIdle; // 0x759 (0x1)
	bool bStateRuleSwimIdleSwimLoco; // 0x75a (0x1)
	bool bStateRuleSwimLocoSwimIdle; // 0x75b (0x1)
	bool bStateRuleSwimTurnSwimIdle; // 0x75c (0x1)
	bool bStateRuleSwimTurnSwimLoco; // 0x75d (0x1)
	bool bAnimRuleNegativeTurnAngle; // 0x75e (0x1)
	unsigned char unreflected_75f[0x1]; // 0x75f (0x1) 
	float InterruptibleMaxCheck; // 0x760 (0x4)
	float SpeedStopTransition; // 0x764 (0x4)
	float SpeedIdleMoveTransition; // 0x768 (0x4)
	float SpeedMovingTurnIdleTransition; // 0x76c (0x4)
	float SpeedToMoveMin; // 0x770 (0x4)
	float SpeedToMoveMinWhileRiding; // 0x774 (0x4)
	float SpeedToMoveMinWhileAcceleratingAndRiding; // 0x778 (0x4)
	float StateTimeFromEndThreshold; // 0x77c (0x4)
	float SpeedIdleStartTurnThreshold; // 0x780 (0x4)
	float SpeedFallMovingThreshold; // 0x784 (0x4)
	unsigned char padding_788[0x8]; // 0x788 (0x8)

	/* Functions */

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateStateVariables (Underlying native function: UpdateStateVariables 0x721d0e8)
	void UpdateStateVariables(bool& bAccelerating); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateShouldPlayFullBodyInPlace (Underlying native function: UpdateShouldPlayFullBodyInPlace 0x721d0c0)
	void UpdateShouldPlayFullBodyInPlace(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMovingRates (Underlying native function: UpdateMovingRates 0x721d068)
	void UpdateMovingRates(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMeshScale (Underlying native function: UpdateMeshScale 0x721d044)
	void UpdateMeshScale(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateLocomotionPoseAlpha (Underlying native function: UpdateLocomotionPoseAlpha 0x721d018)
	void UpdateLocomotionPoseAlpha(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateIdleStartTurn (Underlying native function: UpdateIdleStartTurn 0x721cf74)
	void UpdateIdleStartTurn(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableSniffAdditive (Underlying native function: UpdateEnableSniffAdditive 0x721cf38)
	void UpdateEnableSniffAdditive(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableAlertAdditive (Underlying native function: UpdateEnableAlertAdditive 0x721cef0)
	void UpdateEnableAlertAdditive(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateBlinkAlpha (Underlying native function: UpdateBlinkAlpha 0x721ce94)
	void UpdateBlinkAlpha(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineShouldPlayFullBodyInPlace (Underlying native function: DetermineShouldPlayFullBodyInPlace 0x721ce28)
	bool DetermineShouldPlayFullBodyInPlace(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineIdleStartTurn (Underlying native function: DetermineIdleStartTurn 0x721cdbc)
	bool DetermineIdleStartTurn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableSniffAdditive (Underlying native function: DetermineEnableSniffAdditive 0x721cd9c)
	bool DetermineEnableSniffAdditive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableAlertAdditive (Underlying native function: DetermineEnableAlertAdditive 0x721cd5c)
	bool DetermineEnableAlertAdditive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateWalkRunPlayRate (Underlying native function: CalculateWalkRunPlayRate 0x721cd38)
	float CalculateWalkRunPlayRate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateMeshScale (Underlying native function: CalculateMeshScale 0x721cd18)
	float CalculateMeshScale(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateLocomotionPoseAlpha (Underlying native function: CalculateLocomotionPoseAlpha 0x721cc28)
	float CalculateLocomotionPoseAlpha(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateBlinkAlpha (Underlying native function: CalculateBlinkAlpha 0x721cbd8)
	float CalculateBlinkAlpha(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

