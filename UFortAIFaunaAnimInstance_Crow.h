// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Crow
// Size: 0x700
class UFortAIFaunaAnimInstance_Crow : public UFortAIFaunaAnimInstance
{
	float WingFlapPlayRate; // 0x6d0 (0x4)
	bool bIsDescending; // 0x6d4 (0x1)
	bool bIsGliding; // 0x6d5 (0x1)
	bool bIsFlying; // 0x6d6 (0x1)
	bool bIsFlyingSlow; // 0x6d7 (0x1)
	bool bIsLanding; // 0x6d8 (0x1)
	unsigned char unreflected_6d9[0x3]; // 0x6d9 (0x3) 
	float WingFlapPlayRateInRangeA; // 0x6dc (0x4)
	float WingFlapPlayRateInRangeB; // 0x6e0 (0x4)
	float WingFlapPlayRateOutRangeA; // 0x6e4 (0x4)
	float WingFlapPlayRateOutRangeB; // 0x6e8 (0x4)
	float ZVelocityDescendingThreshold; // 0x6ec (0x4)
	float GlidingSpeedThreshold; // 0x6f0 (0x4)
	float FlyingSpeedThreshold; // 0x6f4 (0x4)
	float FlyingSlowSpeedThreshold; // 0x6f8 (0x4)
	float LandingSpeedThreshold; // 0x6fc (0x4)
};

