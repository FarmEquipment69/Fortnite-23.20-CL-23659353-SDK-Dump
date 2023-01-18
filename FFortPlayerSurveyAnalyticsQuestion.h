// ScriptStruct /Script/FortniteGame.FortPlayerSurveyAnalyticsQuestion
// Size: 0x50
struct FFortPlayerSurveyAnalyticsQuestion
{
	uint32_t InitialOrder; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FString QuestionTextID; // 0x8 (0x10)
	struct FString QuestionTextLocalized; // 0x18 (0x10)
	struct FString QuestionType; // 0x28 (0x10)
	struct TArray<struct FFortPlayerSurveyAnalyticsResponse> Responses; // 0x38 (0x10)
	uint32_t TimeTaken; // 0x48 (0x4)
	bool bAnswered; // 0x4c (0x1)
	unsigned char padding_4d[0x3]; // 0x4d (0x3)
};

