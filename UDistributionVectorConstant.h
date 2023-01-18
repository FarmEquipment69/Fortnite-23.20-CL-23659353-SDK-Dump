// Class /Script/Engine.DistributionVectorConstant
// Size: 0x58
class UDistributionVectorConstant : public UDistributionVector
{
	struct FVector Constant; // 0x38 (0x18)
	unsigned char bLockAxes; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	struct TEnumAsByte<EDistributionVectorLockFlags> LockedAxes; // 0x54 (0x1)
	unsigned char padding_55[0x3]; // 0x55 (0x3)
};

