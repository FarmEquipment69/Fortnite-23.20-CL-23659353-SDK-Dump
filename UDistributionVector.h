// Class /Script/Engine.DistributionVector
// Size: 0x38
class UDistributionVector : public UDistribution
{
	unsigned char bCanBeBaked; // 0x30 (0x1)
	unsigned char bIsDirty; // 0x30 (0x1)
	unsigned char bBakedDataSuccesfully; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)
};

