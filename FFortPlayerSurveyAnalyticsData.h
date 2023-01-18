// ScriptStruct /Script/FortniteGame.FortPlayerSurveyAnalyticsData
// Size: 0x50
struct FFortPlayerSurveyAnalyticsData
{
	struct FString SurveyID; // 0x0 (0x10)
	struct TArray<struct FFortPlayerSurveyAnalyticsQuestion> Questions; // 0x10 (0x10)
	struct TArray<struct FFortPlayerSurveyAnalyticsTextReplacementEvaluation> TextReplacementEvaluations; // 0x20 (0x10)
	struct FString PreviousMatchPlaylist; // 0x30 (0x10)
	struct FString PreviousMatchGameSessionID; // 0x40 (0x10)
};

