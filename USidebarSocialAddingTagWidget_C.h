// WidgetBlueprintGeneratedClass /Game/UI/Sidebar/Tags/SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C
// Size: 0x2d8
class USidebarSocialAddingTagWidget_C : public UCommonUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x290 (0x8)
	class UWidgetAnimation* AddingTag; // 0x298 (0x8)
	class UBorder* BorderAddingTagBorder; // 0x2a0 (0x8)
	class UImage* ImageAddingTagArrow; // 0x2a8 (0x8)
	class UOverlay* OverlayAddingTag; // 0x2b0 (0x8)
	class UCommonTextBlock* TextAddingTagName; // 0x2b8 (0x8)
	struct FString TagCategoryAddTag; // 0x2c0 (0x10)
	struct FName NameInnerColor; // 0x2d0 (0x4)
	struct FName OuterColor; // 0x2d4 (0x4)

	/* Functions */

	// Function /Game/UI/Sidebar/Tags/SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.EventSetTag (Has no native function)
	void EventSetTag(struct FSidebarSocialTagCategoryStructure& CallFuncGetSidebarSocialTagCategoryStructureSidebarSocialTagCategoryStructure, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.ExecuteUbergraph_SidebarSocialAddingTagWidget (Has no native function)
	void ExecuteUbergraphSidebarSocialAddingTagWidget(int& EntryPoint); // (Final | 0x00008000)
};

