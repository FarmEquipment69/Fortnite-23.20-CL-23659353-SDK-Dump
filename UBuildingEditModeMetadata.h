// Class /Script/FortniteGame.BuildingEditModeMetadata
// Size: 0x110
class UBuildingEditModeMetadata : public UDataAsset
{
	unsigned char bSupportNextPieceAssist; // 0x30 (0x1)
	unsigned char bHasNavigableOpening; // 0x30 (0x1)
	unsigned char bHasCustomAttackLocation; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	class UBuildingActorHotSpotConfig* DefaultHotspotConfig; // 0x38 (0x8)
	class UAIHotSpotConfig* ShootingHotSpotConfig; // 0x40 (0x8)
	unsigned char unreflected_48[0x8]; // 0x48 (0x8) 
	struct FConnectivityCube ConnectivityCubeData; // 0x50 (0xc0)
};

