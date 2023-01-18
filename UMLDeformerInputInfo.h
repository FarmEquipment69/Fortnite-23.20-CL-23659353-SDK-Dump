// Class /Script/MLDeformerFramework.MLDeformerInputInfo
// Size: 0x68
class UMLDeformerInputInfo : public UObject
{
	struct FSoftObjectPath SkeletalMesh; // 0x28 (0x18)
	struct TArray<struct FName> BoneNames; // 0x40 (0x10)
	struct TArray<struct FName> CurveNames; // 0x50 (0x10)
	int NumBaseMeshVertices; // 0x60 (0x4)
	int NumTargetMeshVertices; // 0x64 (0x4)
};

