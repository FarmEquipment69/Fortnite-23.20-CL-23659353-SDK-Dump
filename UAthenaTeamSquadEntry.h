// Class /Script/FortniteUI.AthenaTeamSquadEntry
// Size: 0x2a0
class UAthenaTeamSquadEntry : public UCommonUserWidget
{
	class UDynamicEntryBox* EntryBoxMembers; // 0x290 (0x8)
	unsigned char padding_298[0x8]; // 0x298 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaTeamSquadEntry.OnSquadIsEmptyChanged (Has no native function)
	void OnSquadIsEmptyChanged(bool& bSquadIsEmpty, bool& bMultipleSquadsPopulated); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTeamSquadEntry.OnSquadAssigned (Has no native function)
	void OnSquadAssigned(struct FAthenaTeamDisplayInfo& SquadStyle); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTeamSquadEntry.GetSquadID (Underlying native function: GetSquadID 0x75bf154)
	int GetSquadID(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

