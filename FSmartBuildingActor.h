// ScriptStruct /Script/FortniteGame.SmartBuildingActor
// Size: 0x38
struct FSmartBuildingActor
{
	struct TWeakObjectPtr<class UBuildingEditModeMetadata> BuildingMetaData; // 0x0 (0x28)
	int RotationIterations; // 0x28 (0x4)
	enum ESmartBuildPlayerLocationInCell SelectOnlyIfPlayerLocationInCell; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	float BuildDistanceOffset; // 0x30 (0x4)
	bool bTryToConnectToPieceUnderPlayerFeet; // 0x34 (0x1)
	unsigned char padding_35[0x3]; // 0x35 (0x3)
};

