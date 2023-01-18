// Class /Script/Water.WaterBodyOceanComponent
// Size: 0x1570
class UWaterBodyOceanComponent : public UWaterBodyComponent
{
	struct TArray<class UOceanBoxCollisionComponent*> CollisionBoxes; // 0x1520 (0x10)
	struct TArray<class UOceanCollisionComponent*> CollisionHullSets; // 0x1530 (0x10)
	struct FVector2D VisualExtents; // 0x1540 (0x10)
	struct FVector CollisionExtents; // 0x1550 (0x18)
	float HeightOffset; // 0x1568 (0x4)
	unsigned char padding_156c[0x4]; // 0x156c (0x4)
};

