// Class /Script/FortniteUI.FortPerkTierWidget_NUI
// Size: 0x2d8
class UFortPerkTierWidget_NUI : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	struct FFortUIPerkTier FortPerkTier; // 0x298 (0x18)
	unsigned char padding_2b0[0x28]; // 0x2b0 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.FortPerkTierWidget_NUI.ProcessPerks (Underlying native function: ProcessPerks 0xa919910)
	void ProcessPerks(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPerkTierWidget_NUI.OnGeneratePerk (Has no native function)
	void OnGeneratePerk(struct FFortUIPerk& Perk, class UFortPerkWidget_NUI*& PerkWidget); // (Event | Public | BlueprintEvent)
};

