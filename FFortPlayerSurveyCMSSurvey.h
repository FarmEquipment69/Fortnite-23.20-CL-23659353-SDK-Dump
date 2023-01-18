// ScriptStruct /Script/FortniteUI.FortPlayerSurveyCMSSurvey
// Size: 0x78
struct FFortPlayerSurveyCMSSurvey
{
	struct FString SurveyID; // 0x0 (0x10)
	struct TArray<struct FString> SurveyTags; // 0x10 (0x10)
	struct FString Title; // 0x20 (0x10)
	struct TArray<struct FString> ConditionGroupIDs; // 0x30 (0x10)
	struct TArray<struct FFortPlayerSurveyCMSCondition> Conditions; // 0x40 (0x10)
	struct TArray<struct FFortPlayerSurveyCMSQuestionContainer> Questions; // 0x50 (0x10)
	struct TArray<struct FFortPlayerSurveyCMSCustomTextReplacement> TextReplacementOverrides; // 0x60 (0x10)
	bool bRandomizeQuestionOrder; // 0x70 (0x1)
	unsigned char padding_71[0x7]; // 0x71 (0x7)
};

