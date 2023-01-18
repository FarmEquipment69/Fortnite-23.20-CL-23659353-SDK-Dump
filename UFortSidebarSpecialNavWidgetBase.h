// Class /Script/FortniteUI.FortSidebarSpecialNavWidgetBase
// Size: 0x3c0
class UFortSidebarSpecialNavWidgetBase : public UCommonActivatableWidget
{
	enum EFortSidebarSpecialNavType NavType; // 0x3a8 (0x1)
	unsigned char unreflected_3a9[0x7]; // 0x3a9 (0x7) 
	class UFortSidebarSpecialNavButtonBase* Button; // 0x3b0 (0x8)
	class UFortSidebarOnboardTooltipWidget* AvailableTooltip; // 0x3b8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSidebarSpecialNavWidgetBase.GetNavType (Underlying native function: GetNavType 0xa75996c)
	enum EFortSidebarSpecialNavType GetNavType(); // (Final | Native | Public | BlueprintCallable)
};

