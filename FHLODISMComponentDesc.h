// ScriptStruct /Script/Engine.HLODISMComponentDesc
// Size: 0x30
struct FHLODISMComponentDesc
{
	class UStaticMesh* StaticMesh; // 0x0 (0x8)
	class UMaterialInterface* Material; // 0x8 (0x8)
	struct TArray<struct FTransform> Instances; // 0x10 (0x10)
	struct TArray<struct FCustomPrimitiveData> InstancesCustomPrimitiveData; // 0x20 (0x10)
};

