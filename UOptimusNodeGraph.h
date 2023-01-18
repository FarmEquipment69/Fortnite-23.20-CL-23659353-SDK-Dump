// Class /Script/OptimusCore.OptimusNodeGraph
// Size: 0x80
class UOptimusNodeGraph : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	enum EOptimusNodeGraphType GraphType; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct TArray<class UOptimusNode*> Nodes; // 0x38 (0x10)
	struct TArray<class UOptimusNodeLink*> Links; // 0x48 (0x10)
	struct TArray<class UOptimusNodeGraph*> Subgraphs; // 0x58 (0x10)
	unsigned char padding_68[0x18]; // 0x68 (0x18)

	/* Functions */

	// Function /Script/OptimusCore.OptimusNodeGraph.RenameGraph (Underlying native function: RenameGraph 0x5694010)
	bool RenameGraph(class UOptimusNodeGraph*& InGraph, struct FString& InNewName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.RemoveNodes (Underlying native function: RemoveNodes 0x5693f30)
	bool RemoveNodes(struct TArray<class UOptimusNode*>& InNodes); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.RemoveNode (Underlying native function: RemoveNode 0x5693e30)
	bool RemoveNode(class UOptimusNode*& InNode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.RemoveLink (Underlying native function: RemoveLink 0x5693cd0)
	bool RemoveLink(class UOptimusNodePin*& InNodeOutputPin, class UOptimusNodePin*& InNodeInputPin); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.RemoveAllLinks (Underlying native function: RemoveAllLinks 0x5693ae0)
	bool RemoveAllLinks(class UOptimusNodePin*& InNodePin); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.MoveGraph (Underlying native function: MoveGraph 0x56939e0)
	bool MoveGraph(class UOptimusNodeGraph*& InGraph, int& InInsertBefore); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.IsSubGraphReference (Underlying native function: IsSubGraphReference 0x5693910)
	bool IsSubGraphReference(class UOptimusNode*& InNode); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/OptimusCore.OptimusNodeGraph.IsKernelFunction (Underlying native function: IsKernelFunction 0x5693860)
	bool IsKernelFunction(class UOptimusNode*& InNode); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/OptimusCore.OptimusNodeGraph.IsFunctionReference (Underlying native function: IsFunctionReference 0x5693790)
	bool IsFunctionReference(class UOptimusNode*& InNode); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/OptimusCore.OptimusNodeGraph.IsFunctionGraph (Underlying native function: IsFunctionGraph 0x5693770)
	bool IsFunctionGraph(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/OptimusCore.OptimusNodeGraph.IsExecutionGraph (Underlying native function: IsExecutionGraph 0x5693750)
	bool IsExecutionGraph(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/OptimusCore.OptimusNodeGraph.IsCustomKernel (Underlying native function: IsCustomKernel 0x5693680)
	bool IsCustomKernel(class UOptimusNode*& InNode); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/OptimusCore.OptimusNodeGraph.GetGraphType (Underlying native function: GetGraphType 0x5693510)
	enum EOptimusNodeGraphType GetGraphType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/OptimusCore.OptimusNodeGraph.GetGraphs (Underlying native function: GetGraphs 0x5693530)
	struct TArray<class UOptimusNodeGraph*> GetGraphs(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/OptimusCore.OptimusNodeGraph.GetGraphIndex (Underlying native function: GetGraphIndex 0x56934e0)
	int GetGraphIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/OptimusCore.OptimusNodeGraph.ExpandCollapsedNodes (Underlying native function: ExpandCollapsedNodes 0x5693370)
	struct TArray<class UOptimusNode*> ExpandCollapsedNodes(class UOptimusNode*& InFunctionNode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.DuplicateNodes (Underlying native function: DuplicateNodes 0x5693160)
	bool DuplicateNodes(struct TArray<class UOptimusNode*>& InNodes, struct FVector2D& InPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.DuplicateNode (Underlying native function: DuplicateNode 0x5692f50)
	class UOptimusNode* DuplicateNode(class UOptimusNode*& InNode, struct FVector2D& InPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.ConvertFunctionToCustomKernel (Underlying native function: ConvertFunctionToCustomKernel 0x5692be0)
	class UOptimusNode* ConvertFunctionToCustomKernel(class UOptimusNode*& InKernelFunction); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.ConvertCustomKernelToFunction (Underlying native function: ConvertCustomKernelToFunction 0x56927c0)
	class UOptimusNode* ConvertCustomKernelToFunction(class UOptimusNode*& InCustomKernel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.CollapseNodesToSubGraph (Underlying native function: CollapseNodesToSubGraph 0x56926e0)
	class UOptimusNode* CollapseNodesToSubGraph(struct TArray<class UOptimusNode*>& InNodes); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.CollapseNodesToFunction (Underlying native function: CollapseNodesToFunction 0x5692630)
	class UOptimusNode* CollapseNodesToFunction(struct TArray<class UOptimusNode*>& InNodes); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.AddVariableGetNode (Underlying native function: AddVariableGetNode 0x56924e0)
	class UOptimusNode* AddVariableGetNode(class UOptimusVariableDescription*& InVariableDesc, struct FVector2D& InPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.AddValueNode (Underlying native function: AddValueNode 0x5692370)
	class UOptimusNode* AddValueNode(struct FOptimusDataTypeRef& InDataTypeRef, struct FVector2D& InPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.AddResourceSetNode (Underlying native function: AddResourceSetNode 0x5692220)
	class UOptimusNode* AddResourceSetNode(class UOptimusResourceDescription*& InResourceDesc, struct FVector2D& InPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.AddResourceNode (Underlying native function: AddResourceNode 0x56920d0)
	class UOptimusNode* AddResourceNode(class UOptimusResourceDescription*& InResourceDesc, struct FVector2D& InPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.AddResourceGetNode (Underlying native function: AddResourceGetNode 0x5691f80)
	class UOptimusNode* AddResourceGetNode(class UOptimusResourceDescription*& InResourceDesc, struct FVector2D& InPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.AddNode (Underlying native function: AddNode 0x5691e50)
	class UOptimusNode* AddNode(class UClass*& InNodeClass, struct FVector2D& InPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.AddLink (Underlying native function: AddLink 0x5691ad0)
	bool AddLink(class UOptimusNodePin*& InNodeOutputPin, class UOptimusNodePin*& InNodeInputPin); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.AddDataInterfaceNode (Underlying native function: AddDataInterfaceNode 0x56919c0)
	class UOptimusNode* AddDataInterfaceNode(class UClass*& InDataInterfaceClass, struct FVector2D& InPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNodeGraph.AddComponentBindingGetNode (Underlying native function: AddComponentBindingGetNode 0x56918b0)
	class UOptimusNode* AddComponentBindingGetNode(class UOptimusComponentSourceBinding*& InComponentBinding, struct FVector2D& InPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

