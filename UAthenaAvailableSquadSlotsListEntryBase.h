// Class /Script/FortniteUI.AthenaAvailableSquadSlotsListEntryBase
// Size: 0x2d8
class UAthenaAvailableSquadSlotsListEntryBase : public UFortHUDElementWidget
{
	enum EAvailableSquadSlotsListEntryState CurrentEntryState; // 0x2d0 (0x1)
	unsigned char padding_2d1[0x7]; // 0x2d1 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.AthenaAvailableSquadSlotsListEntryBase.BP_OnEntryStateUpdated (Has no native function)
	void BPOnEntryStateUpdated(enum EAvailableSquadSlotsListEntryState& NewEntryState); // (Event | Protected | BlueprintEvent)
};

