// Class /Script/FortniteUI.RumbleLeaderWidget
// Size: 0x330
class URumbleLeaderWidget : public ULTMWidgetBase
{
	unsigned char unreflected_330[0x330]; 

	/* Functions */

	// Function /Script/FortniteUI.RumbleLeaderWidget.UpdateDisplay (Has no native function)
	void UpdateDisplay(struct FFortInGameLeaderboardPlacementData& LeaderEntry, bool& bIsTiedForLead); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.RumbleLeaderWidget.OnLeaderboardUpdate (Underlying native function: OnLeaderboardUpdate 0xa5a3e10)
	void OnLeaderboardUpdate(struct TArray<struct FFortInGameLeaderboardPlacementData>& Data); // (Final | Native | Public | HasOutParms)
};

