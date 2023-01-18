// ScriptStruct /Script/AnimGraphRuntime.RBFParams
// Size: 0x38
struct FRBFParams
{
	int TargetDimensions; // 0x0 (0x4)
	enum ERBFSolverType SolverType; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	float Radius; // 0x8 (0x4)
	bool bAutomaticRadius; // 0xc (0x1)
	enum ERBFFunctionType Function; // 0xd (0x1)
	enum ERBFDistanceMethod DistanceMethod; // 0xe (0x1)
	struct TEnumAsByte<EBoneAxis> TwistAxis; // 0xf (0x1)
	float WeightThreshold; // 0x10 (0x4)
	enum ERBFNormalizeMethod NormalizeMethod; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	struct FVector MedianReference; // 0x18 (0x18)
	float MedianMin; // 0x30 (0x4)
	float MedianMax; // 0x34 (0x4)
};

