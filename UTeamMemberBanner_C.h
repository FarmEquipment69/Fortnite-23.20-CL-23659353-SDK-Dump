// WidgetBlueprintGeneratedClass /Game/UI/Frontend/Parties/TeamMemberBanner.TeamMemberBanner_C
// Size: 0x14b0
class UTeamMemberBanner_C : public UFortCampaignTeamMemberBanner
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1470 (0x8)
	class UIconTextButton_C* ButtonPartyFinder; // 0x1478 (0x8)
	class UOverlay* Connected; // 0x1480 (0x8)
	class USizeBox* Connecting; // 0x1488 (0x8)
	class UImage* Image571; // 0x1490 (0x8)
	class UOverlay* Open; // 0x1498 (0x8)
	class UImage* OpenImage; // 0x14a0 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherMemberState; // 0x14a8 (0x8)

	/* Functions */

	// Function /Game/UI/Frontend/Parties/TeamMemberBanner.TeamMemberBanner_C.OpenPartyFinder (Has no native function)
	void OpenPartyFinder(class UUserWidget*& CallFuncGetCachedWidgetReturnValue, class USocialPanel_C*& K2NodeDynamicCastAsSocialPanel, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsActivatedReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/Parties/TeamMemberBanner.TeamMemberBanner_C.HandleMouseHoverVisualState (Has no native function)
	void HandleMouseHoverVisualState(bool& Hover, bool& TempboolVariable, class UObject*& TempobjectVariable, class UObject*& TempobjectVariable1, class UObject*& K2NodeSelectDefault, struct FSlateBrush& K2NodeMakeStructSlateBrush); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/Parties/TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtButtonPartyFinderK2NodeComponentBoundEvent0CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Frontend/Parties/TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtButtonPartyFinderK2NodeComponentBoundEvent1CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Frontend/Parties/TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtButtonPartyFinderK2NodeComponentBoundEvent3CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Frontend/Parties/TeamMemberBanner.TeamMemberBanner_C.OnTeamMemberConnectionStateChanged (Has no native function)
	void OnTeamMemberConnectionStateChanged(enum EFortMemberConnectionState& NewConnectionState); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/Parties/TeamMemberBanner.TeamMemberBanner_C.ExecuteUbergraph_TeamMemberBanner (Has no native function)
	void ExecuteUbergraphTeamMemberBanner(int& EntryPoint, enum EFortMemberConnectionState& TempbyteVariable, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton2, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton1, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton, enum EFortMemberConnectionState& K2NodeEventNewConnectionState, class UWidget*& K2NodeSelectDefault); // (Final | 0x00008000)
};

