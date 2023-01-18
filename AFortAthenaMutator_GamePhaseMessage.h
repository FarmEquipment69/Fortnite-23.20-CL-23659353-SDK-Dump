// Class /Script/FortniteGame.FortAthenaMutator_GamePhaseMessage
// Size: 0x380
class AFortAthenaMutator_GamePhaseMessage : public AFortAthenaMutator
{
	struct TMap<enum EAthenaGamePhase, struct FFortAthenaMutator_GamePhaseMessageData> GamePhaseMessageData; // 0x330 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_GamePhaseMessage.OnLoadingScreenVisibilityChanged (Underlying native function: OnLoadingScreenVisibilityChanged 0x84cfed8)
	void OnLoadingScreenVisibilityChanged(bool& bVisible); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_GamePhaseMessage.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x84cf9f0)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Final | Native | Private)
};

