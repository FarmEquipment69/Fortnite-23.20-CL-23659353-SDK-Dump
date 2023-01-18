// Class /Script/NavigationSystem.NavCollision
// Size: 0xd0
class UNavCollision : public UNavCollisionBase
{
	unsigned char unreflected_70[0x10]; // 0x70 (0x10) 
	struct TArray<struct FNavCollisionCylinder> CylinderCollision; // 0x80 (0x10)
	struct TArray<struct FNavCollisionBox> BoxCollision; // 0x90 (0x10)
	class UClass* AreaClass; // 0xa0 (0x8)
	unsigned char bGatherConvexGeometry; // 0xa8 (0x1)
	unsigned char bCreateOnClient; // 0xa8 (0x1)
	unsigned char padding_a9[0x27]; // 0xa9 (0x27)
};

