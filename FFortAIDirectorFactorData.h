// ScriptStruct /Script/FortniteAI.FortAIDirectorFactorData
// Size: 0x20
struct FFortAIDirectorFactorData
{
	enum EFortAIDirectorFactor AIDirectorFactor; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<struct FFortAIDirectorFactorContribution> ContributingEvents; // 0x8 (0x10)
	float MaxValue; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

