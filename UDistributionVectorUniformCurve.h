// Class /Script/Engine.DistributionVectorUniformCurve
// Size: 0x60
class UDistributionVectorUniformCurve : public UDistributionVector
{
	struct FInterpCurveTwoVectors ConstantCurve; // 0x38 (0x18)
	unsigned char bLockAxes1; // 0x50 (0x1)
	unsigned char bLockAxes2; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	struct TEnumAsByte<EDistributionVectorLockFlags> LockedAxes[0x2]; // 0x54 (0x1) (ARRAY) 
	struct TEnumAsByte<EDistributionVectorMirrorFlags> MirrorFlags[0x3]; // 0x56 (0x1) (ARRAY) 
	unsigned char unreflected_59[0x3]; // 0x59 (0x3) 
	unsigned char bUseExtremes; // 0x5c (0x1)
	unsigned char padding_5d[0x3]; // 0x5d (0x3)
};

