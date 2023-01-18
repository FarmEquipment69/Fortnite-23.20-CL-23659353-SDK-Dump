// ScriptStruct /Script/ControlRig.AnimNode_ControlRigBase
// Size: 0x270
struct FAnimNode_ControlRigBase : FAnimNode_CustomProperty
{
	struct FPoseLink Source; // 0x58 (0x10)
	bool bResetInputPoseToInitial; // 0x68 (0x1)
	bool bTransferInputPose; // 0x69 (0x1)
	bool bTransferInputCurves; // 0x6a (0x1)
	bool bTransferPoseInGlobalSpace; // 0x6b (0x1)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct TArray<struct FBoneReference> InputBonesToTransfer; // 0x70 (0x10)
	unsigned char unreflected_80[0x1c0]; // 0x80 (0x1c0) 
	struct TWeakObjectPtr<class UNodeMappingContainer> NodeMappingContainer; // 0x240 (0x8)
	struct FControlRigIOSettings InputSettings; // 0x248 (0x2)
	struct FControlRigIOSettings OutputSettings; // 0x24a (0x2)
	bool bExecute; // 0x24c (0x1)
	unsigned char unreflected_24d[0xb]; // 0x24d (0xb) 
	struct TArray<struct FControlRigAnimNodeEventName> EventQueue; // 0x258 (0x10)
	unsigned char padding_268[0x8]; // 0x268 (0x8)
};

