// ScriptStruct /Script/AnimGraphRuntime.IKFootPelvisPullDownSolver
// Size: 0x70
struct FIKFootPelvisPullDownSolver
{
	struct FVectorRK4SpringInterpolator* PelvisAdjustmentInterp; // 0x0 (0x8)
	unsigned char unreflected_8[0x58]; // 0x8 (0x58) 
	float PelvisAdjustmentInterpAlpha; // 0x60 (0x4)
	float PelvisAdjustmentMaxDistance; // 0x64 (0x4)
	float PelvisAdjustmentErrorTolerance; // 0x68 (0x4)
	int PelvisAdjustmentMaxIter; // 0x6c (0x4)
};

