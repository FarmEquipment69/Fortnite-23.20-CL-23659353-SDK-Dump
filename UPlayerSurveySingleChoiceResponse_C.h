// WidgetBlueprintGeneratedClass /Game/UI/PlayerSurvey/Widgets/PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C
// Size: 0x438
class UPlayerSurveySingleChoiceResponse_C : public UFortPlayerSurveySingleChoiceResponseBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3f8 (0x8)
	class UOverlay* OverlayOrthogonalIndicator; // 0x400 (0x8)
	class UOverlay* OverlayVerticalIndicator; // 0x408 (0x8)
	class UPlayerSurveyOrthogonalIndicator_C* PlayerSurveyOrthogonalIndicator; // 0x410 (0x8)
	class UPlayerSurveyVerticalIndicator_C* PlayerSurveyVerticalIndicator; // 0x418 (0x8)
	class USizeBox* SizeBoxResponses; // 0x420 (0x8)
	double BaseColumnWidth; // 0x428 (0x8)
	double AdditionalColumnWidth; // 0x430 (0x8)

	/* Functions */

	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C.SetNumberOfResponses (Has no native function)
	void SetNumberOfResponses(int& NumberOfResponses); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C.OnAddedToFocusPath (Has no native function)
	void OnAddedToFocusPath(struct FFocusEvent*& InFocusEvent); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C.ExecuteUbergraph_PlayerSurveySingleChoiceResponse (Has no native function)
	void ExecuteUbergraphPlayerSurveySingleChoiceResponse(int& EntryPoint, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable2, enum ESlateVisibility& TempbyteVariable3, int& K2NodeEventNumberOfResponses, int& CallFuncSubtractIntIntReturnValue, int& CallFuncDivideIntIntReturnValue, int& CallFuncMinReturnValue, bool& CallFuncGreaterIntIntReturnValue, double& CallFuncMultiplyIntFloatReturnValue, double& CallFuncAddDoubleDoubleReturnValue, enum ESlateVisibility& K2NodeSelectDefault, bool& TempboolVariable1, enum ESlateVisibility& K2NodeSelectDefault1, struct FFocusEvent*& K2NodeEventInFocusEvent, float& CallFuncSetWidthOverrideInWidthOverrideImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

