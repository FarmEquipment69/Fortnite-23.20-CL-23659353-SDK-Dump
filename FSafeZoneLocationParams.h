// ScriptStruct /Script/FortniteGame.SafeZoneLocationParams
// Size: 0x60
struct FSafeZoneLocationParams
{
	int SafeZoneIndex; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector AnchorLocation; // 0x8 (0x18)
	float Radius; // 0x20 (0x4)
	float MaxRadius; // 0x24 (0x4)
	float ForceDistanceMin; // 0x28 (0x4)
	float ForceDistanceMax; // 0x2c (0x4)
	float RejectRadius; // 0x30 (0x4)
	float RejectOuterDistance; // 0x34 (0x4)
	struct FVector MapCenter; // 0x38 (0x18)
	float MaxMapRadius; // 0x50 (0x4)
	bool bIsEndingLocation; // 0x54 (0x1)
	unsigned char unreflected_55[0x3]; // 0x55 (0x3) 
	float MegaStormGridCellThickness; // 0x58 (0x4)
	unsigned char padding_5c[0x4]; // 0x5c (0x4)
};

