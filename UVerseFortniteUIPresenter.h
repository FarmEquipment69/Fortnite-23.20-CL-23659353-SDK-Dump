// Class /Script/VerseFortniteUI.VerseFortniteUIPresenter
// Size: 0xd0
class UVerseFortniteUIPresenter : public UUIFrameworkGameViewportPresenter
{
	struct TArray<struct FVerseFortniteUIPresenterElement> Pending; // 0x38 (0x10)
	struct TArray<struct FVerseFortniteUIPresenterElement> Created; // 0x48 (0x10)
	class UVerseFortniteUIOverlay* PlayerGameViewport; // 0x58 (0x8)
	class UVerseFortniteUIOverlay* ContentGameViewport; // 0x60 (0x8)
	class UVerseFortniteUIActivableWidgetBase* PopupContainer; // 0x68 (0x8)
	unsigned char unreflected_70[0x8]; // 0x70 (0x8) 
	struct TWeakObjectPtr<class UClass> WidgetForDynamicUI; // 0x78 (0x28)
	struct TWeakObjectPtr<class UCommonInputActionDomain> ActionDomainForDynamicUI; // 0xa0 (0x28)
	unsigned char padding_c8[0x8]; // 0xc8 (0x8)
};

