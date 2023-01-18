// ScriptStruct /Script/AnimationBudgetAllocator.AnimationBudgetAllocatorParameters
// Size: 0x58
struct FAnimationBudgetAllocatorParameters
{
	float BudgetInMs; // 0x0 (0x4)
	float MinQuality; // 0x4 (0x4)
	int MaxTickRate; // 0x8 (0x4)
	float WorkUnitSmoothingSpeed; // 0xc (0x4)
	float AlwaysTickFalloffAggression; // 0x10 (0x4)
	float InterpolationFalloffAggression; // 0x14 (0x4)
	int InterpolationMaxRate; // 0x18 (0x4)
	int MaxInterpolatedComponents; // 0x1c (0x4)
	float InterpolationTickMultiplier; // 0x20 (0x4)
	float InitialEstimatedWorkUnitTimeMs; // 0x24 (0x4)
	int MaxTickedOffsreenComponents; // 0x28 (0x4)
	int StateChangeThrottleInFrames; // 0x2c (0x4)
	float BudgetFactorBeforeReducedWork; // 0x30 (0x4)
	float BudgetFactorBeforeReducedWorkEpsilon; // 0x34 (0x4)
	float BudgetPressureSmoothingSpeed; // 0x38 (0x4)
	int ReducedWorkThrottleMinInFrames; // 0x3c (0x4)
	int ReducedWorkThrottleMaxInFrames; // 0x40 (0x4)
	float BudgetFactorBeforeAggressiveReducedWork; // 0x44 (0x4)
	int ReducedWorkThrottleMaxPerFrame; // 0x48 (0x4)
	float BudgetPressureBeforeEmergencyReducedWork; // 0x4c (0x4)
	float AutoCalculatedSignificanceMaxDistance; // 0x50 (0x4)
	unsigned char padding_54[0x4]; // 0x54 (0x4)
};

