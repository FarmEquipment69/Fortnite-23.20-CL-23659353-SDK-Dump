// Class /Script/FortniteUI.FortMobileActionButton
// Size: 0x3b8
class UFortMobileActionButton : public UFortMobileHUDElement
{
	unsigned char unreflected_2f8[0xc]; // 0x2f8 (0xc) 
	struct FGameplayTag IconSizePropertyTag; // 0x304 (0x4)
	struct FGameplayTag ClickthroughPropertyTag; // 0x308 (0x4)
	struct FLinearColor PressedColor; // 0x30c (0x10)
	struct FLinearColor ReleasedColor; // 0x31c (0x10)
	struct FLinearColor DisabledColor; // 0x32c (0x10)
	unsigned char unreflected_33c[0x4]; // 0x33c (0x4) 
	class UFortMobileActionButtonBehavior* ButtonBehavior; // 0x340 (0x8)
	unsigned char unreflected_348[0x18]; // 0x348 (0x18) 
	struct TArray<struct FInputActionKeyMapping> InputActionKeyMappings; // 0x360 (0x10)
	unsigned char unreflected_370[0x20]; // 0x370 (0x20) 
	class USizeBox* SizeBoxHitboxSize; // 0x390 (0x8)
	class USizeBox* SizeBoxVisualSize; // 0x398 (0x8)
	class UOverlay* OverlayButtonContents; // 0x3a0 (0x8)
	class UImage* ImageBackground; // 0x3a8 (0x8)
	class UImage* ImageIcon; // 0x3b0 (0x8)
};

