// ScriptStruct /Script/FortniteUI.FortPlayerSurveyCMSData
// Size: 0x58
struct FFortPlayerSurveyCMSData
{
	struct TArray<struct FFortPlayerSurveyCMSConditionGroup> ConditionGroups; // 0x0 (0x10)
	struct TArray<struct FFortPlayerSurveyCMSFrequentlyAskedQuestion> FrequentlyAskedQuestions; // 0x10 (0x10)
	struct TArray<struct FFortPlayerSurveyCMSCustomTextReplacement> CustomTextReplacements; // 0x20 (0x10)
	struct TArray<struct FFortPlayerSurveyCMSCustomTextReplacement> WhitelistedTextReplacements; // 0x30 (0x10)
	struct TArray<struct FFortPlayerSurveyCMSSurvey> Surveys; // 0x40 (0x10)
	bool bSurveysEnabled; // 0x50 (0x1)
	unsigned char padding_51[0x7]; // 0x51 (0x7)
};

