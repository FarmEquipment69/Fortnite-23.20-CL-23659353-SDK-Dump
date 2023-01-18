// Class /Script/FortniteUI.HUDLayoutToolV2_ProfileSelectionPanel
// Size: 0x4c8
class UHUDLayoutToolV2_ProfileSelectionPanel : public UCommonUserWidget
{
	class UClass* HudLayoutToolPopupClass; // 0x290 (0x8)
	class UClass* HUDLayoutToolTextInputPopupClass; // 0x298 (0x8)
	struct FHUDLayoutToolV2_PopupContent NoCustomLayoutSlotsLeftPopupContent; // 0x2a0 (0x68)
	struct FHUDLayoutToolV2_PopupContent DeleteCustomLayoutPopupContent; // 0x308 (0x68)
	struct FHUDLayoutToolV2_TextInputPopupContent RenamePopupContent; // 0x370 (0x68)
	class UFortMobileHUDWidgetRegistry* HUDWidgetRegistry; // 0x3d8 (0x8)
	class UHUDLayoutToolV2_LayoutButton* InEditLayoutButton; // 0x3e0 (0x8)
	class UHUDLayoutToolV2_LayoutButton* SelectedLayoutButton; // 0x3e8 (0x8)
	unsigned char unreflected_3f0[0x90]; // 0x3f0 (0x90) 
	class UFortDynamicEntryBox* EntryBoxPresets; // 0x480 (0x8)
	class UFortDynamicEntryBox* EntryBoxCustomLayouts; // 0x488 (0x8)
	class UFortDynamicEntryBox* EntryBoxEmptyCustomLayoutSlots; // 0x490 (0x8)
	class UBacchusCloseButton* ButtonExit; // 0x498 (0x8)
	class UHUDLayoutToolV2_Button* ButtonEditLayout; // 0x4a0 (0x8)
	class UHUDLayoutToolV2_Button* ButtonConvert; // 0x4a8 (0x8)
	class UHUDLayoutToolV2_Button* ButtonCopy; // 0x4b0 (0x8)
	class UHUDLayoutToolV2_Button* ButtonDelete; // 0x4b8 (0x8)
	class UHUDLayoutToolV2_Button* ButtonRename; // 0x4c0 (0x8)
};

