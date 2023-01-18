// Class /Script/FortniteUI.EventCinematicPlaybackAction
// Size: 0x308
class AEventCinematicPlaybackAction : public AFortScriptedAction
{
	class UFortQuestItem* Quest; // 0x2e0 (0x8)
	struct FName ObjectiveName; // 0x2e8 (0x4)
	unsigned char unreflected_2ec[0x4]; // 0x2ec (0x4) 
	class AFortPlayerController* Player; // 0x2f0 (0x8)
	struct FDataTableRowHandle ObjectiveStat; // 0x2f8 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.EventCinematicPlaybackAction.HandleVideoEnded (Underlying native function: HandleVideoEnded 0xa88ebfc)
	void HandleVideoEnded(); // (Final | Native | Private)
};

