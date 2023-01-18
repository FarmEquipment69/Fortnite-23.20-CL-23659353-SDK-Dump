// Class /Script/FortniteUI.FortHeroAbilitiesAndGadgetsBase
// Size: 0x1470
class UFortHeroAbilitiesAndGadgetsBase : public UFortTeamMemberEntryBase
{
	bool bHideAbilities; // 0x1458 (0x1)
	bool bHideGadgets; // 0x1459 (0x1)
	unsigned char unreflected_145a[0x2]; // 0x145a (0x2) 
	int AssignedMemberIndex; // 0x145c (0x4)
	class UFortPerksWidget_NUI* HorizontalAbilitiesList; // 0x1460 (0x8)
	class UFortGadgetsWidgetBase* GadgetsWidget; // 0x1468 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortHeroAbilitiesAndGadgetsBase.Refresh (Underlying native function: Refresh 0xa919950)
	void Refresh(class UFortCampaignHeroLoadoutItem*& HeroLoadout); // (Final | Native | Public | BlueprintCallable)
};

