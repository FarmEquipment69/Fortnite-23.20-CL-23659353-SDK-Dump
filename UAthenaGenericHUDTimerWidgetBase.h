// Class /Script/FortniteUI.AthenaGenericHUDTimerWidgetBase
// Size: 0x2f0
class UAthenaGenericHUDTimerWidgetBase : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x10]; // 0x2d0 (0x10) 
	class UTextBlock* TimeText; // 0x2e0 (0x8)
	unsigned char padding_2e8[0x8]; // 0x2e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaGenericHUDTimerWidgetBase.HandleGamePhaseChanged (Underlying native function: HandleGamePhaseChanged 0xa48c334)
	void HandleGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)
};

