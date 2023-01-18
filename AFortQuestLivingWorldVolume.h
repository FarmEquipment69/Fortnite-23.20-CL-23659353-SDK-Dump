// Class /Script/STW_LagerRuntime.FortQuestLivingWorldVolume
// Size: 0x608
class AFortQuestLivingWorldVolume : public AFortAthenaLivingWorldVolume
{
	struct FGameplayTagContainer NoPlayerNeedsQuestFilterTags; // 0x5b8 (0x20)
	struct FGameplayTagContainer PlayerNeedsQuestFilterTags; // 0x5d8 (0x20)
	class UFortQuestItemDefinition* RequiredQuest; // 0x5f8 (0x8)
	unsigned char padding_600[0x8]; // 0x600 (0x8)

	/* Functions */

	// Function /Script/STW_LagerRuntime.FortQuestLivingWorldVolume.HandlePIEQuestsUpdated (Underlying native function: HandlePIEQuestsUpdated 0x26daa0c)
	void HandlePIEQuestsUpdated(); // (Final | Native | Protected)
};

