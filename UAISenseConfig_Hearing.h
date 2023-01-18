// Class /Script/AIModule.AISenseConfig_Hearing
// Size: 0x60
class UAISenseConfig_Hearing : public UAISenseConfig
{
	class UClass* Implementation; // 0x48 (0x8)
	float HearingRange; // 0x50 (0x4)
	float LoSHearingRange; // 0x54 (0x4)
	unsigned char bUseLoSHearing; // 0x58 (0x1)
	unsigned char unreflected_59[0x3]; // 0x59 (0x3) 
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c (0x4)
};

