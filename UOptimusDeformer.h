// Class /Script/OptimusCore.OptimusDeformer
// Size: 0x120
class UOptimusDeformer : public UMeshDeformer
{
	unsigned char unreflected_28[0x20]; // 0x28 (0x20) 
	class USkeletalMesh* Mesh; // 0x48 (0x8)
	struct TArray<struct FOptimusComputeGraphInfo> ComputeGraphs; // 0x50 (0x10)
	class UOptimusActionStack* ActionStack; // 0x60 (0x8)
	struct TArray<class UOptimusNodeGraph*> Graphs; // 0x68 (0x10)
	class UOptimusComponentSourceBindingContainer* Bindings; // 0x78 (0x8)
	class UOptimusVariableContainer* Variables; // 0x80 (0x8)
	class UOptimusResourceContainer* Resources; // 0x88 (0x8)
	unsigned char padding_90[0x90]; // 0x90 (0x90)

	/* Functions */

	// Function /Script/OptimusCore.OptimusDeformer.GetVariables (Underlying native function: GetVariables 0x5693620)
	struct TArray<class UOptimusVariableDescription*> GetVariables(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/OptimusCore.OptimusDeformer.GetResources (Underlying native function: GetResources 0x56935e0)
	struct TArray<class UOptimusResourceDescription*> GetResources(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/OptimusCore.OptimusDeformer.GetComponentBindings (Underlying native function: GetComponentBindings 0x5693440)
	struct TArray<class UOptimusComponentSourceBinding*> GetComponentBindings(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

