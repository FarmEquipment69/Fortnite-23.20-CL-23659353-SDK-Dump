// Class /Script/FortniteUI.FortMobileActionButtonBehavior
// Size: 0x110
class UFortMobileActionButtonBehavior : public UHUDWidgetBehavior
{
	struct TArray<struct FName> ActionNames; // 0xb0 (0x10)
	class UPaperSprite* Sprite; // 0xc0 (0x8)
	struct FGameplayTag HUDLayoutToolSaveTagLegacy; // 0xc8 (0x4)
	unsigned char unreflected_cc[0x14]; // 0xcc (0x14) 
	struct TArray<class UFortMobileButtonBehaviorComponent*> ButtonBehaviorComponents; // 0xe0 (0x10)
	struct TArray<class UFortButtonBehaviorComponentOverride*> ButtonBehaviorComponentOverrides; // 0xf0 (0x10)
	int ForcedZOrder; // 0x100 (0x4)
	unsigned char padding_104[0xc]; // 0x104 (0xc)
};

