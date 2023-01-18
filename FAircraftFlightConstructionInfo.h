// ScriptStruct /Script/FortniteGame.AircraftFlightConstructionInfo
// Size: 0x78
struct FAircraftFlightConstructionInfo
{
	enum EAirCraftBehavior AirCraftBehavior; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int AircraftCount; // 0x4 (0x4)
	bool bUseCustomPathSelection; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	float CustomAircraftOffsetFromMidLine; // 0xc (0x4)
	float CustomMinMidlineAngle; // 0x10 (0x4)
	float CustomMaxMidlineAngle; // 0x14 (0x4)
	bool bUseSameDirectionForOpposingAircraft; // 0x18 (0x1)
	bool bDropOnlyWithinSafeZone; // 0x19 (0x1)
	unsigned char unreflected_1a[0x2]; // 0x1a (0x2) 
	int DropAreaSafeZonePhase; // 0x1c (0x4)
	float SafetyMarginPct; // 0x20 (0x4)
	float PathOffsetFromMapCenterMin; // 0x24 (0x4)
	float PathOffsetFromMapCenterMax; // 0x28 (0x4)
	float PathMidpointSelectionRadiusMin; // 0x2c (0x4)
	float PathMidpointSelectionRadiusMax; // 0x30 (0x4)
	float LastStepPushCenterLineMagnitude; // 0x34 (0x4)
	float LastStepPushCenterLineDirection; // 0x38 (0x4)
	bool bSystematicFlightPath; // 0x3c (0x1)
	unsigned char unreflected_3d[0x3]; // 0x3d (0x3) 
	float SystematicPathStartDegrees; // 0x40 (0x4)
	float SystematicPathOffsetFactor; // 0x44 (0x4)
	bool bForceDropCenterToFirstSafeZone; // 0x48 (0x1)
	bool bUseCustomDropZone; // 0x49 (0x1)
	unsigned char unreflected_4a[0x6]; // 0x4a (0x6) 
	struct FBox2D CustomDropZoneBox2D; // 0x50 (0x28)
};

