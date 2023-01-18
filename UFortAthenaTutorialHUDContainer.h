// Class /Script/FortniteUI.FortAthenaTutorialHUDContainer
// Size: 0x378
class UFortAthenaTutorialHUDContainer : public UBacchusHUDElement
{
	class UFortAthenaTutorialScreen* CurrentScreen; // 0x318 (0x8)
	class AFortAthenaTutorialManager* TutorialManager; // 0x320 (0x8)
	class UFortAthenaTutorialHUD* TutorialHUD; // 0x328 (0x8)
	unsigned char unreflected_330[0x8]; // 0x330 (0x8) 
	struct TWeakObjectPtr<class UClass> TutorialHUDWidgetSoftClass; // 0x338 (0x28)
	class UOverlay* OverlayTutorialHUD; // 0x360 (0x8)
	class UFortAthenaTutorialScreenData* TutorialScreenData; // 0x368 (0x8)
	int CurrentTutorialStep; // 0x370 (0x4)
	int CurrentTutorialSubstep; // 0x374 (0x4)
};

