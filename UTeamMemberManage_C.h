// WidgetBlueprintGeneratedClass /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C
// Size: 0x5c8
class UTeamMemberManage_C : public UFortTeamMemberManage
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x598 (0x8)
	class UBP_LocalPlayerBannerEditor_C* BPLocalPlayerBannerEditor; // 0x5a0 (0x8)
	class UWBP_UIKit_Button_Regular_C* CloseProfileButton; // 0x5a8 (0x8)
	class UCommonWidgetSwitcherLegacy* ContentSwitcher; // 0x5b0 (0x8)
	class ULightbox_C* Lightbox; // 0x5b8 (0x8)
	class USizeBox* TeamMemberManageOptions; // 0x5c0 (0x8)

	/* Functions */

	// Function /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C.OnParticipationChanged (Has no native function)
	void OnParticipationChanged(bool& bIsParticipating); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C.BP_OnActivated (Has no native function)
	void BPOnActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature (Has no native function)
	void BndEvtBPLocalPlayerBannerEditorK2NodeComponentBoundEvent1CloseBannerEditorDelegateSignature(struct FName& IconId, struct FName& ColorId); // (BlueprintEvent)

	// Function /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C.BP_OnDeactivated (Has no native function)
	void BPOnDeactivated(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C.BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature (Has no native function)
	void BndEvtContentSwitcherK2NodeComponentBoundEvent2OnActiveWidgetChangedDelegateSignature(class UWidget*& ActiveWidget, int& ActiveWidgetIndex); // (BlueprintEvent)

	// Function /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C.OpenBannerEditor (Has no native function)
	void OpenBannerEditor(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C.BndEvt__TeamMemberManage_CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature (Has no native function)
	void BndEvtTeamMemberManageCloseProfileButtonK2NodeComponentBoundEvent4CommonButtonBaseClickedDelegateSignature(class UCommonButtonBase*& Button); // (BlueprintEvent)

	// Function /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C.ExecuteUbergraph_TeamMemberManage (Has no native function)
	void ExecuteUbergraphTeamMemberManage(int& EntryPoint, class UCommonButtonBase*& K2NodeComponentBoundEventButton, bool& TempboolVariable, struct FText& TemptextVariable, struct FText& TemptextVariable1, bool& K2NodeEventbIsParticipating, struct FText& K2NodeSelectDefault, struct FName& K2NodeComponentBoundEventIconId, struct FName& K2NodeComponentBoundEventColorId, class UWidget*& K2NodeComponentBoundEventActiveWidget, int& K2NodeComponentBoundEventActiveWidgetIndex, bool& CallFuncEqualEqualObjectObjectReturnValue, class UWBP_UIKit_ButtonCTA_Base_C*& K2NodeDynamicCastAsWBPUIKitButtonCTABase, bool& K2NodeDynamicCastbSuccess); // (Final | 0x00008000 | HasDefaults)
};

