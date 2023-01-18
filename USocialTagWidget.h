// Class /Script/FortniteUI.SocialTagWidget
// Size: 0x1440
class USocialTagWidget : public UCommonButtonBase
{
	class UImage* ImageCheckMark; // 0x13e0 (0x8)
	enum ESocialTagCategory TagCategory; // 0x13e8 (0x1)
	bool bIsSystemTag; // 0x13e9 (0x1)
	bool bShowCategoryCustomization; // 0x13ea (0x1)
	bool bIsSelectable; // 0x13eb (0x1)
	bool bEnableMultiSelection; // 0x13ec (0x1)
	bool bShowAddingWhenSelected; // 0x13ed (0x1)
	unsigned char unreflected_13ee[0x12]; // 0x13ee (0x12) 
	bool bIsCheckmarkEnabled; // 0x1400 (0x1)
	unsigned char padding_1401[0x3f]; // 0x1401 (0x3f)

	/* Functions */

	// Function /Script/FortniteUI.SocialTagWidget.SetTag (Has no native function)
	void SetTag(struct FText& InTagName, enum ESocialTagCategory& InTagCategory, bool& bInIsSystemTag); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.SocialTagWidget.SetHighlightState (Has no native function)
	void SetHighlightState(bool& bHighlighted); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.SocialTagWidget.SetFullColor (Has no native function)
	void SetFullColor(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.SocialTagWidget.SetCategoryCustomizationVisibility (Has no native function)
	void SetCategoryCustomizationVisibility(enum ESlateVisibility& CategoryCustomizationVisibility); // (Event | Protected | BlueprintEvent)
};

