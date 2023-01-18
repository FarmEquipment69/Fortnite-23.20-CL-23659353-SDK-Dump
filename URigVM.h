// Class /Script/RigVM.RigVM
// Size: 0x2a0
class URigVM : public UObject
{
	class URigVMMemoryStorage* WorkMemoryStorageObject; // 0x28 (0x8)
	class URigVMMemoryStorage* LiteralMemoryStorageObject; // 0x30 (0x8)
	class URigVMMemoryStorage* DebugMemoryStorageObject; // 0x38 (0x8)
	unsigned char unreflected_40[0x20]; // 0x40 (0x20) 
	struct FRigVMByteCode ByteCodeStorage; // 0x60 (0x30)
	unsigned char unreflected_90[0x8]; // 0x90 (0x8) 
	struct FRigVMInstructionArray Instructions; // 0x98 (0x10)
	struct FRigVMExtendedExecuteContext Context; // 0xa8 (0x70)
	uint32_t NumExecutions; // 0x118 (0x4)
	unsigned char unreflected_11c[0x4]; // 0x11c (0x4) 
	struct TArray<struct FName> FunctionNamesStorage; // 0x120 (0x10)
	unsigned char unreflected_130[0x38]; // 0x130 (0x38) 
	struct TArray<struct FRigVMParameter> Parameters; // 0x168 (0x10)
	struct TMap<struct FName, int> ParametersNameMap; // 0x178 (0x50)
	unsigned char unreflected_1c8[0xb8]; // 0x1c8 (0xb8) 
	class URigVM* DeferredVMToCopy; // 0x280 (0x8)
	unsigned char padding_288[0x18]; // 0x288 (0x18)

	/* Functions */

	// Function /Script/RigVM.RigVM.SetParameterValueVector2D (Underlying native function: SetParameterValueVector2D 0xa223ab0)
	void SetParameterValueVector2D(struct FName& InParameterName, struct FVector2D& InValue, int& InArrayIndex); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/RigVM.RigVM.SetParameterValueVector (Underlying native function: SetParameterValueVector 0xa223c04)
	void SetParameterValueVector(struct FName& InParameterName, struct FVector& InValue, int& InArrayIndex); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/RigVM.RigVM.SetParameterValueTransform (Underlying native function: SetParameterValueTransform 0xa2238f0)
	void SetParameterValueTransform(struct FName& InParameterName, struct FTransform& InValue, int& InArrayIndex); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/RigVM.RigVM.SetParameterValueString (Underlying native function: SetParameterValueString 0xa2236dc)
	void SetParameterValueString(struct FName& InParameterName, struct FString& InValue, int& InArrayIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/RigVM.RigVM.SetParameterValueQuat (Underlying native function: SetParameterValueQuat 0xa223588)
	void SetParameterValueQuat(struct FName& InParameterName, struct FQuat& InValue, int& InArrayIndex); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/RigVM.RigVM.SetParameterValueName (Underlying native function: SetParameterValueName 0xa223434)
	void SetParameterValueName(struct FName& InParameterName, struct FName& InValue, int& InArrayIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/RigVM.RigVM.SetParameterValueInt (Underlying native function: SetParameterValueInt 0xa2232f4)
	void SetParameterValueInt(struct FName& InParameterName, int& InValue, int& InArrayIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/RigVM.RigVM.SetParameterValueFloat (Underlying native function: SetParameterValueFloat 0xa2231dc)
	void SetParameterValueFloat(struct FName& InParameterName, float& InValue, int& InArrayIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/RigVM.RigVM.SetParameterValueDouble (Underlying native function: SetParameterValueDouble 0xa2230c4)
	void SetParameterValueDouble(struct FName& InParameterName, double& InValue, int& InArrayIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/RigVM.RigVM.SetParameterValueBool (Underlying native function: SetParameterValueBool 0xa222f74)
	void SetParameterValueBool(struct FName& InParameterName, bool& InValue, int& InArrayIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/RigVM.RigVM.GetStatistics (Underlying native function: GetStatistics 0xa222a6c)
	struct FRigVMStatistics GetStatistics(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RigVM.RigVM.GetRigVMFunctionName (Underlying native function: GetRigVMFunctionName 0xa22299c)
	struct FString GetRigVMFunctionName(int& InFunctionIndex); // (Native | Public | Const)

	// Function /Script/RigVM.RigVM.GetParameterValueVector2D (Underlying native function: GetParameterValueVector2D 0xa222798)
	struct FVector2D GetParameterValueVector2D(struct FName& InParameterName, int& InArrayIndex); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/RigVM.RigVM.GetParameterValueVector (Underlying native function: GetParameterValueVector 0xa222890)
	struct FVector GetParameterValueVector(struct FName& InParameterName, int& InArrayIndex); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/RigVM.RigVM.GetParameterValueTransform (Underlying native function: GetParameterValueTransform 0xa222634)
	struct FTransform GetParameterValueTransform(struct FName& InParameterName, int& InArrayIndex); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/RigVM.RigVM.GetParameterValueString (Underlying native function: GetParameterValueString 0xa22244c)
	struct FString GetParameterValueString(struct FName& InParameterName, int& InArrayIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/RigVM.RigVM.GetParameterValueQuat (Underlying native function: GetParameterValueQuat 0xa222344)
	struct FQuat GetParameterValueQuat(struct FName& InParameterName, int& InArrayIndex); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/RigVM.RigVM.GetParameterValueName (Underlying native function: GetParameterValueName 0xa22222c)
	struct FName GetParameterValueName(struct FName& InParameterName, int& InArrayIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/RigVM.RigVM.GetParameterValueInt (Underlying native function: GetParameterValueInt 0xa222120)
	int GetParameterValueInt(struct FName& InParameterName, int& InArrayIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/RigVM.RigVM.GetParameterValueFloat (Underlying native function: GetParameterValueFloat 0xa222040)
	float GetParameterValueFloat(struct FName& InParameterName, int& InArrayIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/RigVM.RigVM.GetParameterValueDouble (Underlying native function: GetParameterValueDouble 0xa221f60)
	double GetParameterValueDouble(struct FName& InParameterName, int& InArrayIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/RigVM.RigVM.GetParameterValueBool (Underlying native function: GetParameterValueBool 0xa221e54)
	bool GetParameterValueBool(struct FName& InParameterName, int& InArrayIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/RigVM.RigVM.Execute (Underlying native function: Execute 0xa221db4)
	bool Execute(struct FName& InEntryName); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/RigVM.RigVM.AddRigVMFunction (Underlying native function: AddRigVMFunction 0xa221ce0)
	int AddRigVMFunction(class UScriptStruct*& InRigVMStruct, struct FName& InMethodName); // (Native | Public | HasOutParms)
};

