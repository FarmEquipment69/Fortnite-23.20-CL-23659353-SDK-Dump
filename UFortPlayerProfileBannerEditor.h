// Class /Script/FortniteUI.FortPlayerProfileBannerEditor
// Size: 0x2d8
class UFortPlayerProfileBannerEditor : public UCommonUserWidget
{
	enum ESaveProfileForBanners ProfileToSave; // 0x290 (0x4)
	bool bCanCloseBannerEditor; // 0x294 (0x1)
	unsigned char unreflected_295[0x3]; // 0x295 (0x3) 
	struct TArray<struct FName> IconCategories; // 0x298 (0x10)
	struct TArray<struct FName> ColorCategories; // 0x2a8 (0x10)
	struct FName ChosenIcon; // 0x2b8 (0x4)
	struct FName ChosenIconCategory; // 0x2bc (0x4)
	struct FName ChosenColor; // 0x2c0 (0x4)
	struct FName ChosenColorCategory; // 0x2c4 (0x4)
	class UCommonButtonBase* ButtonCloseEditorButton; // 0x2c8 (0x8)
	class UCommonButtonBase* ButtonEditIcon; // 0x2d0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPlayerProfileBannerEditor.SetBannerIcon (Underlying native function: SetBannerIcon 0xa873984)
	void SetBannerIcon(struct FName& Icon); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortPlayerProfileBannerEditor.SetBannerColor (Underlying native function: SetBannerColor 0xa8738dc)
	void SetBannerColor(struct FName& Color); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortPlayerProfileBannerEditor.RefreshBannerEditor (Underlying native function: RefreshBannerEditor 0x7570aa8)
	void RefreshBannerEditor(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPlayerProfileBannerEditor.OnShowPreviousCategory (Has no native function)
	void OnShowPreviousCategory(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPlayerProfileBannerEditor.OnShowNextCategory (Has no native function)
	void OnShowNextCategory(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPlayerProfileBannerEditor.HandleEditorDeactivated (Underlying native function: HandleEditorDeactivated 0xa8730a8)
	void HandleEditorDeactivated(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortPlayerProfileBannerEditor.HandleEditorActivated (Underlying native function: HandleEditorActivated 0xa873094)
	void HandleEditorActivated(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortPlayerProfileBannerEditor.CommitChosenIconAndColor (Underlying native function: CommitChosenIconAndColor 0xa872ce4)
	void CommitChosenIconAndColor(); // (Final | Native | Protected | BlueprintCallable)
};

