// Class /Script/ChaosCloth.ChaosClothSharedSimConfig
// Size: 0x38
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{
	int IterationCount; // 0x28 (0x4)
	int MaxIterationCount; // 0x2c (0x4)
	int SubdivisionCount; // 0x30 (0x4)
	bool bUseLocalSpaceSimulation; // 0x34 (0x1)
	bool bUseXPBDConstraints; // 0x35 (0x1)
	unsigned char padding_36[0x2]; // 0x36 (0x2)
};

