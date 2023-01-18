// ScriptStruct /Script/FortniteGame.AthenaScoreData
// Size: 0x70
struct FAthenaScoreData
{
	enum EAthenaScoringEvent ScoringEvent; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FText ScoreNameText; // 0x8 (0x18)
	struct FGameplayTagContainer EventInclusionTags; // 0x20 (0x20)
	int NumOccurrencesForScore; // 0x40 (0x4)
	int NumOccurrencesPermitted; // 0x44 (0x4)
	struct FScalableFloat ScoreAwarded; // 0x48 (0x28)
};

