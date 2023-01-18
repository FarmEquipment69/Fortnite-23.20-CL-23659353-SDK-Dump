// ScriptStruct /Script/DataflowNodes.SkeletalMeshBoneDataflowNode
// Size: 0xe8
struct FSkeletalMeshBoneDataflowNode : FDataflowNode
{
	struct FName BoneName; // 0xd0 (0x4)
	unsigned char unreflected_d4[0x4]; // 0xd4 (0x4) 
	class USkeletalMesh* SkeletalMesh; // 0xd8 (0x8)
	int BoneIndexOut; // 0xe0 (0x4)
	unsigned char padding_e4[0x4]; // 0xe4 (0x4)
};

