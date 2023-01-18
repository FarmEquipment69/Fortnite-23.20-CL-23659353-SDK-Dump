// Class /Script/FortniteGame.FortCampaignHeroLoadoutItemDefinition
// Size: 0x490
class UFortCampaignHeroLoadoutItemDefinition : public UFortProfileItemDefinition
{
	struct TArray<struct FFortCrewSlotInformation> CrewSlots; // 0x3c0 (0x10)
	struct FGameplayTagQuery CommanderSlotQuery; // 0x3d0 (0x48)
	struct FGameplayTagQuery SupportHeroSlotQuery; // 0x418 (0x48)
	int GadgetSlotsAllowed; // 0x460 (0x4)
	struct FName SlotUnlockSquadName; // 0x464 (0x4)
	struct TWeakObjectPtr<class UFortHomebaseNodeItemDefinition> TeamPerkUnlockNode; // 0x468 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItemDefinition.GetSlots (Underlying native function: GetSlots 0x8efcebc)
	struct TArray<struct FFortCrewSlotInformation> GetSlots(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItemDefinition.GetSlotIndexByName (Underlying native function: GetSlotIndexByName 0x8efce24)
	int GetSlotIndexByName(struct FName& SlotName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItemDefinition.GetCommanderSlot (Underlying native function: GetCommanderSlot 0x8efb8b4)
	struct FFortCrewSlotInformation GetCommanderSlot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

