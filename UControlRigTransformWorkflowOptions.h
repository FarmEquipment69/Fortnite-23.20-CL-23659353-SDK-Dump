// Class /Script/ControlRig.ControlRigTransformWorkflowOptions
// Size: 0xb8
class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions
{
	struct TEnumAsByte<ERigTransformType> TransformType; // 0xb0 (0x1)
	unsigned char padding_b1[0x7]; // 0xb1 (0x7)

	/* Functions */

	// Function /Script/ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows (Underlying native function: ProvideWorkflows 0x7b366fc)
	struct TArray<struct FRigVMUserWorkflow> ProvideWorkflows(class UObject*& InSubject); // (Final | Native | Public)
};

