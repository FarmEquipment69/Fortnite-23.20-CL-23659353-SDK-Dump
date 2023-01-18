// Class /Script/Water.WaterBodyRiverComponent
// Size: 0x1550
class UWaterBodyRiverComponent : public UWaterBodyComponent
{
	struct TArray<class USplineMeshComponent*> SplineMeshComponents; // 0x1520 (0x10)
	class UMaterialInterface* LakeTransitionMaterial; // 0x1530 (0x8)
	class UMaterialInstanceDynamic* LakeTransitionMID; // 0x1538 (0x8)
	class UMaterialInterface* OceanTransitionMaterial; // 0x1540 (0x8)
	class UMaterialInstanceDynamic* OceanTransitionMID; // 0x1548 (0x8)
};

