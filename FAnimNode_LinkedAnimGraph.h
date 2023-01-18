// ScriptStruct /Script/Engine.AnimNode_LinkedAnimGraph
// Size: 0xb8
struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty
{
	struct TArray<struct FPoseLink> InputPoses; // 0x58 (0x10)
	struct TArray<struct FName> InputPoseNames; // 0x68 (0x10)
	class UClass* InstanceClass; // 0x78 (0x8)
	unsigned char unreflected_80[0x18]; // 0x80 (0x18) 
	class UBlendProfile* PendingBlendOutProfile; // 0x98 (0x8)
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	class UBlendProfile* PendingBlendInProfile; // 0xa8 (0x8)
	unsigned char bReceiveNotifiesFromLinkedInstances; // 0xb0 (0x1)
	unsigned char bPropagateNotifiesToLinkedInstances; // 0xb0 (0x1)
	unsigned char padding_b1[0x7]; // 0xb1 (0x7)
};

