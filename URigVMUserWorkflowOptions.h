// Class /Script/RigVM.RigVMUserWorkflowOptions
// Size: 0x98
class URigVMUserWorkflowOptions : public UObject
{
	class UObject* Subject; // 0x28 (0x8)
	struct FRigVMUserWorkflow Workflow; // 0x30 (0x58)
	unsigned char padding_88[0x10]; // 0x88 (0x10)

	/* Functions */

	// Function /Script/RigVM.RigVMUserWorkflowOptions.RequiresDialog (Underlying native function: RequiresDialog 0xa222ed8)
	bool RequiresDialog(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RigVM.RigVMUserWorkflowOptions.ReportWarning (Underlying native function: ReportWarning 0xa222d80)
	void ReportWarning(struct FString& InMessage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/RigVM.RigVMUserWorkflowOptions.ReportInfo (Underlying native function: ReportInfo 0xa222c28)
	void ReportInfo(struct FString& InMessage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/RigVM.RigVMUserWorkflowOptions.ReportError (Underlying native function: ReportError 0xa222ad0)
	void ReportError(struct FString& InMessage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/RigVM.RigVMUserWorkflowOptions.IsValid (Underlying native function: IsValid 0xa222ab4)
	bool IsValid(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

