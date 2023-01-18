// Class /Script/OptimusCore.OptimusNode
// Size: 0x110
class UOptimusNode : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FText DisplayName; // 0x30 (0x18)
	struct FVector2D GraphPosition; // 0x48 (0x10)
	struct TArray<class UOptimusNodePin*> Pins; // 0x58 (0x10)
	struct TSet<struct FName> ExpandedPins; // 0x68 (0x50)
	enum EOptimusDiagnosticLevel DiagnosticLevel; // 0xb8 (0x1)
	unsigned char padding_b9[0x57]; // 0xb9 (0x57)

	/* Functions */

	// Function /Script/OptimusCore.OptimusNode.SetGraphPosition (Underlying native function: SetGraphPosition 0x5694340)
	bool SetGraphPosition(struct FVector2D& InPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/OptimusCore.OptimusNode.GetNodeName (Underlying native function: GetNodeName 0x56935c0)
	struct FName GetNodeName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/OptimusCore.OptimusNode.GetNodeCategory (Underlying native function: GetNodeCategory 0x5693580)
	struct FName GetNodeCategory(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/OptimusCore.OptimusNode.GetGraphPosition (Underlying native function: GetGraphPosition 0x544a0a0)
	struct FVector2D GetGraphPosition(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/OptimusCore.OptimusNode.GetDisplayName (Underlying native function: GetDisplayName 0x5693480)
	struct FText GetDisplayName(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

