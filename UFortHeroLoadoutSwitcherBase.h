// Class /Script/FortniteUI.FortHeroLoadoutSwitcherBase
// Size: 0x2c8
class UFortHeroLoadoutSwitcherBase : public UCommonUserWidget
{
	class UHorizontalBox* HBoxLoadoutPagingContainer; // 0x290 (0x8)
	class UFortItemDetailsHostPanel* HeroLoadoutCommanderDetailsHostPanel; // 0x298 (0x8)
	class UFortHeroAbilitiesAndGadgetsBase* HeroAbilitiesAndGadgets; // 0x2a0 (0x8)
	class UCommonTextBlock* TextBlockLoadoutDisplayName; // 0x2a8 (0x8)
	class UCommonButtonLegacy* ButtonPageLeft; // 0x2b0 (0x8)
	class UCommonButtonLegacy* ButtonPageRight; // 0x2b8 (0x8)
	unsigned char padding_2c0[0x8]; // 0x2c0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortHeroLoadoutSwitcherBase.UpdateRarity (Has no native function)
	void UpdateRarity(enum EFortRarity& Rarity); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHeroLoadoutSwitcherBase.Update (Underlying native function: Update 0xa84ce1c)
	void Update(class UFortCampaignHeroLoadoutItem*& HeroLoadout); // (Final | Native | Public | BlueprintCallable)
};

