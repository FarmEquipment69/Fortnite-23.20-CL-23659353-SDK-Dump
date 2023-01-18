// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Modals/PlayerReporting/SocialBanModal.SocialBanModal_C
// Size: 0x578
class USocialBanModal_C : public UFortSocialBanModal
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x4f0 (0x8)
	class UCommonTextBlock* disclaimer; // 0x4f8 (0x8)
	class UCommonTextBlock* disclaimer1; // 0x500 (0x8)
	class UCommonTextBlock* disclaimer2; // 0x508 (0x8)
	class UImage* ImageSevere; // 0x510 (0x8)
	class ULightbox_C* Lightbox51; // 0x518 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherMessage; // 0x520 (0x8)
	class UCommonTextBlock* Title; // 0x528 (0x8)
	class UCommonTextBlock* Title1; // 0x530 (0x8)
	class UImage* Triangles1; // 0x538 (0x8)
	class UImage* Triangles2; // 0x540 (0x8)
	class UImage* Triangles3; // 0x548 (0x8)
	class UVerticalBox* VBoxBanned; // 0x550 (0x8)
	class UVerticalBox* VBoxWarned; // 0x558 (0x8)
	class UWidgetSwitcher* WidgetSwitcherSeverityImage; // 0x560 (0x8)
	struct FMulticastInlineDelegate OnCloseSucceeded; // 0x568 (0x10)

	/* Functions */

	// Function /Game/UI/Foundation/Modals/PlayerReporting/SocialBanModal.SocialBanModal_C.OnDisplayModeSet (Has no native function)
	void OnDisplayModeSet(bool& bIsBanned); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/PlayerReporting/SocialBanModal.SocialBanModal_C.ExecuteUbergraph_SocialBanModal (Has no native function)
	void ExecuteUbergraphSocialBanModal(int& EntryPoint, bool& TempboolVariable, class UIconTextButton_C*& K2NodeDynamicCastAsIconTextButton, bool& K2NodeDynamicCastbSuccess, int& TempintVariable, int& TempintVariable1, bool& K2NodeEventbIsBanned, int& K2NodeSelectDefault, class UIconTextButton_C*& K2NodeDynamicCastAsIconTextButton1, bool& K2NodeDynamicCastbSuccess1); // (Final | 0x00008000)

	// Function /Game/UI/Foundation/Modals/PlayerReporting/SocialBanModal.SocialBanModal_C.OnCloseSucceeded__DelegateSignature (Has no native function)
	void OnCloseSucceededDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

