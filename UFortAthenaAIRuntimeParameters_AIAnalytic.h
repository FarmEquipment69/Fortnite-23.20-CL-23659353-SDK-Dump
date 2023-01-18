// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIAnalytic
// Size: 0x78
class UFortAthenaAIRuntimeParameters_AIAnalytic : public UFortAthenaAIRuntimeParameters_Analytic
{
	struct FString AnalyticUniqueID; // 0x50 (0x10)
	struct FString AIType; // 0x60 (0x10)
	unsigned char bShouldSendSpawnEvents; // 0x70 (0x1)
	unsigned char bShouldRecordGrabbedPickups; // 0x70 (0x1)
	unsigned char bShouldRecordDroppedPickups; // 0x70 (0x1)
	unsigned char bShouldRecordDeathInstigator; // 0x70 (0x1)
	unsigned char bShouldRecordRegularDowns; // 0x70 (0x1)
	unsigned char bShouldRecordTetheredDowns; // 0x70 (0x1)
	unsigned char padding_71[0x7]; // 0x71 (0x7)
};

