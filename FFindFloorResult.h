// ScriptStruct /Script/Engine.FindFloorResult
// Size: 0xf0
struct FFindFloorResult
{
	unsigned char bBlockingHit; // 0x0 (0x1)
	unsigned char bWalkableFloor; // 0x0 (0x1)
	unsigned char bLineTrace; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float FloorDist; // 0x4 (0x4)
	float LineDist; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FHitResult HitResult; // 0x10 (0xe0)
};

