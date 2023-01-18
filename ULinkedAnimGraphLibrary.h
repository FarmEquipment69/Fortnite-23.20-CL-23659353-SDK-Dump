// Class /Script/AnimGraphRuntime.LinkedAnimGraphLibrary
// Size: 0x28
class ULinkedAnimGraphLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance (Underlying native function: HasLinkedAnimInstance 0x99fd4ec)
	static bool HasLinkedAnimInstance(struct FLinkedAnimGraphReference& Node); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance (Underlying native function: GetLinkedAnimInstance 0x99fc9dc)
	static class UAnimInstance* GetLinkedAnimInstance(struct FLinkedAnimGraphReference& Node); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure (Underlying native function: ConvertToLinkedAnimGraphPure 0x99fb7d8)
	static void ConvertToLinkedAnimGraphPure(struct FAnimNodeReference& Node, struct FLinkedAnimGraphReference& LinkedAnimGraph, bool& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph (Underlying native function: ConvertToLinkedAnimGraph 0x99fb6c0)
	static struct FLinkedAnimGraphReference ConvertToLinkedAnimGraph(struct FAnimNodeReference& Node, enum EAnimNodeReferenceConversionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

