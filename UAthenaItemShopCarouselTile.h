// Class /Script/FortniteUI.AthenaItemShopCarouselTile
// Size: 0x1520
class UAthenaItemShopCarouselTile : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	class UCommonTextBlock* TextTitle; // 0x1438 (0x8)
	class UImage* ImageBackground; // 0x1440 (0x8)
	class UImage* ImageForeground; // 0x1448 (0x8)
	unsigned char unreflected_1450[0xb8]; // 0x1450 (0xb8) 
	class UTexture2D* ExternalMedia; // 0x1508 (0x8)
	unsigned char padding_1510[0x10]; // 0x1510 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemShopCarouselTile.OnPeekStateChanged (Has no native function)
	void OnPeekStateChanged(bool& bIsInPeekState); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopCarouselTile.OnIntro (Has no native function)
	void OnIntro(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopCarouselTile.OnFadeOutTransitionToPrevious (Has no native function)
	void OnFadeOutTransitionToPrevious(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopCarouselTile.OnFadeOutTransitionToNext (Has no native function)
	void OnFadeOutTransitionToNext(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopCarouselTile.OnFadeInTransitionToPrevious (Has no native function)
	void OnFadeInTransitionToPrevious(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopCarouselTile.OnFadeInTransitionToNext (Has no native function)
	void OnFadeInTransitionToNext(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopCarouselTile.OnActiveStateChanged (Has no native function)
	void OnActiveStateChanged(bool& bIsSelected); // (Event | Public | BlueprintEvent)
};

