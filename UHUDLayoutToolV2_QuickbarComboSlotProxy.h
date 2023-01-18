// Class /Script/FortniteUI.HUDLayoutToolV2_QuickbarComboSlotProxy
// Size: 0x3e8
class UHUDLayoutToolV2_QuickbarComboSlotProxy : public UFortMobileHUDElementProxy
{
	struct TArray<class UPaperSprite*> CombatIcons; // 0x378 (0x10)
	struct TArray<class UPaperSprite*> BuildingIcons; // 0x388 (0x10)
	struct TArray<class UPaperSprite*> ComboIcons; // 0x398 (0x10)
	struct FGameplayTag SlotTypePropertyTag; // 0x3a8 (0x4)
	struct FGameplayTag SlotLockPropertyTag; // 0x3ac (0x4)
	struct FGameplayTag SlotNumberPropertyTag; // 0x3b0 (0x4)
	unsigned char unreflected_3b4[0x4]; // 0x3b4 (0x4) 
	class UCommonVisibilitySwitcher* SwitcherSlotType; // 0x3b8 (0x8)
	class UImage* ImageCombatIcon; // 0x3c0 (0x8)
	class UImage* ImageBuildingIcon; // 0x3c8 (0x8)
	class UImage* ImageComboIcon; // 0x3d0 (0x8)
	class UImage* ImageLockIcon; // 0x3d8 (0x8)
	class UCommonTextBlock* TextSlotNumber; // 0x3e0 (0x8)
};

