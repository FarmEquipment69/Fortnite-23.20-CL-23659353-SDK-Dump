// Class /Script/FortniteUI.FortCMSInfoCarousel
// Size: 0x5a0
class UFortCMSInfoCarousel : public UFortActivatablePanel
{
	struct TMap<struct FString, class UClass*> MessageWidgetLayoutMap; // 0x518 (0x50)
	class UCommonWidgetCarousel* Carousel; // 0x568 (0x8)
	class UCommonWidgetCarouselNavBar* CarouselNavBar; // 0x570 (0x8)
	struct FString CMSInfoId; // 0x578 (0x10)
	float AutoScrollInterval; // 0x588 (0x4)
	unsigned char padding_58c[0x14]; // 0x58c (0x14)

	/* Functions */

	// Function /Script/FortniteUI.FortCMSInfoCarousel.NavigatePageRight (Underlying native function: NavigatePageRight 0xa6b4534)
	void NavigatePageRight(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCMSInfoCarousel.NavigatePageLeft (Underlying native function: NavigatePageLeft 0xa6b4500)
	void NavigatePageLeft(); // (Final | Native | Protected | BlueprintCallable)
};

