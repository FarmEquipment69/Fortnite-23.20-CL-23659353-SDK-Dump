// Class /Script/LabradorRuntime.FortAIFaunaAnimInstance_Labrador
// Size: 0x700
class UFortAIFaunaAnimInstance_Labrador : public UFortAIFaunaAnimInstance
{
	bool bHighVelocity; // 0x6d0 (0x1)
	bool bIsInterruptible; // 0x6d1 (0x1)
	bool bLocoToIdle; // 0x6d2 (0x1)
	bool bIdleToLoco; // 0x6d3 (0x1)
	bool bJumpStartToJumpLoop; // 0x6d4 (0x1)
	bool bJumpLandToMovement; // 0x6d5 (0x1)
	bool bIsRunning; // 0x6d6 (0x1)
	bool bIdleToFalling; // 0x6d7 (0x1)
	bool bToppledOnGround; // 0x6d8 (0x1)
	bool bTransitionToLand; // 0x6d9 (0x1)
	unsigned char unreflected_6da[0x2]; // 0x6da (0x2) 
	float TargetDistance; // 0x6dc (0x4)
	bool bTargetIsClose; // 0x6e0 (0x1)
	bool bIsToppled; // 0x6e1 (0x1)
	bool bIsLeaking; // 0x6e2 (0x1)
	unsigned char unreflected_6e3[0x1]; // 0x6e3 (0x1) 
	float MinHighVelocityMagnitude; // 0x6e4 (0x4)
	float MaxInterruptibleCurveValue; // 0x6e8 (0x4)
	float LocoIdleTransitionThreshold; // 0x6ec (0x4)
	float RunSpeedThreshold; // 0x6f0 (0x4)
	float JumpLandToMovementInterruptibleThreshold; // 0x6f4 (0x4)
	float MinTargetIsCloseDistance; // 0x6f8 (0x4)
	struct FName CurveNameInterruptible; // 0x6fc (0x4)
};

