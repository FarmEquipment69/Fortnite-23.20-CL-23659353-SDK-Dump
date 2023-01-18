// Class /Script/FortniteGame.FortTheaterMapViewer
// Size: 0x400
class AFortTheaterMapViewer : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct TArray<struct FFortAvailableTheaterMissions> MissionAvailabilityList; // 0x290 (0x10)
	struct TArray<struct FFortAvailableMissionAlerts> MissionAlertAvailabilityList; // 0x2a0 (0x10)
	struct FBox HexMapSize; // 0x2b0 (0x38)
	float HexTileWidth; // 0x2e8 (0x4)
	float HexTileHeight; // 0x2ec (0x4)
	struct TArray<class AFortTheaterMapTile*> HexMap; // 0x2f0 (0x10)
	struct FString CurrentTheaterId; // 0x300 (0x10)
	struct TArray<bool> LeaderTileAccessStates; // 0x310 (0x10)
	class AFortTheaterMapTile* CurrentSelectedTile; // 0x320 (0x8)
	class AFortTheaterMapTile* CurrentFocusedTile; // 0x328 (0x8)
	struct TArray<struct FFortTheaterMapData> TheaterList; // 0x330 (0x10)
	int NumValidHexMapTiles; // 0x340 (0x4)
	unsigned char unreflected_344[0x4]; // 0x344 (0x4) 
	int CurrentTileIndex; // 0x348 (0x4)
	bool bDisplayTheaterComplete; // 0x34c (0x1)
	unsigned char padding_34d[0xb3]; // 0x34d (0xb3)

	/* Functions */

	// Function /Script/FortniteGame.FortTheaterMapViewer.HandleMarkedQuestsChanged (Underlying native function: HandleMarkedQuestsChanged 0x8f34e08)
	void HandleMarkedQuestsChanged(); // (Final | Native | Public)
};

