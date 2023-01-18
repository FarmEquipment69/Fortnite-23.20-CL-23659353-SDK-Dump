// WidgetBlueprintGeneratedClass /Game/UI/Foundation/MicIndicator/Cinematic-TeamMics.Cinematic-TeamMics_C
// Size: 0x510
class UCinematic-TeamMics_C : public UCommonUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x290 (0x8)
	class UMicIndicator_C* MicIndicator; // 0x298 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherConnectingStranger; // 0x2a0 (0x8)
	class UCommonTextBlock* TextBlock6; // 0x2a8 (0x8)
	class UCommonTextBlock* TextPlayerName; // 0x2b0 (0x8)
	unsigned char unreflected_2b8[0x8]; // 0x2b8 (0x8) 
	struct FFortTeamMemberInfo MemberInfo; // 0x2c0 (0x250)

	/* Functions */

	// Function /Game/UI/Foundation/MicIndicator/Cinematic-TeamMics.Cinematic-TeamMics_C.Update (Has no native function)
	void Update(struct FFortTeamMemberInfo& UpdatedMemberInfo, struct FUniqueNetIdRepl& PlayerNetId, bool& TempboolVariable, bool& TempboolVariable1, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& TempboolVariable2, int& TempintVariable, int& TempintVariable1, class UFortPartyContext*& CallFuncGetContextReturnValue, bool& CallFuncIsValidReturnValue, enum ESlateVisibility& K2NodeSelectDefault, int& K2NodeSelectDefault1, bool& CallFuncIsNetIdFromLocalPlayersPlatformReturnValue, struct FUniqueNetIdRepl& K2NodeSelectDefault2); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/MicIndicator/Cinematic-TeamMics.Cinematic-TeamMics_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/MicIndicator/Cinematic-TeamMics.Cinematic-TeamMics_C.ExecuteUbergraph_Cinematic-TeamMics (Has no native function)
	void ExecuteUbergraphCinematicTeamMics(int& EntryPoint); // (Final | 0x00008000)
};

