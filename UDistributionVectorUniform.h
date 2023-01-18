// Class /Script/Engine.DistributionVectorUniform
// Size: 0x78
class UDistributionVectorUniform : public UDistributionVector
{
	struct FVector max; // 0x38 (0x18)
	struct FVector min; // 0x50 (0x18)
	unsigned char bLockAxes; // 0x68 (0x1)
	unsigned char unreflected_69[0x3]; // 0x69 (0x3) 
	struct TEnumAsByte<EDistributionVectorLockFlags> LockedAxes; // 0x6c (0x1)
	struct TEnumAsByte<EDistributionVectorMirrorFlags> MirrorFlags[0x3]; // 0x6d (0x1) (ARRAY) 
	unsigned char bUseExtremes; // 0x70 (0x1)
	unsigned char padding_71[0x7]; // 0x71 (0x7)
};

