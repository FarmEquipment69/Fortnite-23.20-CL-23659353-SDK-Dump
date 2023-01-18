// ScriptStruct /Script/FortniteAI.FortAIDirectorFactorContribution
// Size: 0xc
struct FFortAIDirectorFactorContribution
{
	enum EFortAIDirectorEvent AIDirectorEvent; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float MaxContribution; // 0x4 (0x4)
	struct TEnumAsByte<EFortAIDirectorFactorContribution> ContributionType; // 0x8 (0x1)
	unsigned char padding_9[0x3]; // 0x9 (0x3)
};

