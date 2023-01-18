// Class /Script/OptimusCore.OptimusDeformerInstance
// Size: 0xe0
class UOptimusDeformerInstance : public UMeshDeformerInstance
{
	struct TWeakObjectPtr<class UMeshComponent> MeshComponent; // 0x28 (0x8)
	struct TWeakObjectPtr<class UOptimusDeformerInstanceSettings> InstanceSettings; // 0x30 (0x8)
	struct TArray<struct FOptimusDeformerInstanceExecInfo> ComputeGraphExecInfos; // 0x38 (0x10)
	class UOptimusVariableContainer* Variables; // 0x48 (0x8)
	unsigned char padding_50[0x90]; // 0x50 (0x90)

	/* Functions */

	// Function /Script/OptimusCore.OptimusDeformerInstance.SetVectorVariable (Underlying native function: SetVectorVariable 0x5694670)
	bool SetVectorVariable(struct FName& InVariableName, struct FVector& InValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusDeformerInstance.SetVector4Variable (Underlying native function: SetVector4Variable 0x5694550)
	bool SetVector4Variable(struct FName& InVariableName, struct FVector4& InValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusDeformerInstance.SetIntVariable (Underlying native function: SetIntVariable 0x5694450)
	bool SetIntVariable(struct FName& InVariableName, int& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusDeformerInstance.SetFloatVariable (Underlying native function: SetFloatVariable 0x5694240)
	bool SetFloatVariable(struct FName& InVariableName, double& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusDeformerInstance.SetBoolVariable (Underlying native function: SetBoolVariable 0x5694140)
	bool SetBoolVariable(struct FName& InVariableName, bool& InValue); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/OptimusCore.OptimusDeformerInstance.GetVariables (Underlying native function: GetVariables 0x5693650)
	struct TArray<class UOptimusVariableDescription*> GetVariables(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/OptimusCore.OptimusDeformerInstance.EnqueueTriggerGraph (Underlying native function: EnqueueTriggerGraph 0x56932c0)
	bool EnqueueTriggerGraph(struct FName& InTriggerGraphName); // (Final | Native | Public | BlueprintCallable)
};

