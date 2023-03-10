// ScriptStruct /Script/FortniteGame.PlayerMarkerConfig
// Size: 0x64
struct FPlayerMarkerConfig
{
	bool EnableHoldClickAction; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float HoldTime; // 0x4 (0x4)
	float DoubleClickTime; // 0x8 (0x4)
	bool bShowMarkerDetailsWidget; // 0xc (0x1)
	bool bCreateMarkerActors; // 0xd (0x1)
	bool bCreateMarkerWidgets; // 0xe (0x1)
	bool bClampEnemyMarkers; // 0xf (0x1)
	bool bClampItemMarkers; // 0x10 (0x1)
	bool bShowLocationMarkersOnCompass; // 0x11 (0x1)
	unsigned char unreflected_12[0x2]; // 0x12 (0x2) 
	int LocalPlaceableMarkersPerRate; // 0x14 (0x4)
	float LocalPlaceableMarkersRechargeRate; // 0x18 (0x4)
	int RemotePlayableMarkerSoundsPerRate; // 0x1c (0x4)
	int RemotePlayableMarkerSoundsRechargeRate; // 0x20 (0x4)
	int RemotePlayableMarkerSoundsByPlayerIDPerRate; // 0x24 (0x4)
	int RemotePlayableMarkerSoundsByPlayerIDRechargeRate; // 0x28 (0x4)
	int RemotePlayableMarkerSoundsByPlayerIDRechargeRateCap; // 0x2c (0x4)
	bool EnableDoubleClickAction; // 0x30 (0x1)
	bool EnableItemMarking; // 0x31 (0x1)
	bool EnableInteractionMarking; // 0x32 (0x1)
	unsigned char unreflected_33[0x1]; // 0x33 (0x1) 
	float ScreenPercentageDistanceToShowMarkerInfo; // 0x34 (0x4)
	float MarkerTickOptimizationCullThresholdCosTheta; // 0x38 (0x4)
	float EnemyMarkerTLL; // 0x3c (0x4)
	float ItemMarkerTTL; // 0x40 (0x4)
	float SpecialServerMarkerTTL; // 0x44 (0x4)
	float EliminationMarkerTTL; // 0x48 (0x4)
	float SelfEliminationMarkerTTL; // 0x4c (0x4)
	int MaxItemMarkers; // 0x50 (0x4)
	int MaxEnemyMarkers; // 0x54 (0x4)
	int MaxEliminationMarkers; // 0x58 (0x4)
	int MaxSpecialLocalMarkers; // 0x5c (0x4)
	int MaxSpecialServerMarkers; // 0x60 (0x4)
};

