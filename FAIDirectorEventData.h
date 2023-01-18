// ScriptStruct /Script/FortniteAI.AIDirectorEventData
// Size: 0x30
struct FAIDirectorEventData
{
	enum EFortAIDirectorEvent Event; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FCurveTableRowHandle DataMax; // 0x8 (0x10)
	struct FCurveTableRowHandle CoolDownRate; // 0x18 (0x10)
	enum EFortAIDirectorEventContribution ContributionType; // 0x28 (0x1)
	enum EFortAIDirectorEventParticipant OwnerParticipantType; // 0x29 (0x1)
	unsigned char padding_2a[0x6]; // 0x2a (0x6)
};

