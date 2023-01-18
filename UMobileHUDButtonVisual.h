// Class /Script/FortniteUI.MobileHUDButtonVisual
// Size: 0x2c0
class UMobileHUDButtonVisual : public UMobileHUDVisual
{
	float ButtonSize; // 0x298 (0x4)
	float ButtonDisplayScale; // 0x29c (0x4)
	class UPaperSprite* DefaultIcon; // 0x2a0 (0x8)
	class USizeBox* OuterSizeBox; // 0x2a8 (0x8)
	class USizeBox* InnerSizeBox; // 0x2b0 (0x8)
	class UImage* ImageIcon; // 0x2b8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.MobileHUDButtonVisual.SetButtonSprite (Underlying native function: SetButtonSprite 0xa5bcf64)
	void SetButtonSprite(class UPaperSprite*& NewSprite); // (Final | Native | Public | BlueprintCallable)
};

