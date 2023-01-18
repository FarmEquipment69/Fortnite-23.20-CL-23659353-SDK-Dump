// Class /Script/FortniteUI.TagTeamChangeMessage
// Size: 0x340
class UTagTeamChangeMessage : public ULTMWidgetBase
{
	struct FGameplayTag BlueTeamTag; // 0x328 (0x4)
	struct FGameplayTag RedTeamTag; // 0x32c (0x4)
	unsigned char padding_330[0x10]; // 0x330 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.TagTeamChangeMessage.SetTeam (Has no native function)
	void SetTeam(bool& bIsIt); // (Event | Protected | BlueprintEvent)
};

