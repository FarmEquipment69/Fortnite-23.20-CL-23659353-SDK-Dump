// ScriptStruct /Script/DataInterfaceGraph.RigUnit_DataInterface_SequencePlayer
// Size: 0x50
struct FRigUnit_DataInterface_SequencePlayer : FRigUnit
{
	struct FAnimSequenceParameters Parameters; // 0x8 (0xc)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TScriptInterface<class IDataInterface> Sequence; // 0x18 (0x10)
	struct FRigVMExecuteContext Result; // 0x28 (0x28)
};

