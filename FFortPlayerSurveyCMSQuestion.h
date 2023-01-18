// ScriptStruct /Script/FortniteUI.FortPlayerSurveyCMSQuestion
// Size: 0x50
struct FFortPlayerSurveyCMSQuestion
{
	struct FFortPlayerSurveyLocalizableText QuestionText; // 0x0 (0x20)
	struct FString Type; // 0x20 (0x10)
	uint32_t NumberOfOptions; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct TArray<struct FFortPlayerSurveyLocalizableText> Responses; // 0x38 (0x10)
	bool bRandomizeResponseOrder; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};

