// Class /Script/FortniteUI.FortCreativeIslandSelectCodeTab
// Size: 0x448
class UFortCreativeIslandSelectCodeTab : public UFortCreativeIslandSelectTab
{
	class UCommonButtonBase* ButtonSelect; // 0x3e8 (0x8)
	class UEditableText* EditableTextIslandLink; // 0x3f0 (0x8)
	class UFortCreativeIslandDetailsPanel* IslandDetailsPanel; // 0x3f8 (0x8)
	class UCommonButtonBase* ButtonFavorite; // 0x400 (0x8)
	class UWidget* WidgetLaunchError; // 0x408 (0x8)
	class UFortGameActivityProvider* ActivityProvider; // 0x410 (0x8)
	unsigned char unreflected_418[0x20]; // 0x418 (0x20) 
	class UFortGameActivity* LastActivityQueried; // 0x438 (0x8)
	class UFortGameActivity* UserEnteredActivity; // 0x440 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeIslandSelectCodeTab.OnActivityValidatedWithEmptyIslandLink (Has no native function)
	void OnActivityValidatedWithEmptyIslandLink(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeIslandSelectCodeTab.OnActivityValidated (Has no native function)
	void OnActivityValidated(enum EFortActivityValidationResult& ValidateResult); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeIslandSelectCodeTab.OnActivityClear (Has no native function)
	void OnActivityClear(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeIslandSelectCodeTab.HandleActivityCommitted (Underlying native function: HandleActivityCommitted 0xa664518)
	void HandleActivityCommitted(struct FText& InText, struct TEnumAsByte<ETextCommit>& CommitInfo); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeIslandSelectCodeTab.HandleActivityChanged (Underlying native function: HandleActivityChanged 0xa66445c)
	void HandleActivityChanged(struct FText& Text); // (Final | Native | Protected | HasOutParms | BlueprintCallable)
};

