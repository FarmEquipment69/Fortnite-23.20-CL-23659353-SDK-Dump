// Class /Script/FortniteGame.FortCampaignHeroLoadoutItem
// Size: 0x198
class UFortCampaignHeroLoadoutItem : public UFortProfileItem
{
	struct FString loadoutname; // 0xc0 (0x10)
	int loadoutindex; // 0xd0 (0x4)
	unsigned char unreflected_d4[0x4]; // 0xd4 (0x4) 
	struct TMap<struct FString, struct FString> crewmembers; // 0xd8 (0x50)
	struct TArray<struct FFilledGadgetSlot> Gadgets; // 0x128 (0x10)
	struct FString teamperk; // 0x138 (0x10)
	struct TMap<struct FName, struct FString> CrewMembers; // 0x148 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItem.IsTeamPerkProgressive (Underlying native function: IsTeamPerkProgressive 0x8ed280c)
	bool IsTeamPerkProgressive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItem.IsTeamPerkActive (Underlying native function: IsTeamPerkActive 0x8ed27e8)
	bool IsTeamPerkActive(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItem.GetTeamPerkMaxActivationLevel (Underlying native function: GetTeamPerkMaxActivationLevel 0x8ed1b80)
	int GetTeamPerkMaxActivationLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItem.GetTeamPerkItemDefinition (Underlying native function: GetTeamPerkItemDefinition 0x8ed1b5c)
	class UFortTeamPerkItemDefinition* GetTeamPerkItemDefinition(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItem.GetTeamPerkActivationLevelAndSatisfyingSlotIndices (Underlying native function: GetTeamPerkActivationLevelAndSatisfyingSlotIndices 0x8ed1ab0)
	int GetTeamPerkActivationLevelAndSatisfyingSlotIndices(struct TArray<int>& OutSatisfyingSlotIndices); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItem.GetTeamPerkActivationLevel (Underlying native function: GetTeamPerkActivationLevel 0x8ed1a8c)
	int GetTeamPerkActivationLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItem.GetTeamPerk (Underlying native function: GetTeamPerk 0x8ed1a40)
	class UFortTeamPerkItem* GetTeamPerk(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItem.GetSupportHeroesAndSupportSlotIndices (Underlying native function: GetSupportHeroesAndSupportSlotIndices 0x8ed1760)
	void GetSupportHeroesAndSupportSlotIndices(struct TArray<class UFortHero*>& OutHeroes, struct TArray<int>& OutSupportSlotIndices); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItem.GetSupportHeroes (Underlying native function: GetSupportHeroes 0x8ed16c4)
	void GetSupportHeroes(struct TArray<class UFortHero*>& OutHeroes); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItem.GetSlotNameByHero (Underlying native function: GetSlotNameByHero 0x8ed0f9c)
	struct FName GetSlotNameByHero(class UFortHero*& Hero); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItem.GetLoadoutOrdinal (Underlying native function: GetLoadoutOrdinal 0x8ed029c)
	int GetLoadoutOrdinal(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItem.GetHeroesBySlotTag (Underlying native function: GetHeroesBySlotTag 0x8ecf9e4)
	void GetHeroesBySlotTag(struct FGameplayTagQuery& TagQuery, struct TArray<class UFortHero*>& OutHeroes); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItem.GetHeroes (Underlying native function: GetHeroes 0x8ecf948)
	void GetHeroes(struct TArray<class UFortHero*>& OutHeroes); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItem.GetHeroBySlotName (Underlying native function: GetHeroBySlotName 0x8ecf850)
	class UFortHero* GetHeroBySlotName(struct FName& SlotName); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItem.GetGadgetDefinitionBySlotIndex (Underlying native function: GetGadgetDefinitionBySlotIndex 0x8ecf768)
	class UFortGadgetItemDefinition* GetGadgetDefinitionBySlotIndex(int& SlotIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCampaignHeroLoadoutItem.GetCommanderHero (Underlying native function: GetCommanderHero 0x8ecf3dc)
	class UFortHero* GetCommanderHero(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

