// Class /Script/FortniteUI.AthenaRespawnBase
// Size: 0x2e8
class UAthenaRespawnBase : public UFortHUDElementWidget
{
	enum ERespawnUIState RespawnState; // 0x2d0 (0x1)
	unsigned char padding_2d1[0x17]; // 0x2d1 (0x17)

	/* Functions */

	// Function /Script/FortniteUI.AthenaRespawnBase.UpdateAllUI (Underlying native function: UpdateAllUI 0xa4b0e10)
	void UpdateAllUI(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaRespawnBase.OnUpdateRespawnState (Has no native function)
	void OnUpdateRespawnState(bool& bEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaRespawnBase.OnUpdateLives (Has no native function)
	void OnUpdateLives(int& Lives); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaRespawnBase.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0xa4b0154)
	void OnGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)
};

