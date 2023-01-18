// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_Leash
// Size: 0x58
class UFortAthenaAIRuntimeParameters_Leash : public UFortAthenaAIRuntimeParameters
{
	struct FVector LeashLocation; // 0x30 (0x18)
	float LeashInnerRadius; // 0x48 (0x4)
	float LeashOuterRadius; // 0x4c (0x4)
	enum ELeashReturnLocationMode LeashReturnLocationMode; // 0x50 (0x1)
	bool bCheckForReachabilityOnRandomLocationGeneration; // 0x51 (0x1)
	unsigned char padding_52[0x6]; // 0x52 (0x6)
};

