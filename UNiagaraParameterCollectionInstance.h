// Class /Script/Niagara.NiagaraParameterCollectionInstance
// Size: 0xf0
class UNiagaraParameterCollectionInstance : public UObject
{
	class UNiagaraParameterCollection* Collection; // 0x28 (0x8)
	struct TArray<struct FNiagaraVariable> OverridenParameters; // 0x30 (0x10)
	struct FNiagaraParameterStore ParameterStorage; // 0x40 (0x88)
	unsigned char padding_c8[0x28]; // 0xc8 (0x28)

	/* Functions */

	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVectorParameter (Underlying native function: SetVectorParameter 0x6cc3a1c)
	void SetVectorParameter(struct FString& InVariableName, struct FVector& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter (Underlying native function: SetVector4Parameter 0x6cc3854)
	void SetVector4Parameter(struct FString& InVariableName, struct FVector4& InValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter (Underlying native function: SetVector2DParameter 0x6cc36a0)
	void SetVector2DParameter(struct FString& InVariableName, struct FVector2D& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetQuatParameter (Underlying native function: SetQuatParameter 0x6cc34f0)
	void SetQuatParameter(struct FString& InVariableName, struct FQuat& InValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetIntParameter (Underlying native function: SetIntParameter 0x6cc32c0)
	void SetIntParameter(struct FString& InVariableName, int& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetFloatParameter (Underlying native function: SetFloatParameter 0x6cc310c)
	void SetFloatParameter(struct FString& InVariableName, float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetColorParameter (Underlying native function: SetColorParameter 0x6cc2f58)
	void SetColorParameter(struct FString& InVariableName, struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetBoolParameter (Underlying native function: SetBoolParameter 0x6cc2da8)
	void SetBoolParameter(struct FString& InVariableName, bool& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVectorParameter (Underlying native function: GetVectorParameter 0x6cc2ae0)
	struct FVector GetVectorParameter(struct FString& InVariableName); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter (Underlying native function: GetVector4Parameter 0x6cc2958)
	struct FVector4 GetVector4Parameter(struct FString& InVariableName); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter (Underlying native function: GetVector2DParameter 0x6cc27d8)
	struct FVector2D GetVector2DParameter(struct FString& InVariableName); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetQuatParameter (Underlying native function: GetQuatParameter 0x6cc263c)
	struct FQuat GetQuatParameter(struct FString& InVariableName); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetIntParameter (Underlying native function: GetIntParameter 0x6cc241c)
	int GetIntParameter(struct FString& InVariableName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetFloatParameter (Underlying native function: GetFloatParameter 0x6cc22a4)
	float GetFloatParameter(struct FString& InVariableName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetColorParameter (Underlying native function: GetColorParameter 0x6cc2124)
	struct FLinearColor GetColorParameter(struct FString& InVariableName); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetBoolParameter (Underlying native function: GetBoolParameter 0x6cc1fb0)
	bool GetBoolParameter(struct FString& InVariableName); // (Final | Native | Public | BlueprintCallable)
};

