// Class /Script/FortniteAI.FortAIDataProvider_Pawn
// Size: 0x60
class UFortAIDataProvider_Pawn : public UAIDataProvider
{
	float SightRadius; // 0x28 (0x4)
	float HearingRadius; // 0x2c (0x4)
	float ViewLocationOffsetFromGround; // 0x30 (0x4)
	float MaxStepHeight; // 0x34 (0x4)
	struct FVector TetheredBoxCenterLocation; // 0x38 (0x18)
	float TetheredBoxWidth; // 0x50 (0x4)
	float TetheredBoxHeight; // 0x54 (0x4)
	float TetheredBoxEQSGridSize; // 0x58 (0x4)
	float TetheredBoxEQSSpaceBetween; // 0x5c (0x4)
};

