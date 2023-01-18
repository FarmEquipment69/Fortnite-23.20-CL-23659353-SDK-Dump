// Class /Script/FortniteUI.AthenaSpatialStyleChallengeDetails
// Size: 0x338
class UAthenaSpatialStyleChallengeDetails : public UCommonUserWidget
{
	class UWidgetAnimation* PageRefresh; // 0x290 (0x8)
	class UWidgetAnimation* StyleRefresh; // 0x298 (0x8)
	class UWidgetAnimation* Intro; // 0x2a0 (0x8)
	class UDynamicEntryBox* EntryBoxStyles; // 0x2a8 (0x8)
	class UCommonButtonGroupLegacy* ButtonGroupStyles; // 0x2b0 (0x8)
	class UVerticalBox* VBoxPrerequisities; // 0x2b8 (0x8)
	class UDynamicEntryBox* EntryBoxPrerequisites; // 0x2c0 (0x8)
	class UVerticalBox* VBoxMainMission; // 0x2c8 (0x8)
	class UAthenaSpatialStyleChallengeUnlockReason* QuestProgressionMainMission; // 0x2d0 (0x8)
	class UCommonButtonLegacy* ButtonPurchaseBattlepass; // 0x2d8 (0x8)
	class UFortGameStateComponent_EventLevel* EventGameStateComponent; // 0x2e0 (0x8)
	struct FAthenaSpatialStyleCharacterData CharacterData; // 0x2e8 (0x30)
	unsigned char padding_318[0x20]; // 0x318 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpatialStyleChallengeDetails.OnStyleUpdated (Has no native function)
	void OnStyleUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpatialStyleChallengeDetails.OnPrerequisitesAndMissionUpdated (Has no native function)
	void OnPrerequisitesAndMissionUpdated(bool& bLocked, struct FText& CharacterName, struct FText& StyleName); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpatialStyleChallengeDetails.OnCharacterUpdated (Has no native function)
	void OnCharacterUpdated(); // (Event | Protected | BlueprintEvent)
};

