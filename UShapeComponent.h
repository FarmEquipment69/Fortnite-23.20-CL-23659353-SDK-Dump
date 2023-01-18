// Class /Script/Engine.ShapeComponent
// Size: 0x560
class UShapeComponent : public UPrimitiveComponent
{
	class UBodySetup* ShapeBodySetup; // 0x540 (0x8)
	struct FColor ShapeColor; // 0x548 (0x4)
	unsigned char bDrawOnlyIfSelected; // 0x54c (0x1)
	unsigned char bShouldCollideWhenPlacing; // 0x54c (0x1)
	unsigned char bDynamicObstacle; // 0x54c (0x1)
	unsigned char unreflected_54d[0x3]; // 0x54d (0x3) 
	class UClass* AreaClassOverride; // 0x550 (0x8)
	unsigned char bUseSystemDefaultObstacleAreaClass; // 0x558 (0x1)
	unsigned char padding_559[0x7]; // 0x559 (0x7)
};

