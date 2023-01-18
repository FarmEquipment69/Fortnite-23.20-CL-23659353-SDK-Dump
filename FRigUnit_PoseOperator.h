// ScriptStruct /Script/DataInterfaceGraph.RigUnit_PoseOperator
// Size: 0x60
struct FRigUnit_PoseOperator : FRigUnit
{
	struct TScriptInterface<class IDataInterface> Operator; // 0x8 (0x10)
	struct TArray<struct FRigVMExecuteContext> InputPoses; // 0x18 (0x10)
	struct FDataInterfaceParameters1 Parameters; // 0x28 (0xc)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FRigVMExecuteContext Result; // 0x38 (0x28)
};

