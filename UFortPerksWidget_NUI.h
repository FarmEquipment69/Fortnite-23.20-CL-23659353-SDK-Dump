// Class /Script/FortniteUI.FortPerksWidget_NUI
// Size: 0x328
class UFortPerksWidget_NUI : public UCommonUserWidget
{
	class UFortHero* Hero; // 0x290 (0x8)
	enum EFortPerksWidgetState State; // 0x298 (0x1)
	unsigned char unreflected_299[0x7]; // 0x299 (0x7) 
	class UFortHero* EvolutionOption; // 0x2a0 (0x8)
	class UClass* PerkTierWidgetType; // 0x2a8 (0x8)
	class UClass* PerkWidgetType; // 0x2b0 (0x8)
	class UFortTooltipContext* TooltipContext; // 0x2b8 (0x8)
	class UCommonLoadGuard* PerksListLoadGuard; // 0x2c0 (0x8)
	unsigned char padding_2c8[0x60]; // 0x2c8 (0x60)

	/* Functions */

	// Function /Script/FortniteUI.FortPerksWidget_NUI.SetState (Underlying native function: SetState 0xa91ab90)
	void SetState(enum EFortPerksWidgetState& InState, class UFortHero*& InEvolutionOption); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPerksWidget_NUI.SetHero (Underlying native function: SetHero 0xa91a644)
	void SetHero(class UFortHero*& InHero); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPerksWidget_NUI.ProcessPerkTiers (Underlying native function: ProcessPerkTiers 0xa9198fc)
	void ProcessPerkTiers(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPerksWidget_NUI.ProcessPerks (Underlying native function: ProcessPerks 0xa919924)
	void ProcessPerks(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPerksWidget_NUI.ProcessActiveAbilityPerksAsync (Underlying native function: ProcessActiveAbilityPerksAsync 0xa9198d0)
	void ProcessActiveAbilityPerksAsync(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPerksWidget_NUI.OnStateChanged (Has no native function)
	void OnStateChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortPerksWidget_NUI.OnHeroChanged (Has no native function)
	void OnHeroChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortPerksWidget_NUI.OnGeneratePerkTier (Has no native function)
	void OnGeneratePerkTier(struct FFortUIPerkTier& FortPerkTier, class UFortPerkTierWidget_NUI*& PerkTierWidget); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortPerksWidget_NUI.OnGeneratePerk (Has no native function)
	void OnGeneratePerk(struct FFortUIPerk& FortPerk, class UFortPerkWidget_NUI*& PerkWidget); // (Event | Public | BlueprintEvent)
};

