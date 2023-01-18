// Class /Script/ControlRig.ControlRigWorkflowOptions
// Size: 0xb0
class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
{
	class URigHierarchy* Hierarchy; // 0x98 (0x8)
	struct TArray<struct FRigElementKey*> Selection; // 0xa0 (0x10)

	/* Functions */

	// Function /Script/ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected (Underlying native function: EnsureAtLeastOneRigElementSelected 0x7b34f10)
	bool EnsureAtLeastOneRigElementSelected(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

