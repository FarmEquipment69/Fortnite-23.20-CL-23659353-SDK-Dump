// ScriptStruct /Script/RigLogicModule.RigUnit_RigLogic_Data
// Size: 0x88
struct FRigUnit_RigLogic_Data
{
	struct TWeakObjectPtr<class USkeletalMeshComponent> SkelMeshComponent; // 0x0 (0x8)
	unsigned char unreflected_8[0x18]; // 0x8 (0x18) 
	struct TArray<int> InputCurveIndices; // 0x20 (0x10)
	struct TArray<int> HierarchyBoneIndices; // 0x30 (0x10)
	struct TArray<struct FRigUnit_RigLogic_IntArray> MorphTargetCurveIndices; // 0x40 (0x10)
	struct TArray<struct FRigUnit_RigLogic_IntArray> BlendShapeIndices; // 0x50 (0x10)
	struct TArray<struct FRigUnit_RigLogic_IntArray> CurveElementIndicesForAnimMaps; // 0x60 (0x10)
	struct TArray<struct FRigUnit_RigLogic_IntArray> RigLogicIndicesForAnimMaps; // 0x70 (0x10)
	uint32_t CurrentLOD; // 0x80 (0x4)
	unsigned char padding_84[0x4]; // 0x84 (0x4)
};

