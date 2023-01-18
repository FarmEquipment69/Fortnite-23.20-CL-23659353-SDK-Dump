// Class /Script/FortniteUI.FortPlayerSurveyResponseChoiceBase
// Size: 0x13f0
class UFortPlayerSurveyResponseChoiceBase : public UCommonButtonBase
{
	class UCommonTextBlock* TextResponse; // 0x13e0 (0x8)
	unsigned char padding_13e8[0x8]; // 0x13e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPlayerSurveyResponseChoiceBase.SetChoiceType (Has no native function)
	void SetChoiceType(struct TEnumAsByte<EFortPlayerSurveyResponseChoiceType>& Type); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortPlayerSurveyResponseChoiceBase.OnSurveyResetChoice (Has no native function)
	void OnSurveyResetChoice(); // (Event | Protected | BlueprintEvent)
};

