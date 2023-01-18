// Class /Script/Engine.MaterialInstanceDynamic
// Size: 0x240
class UMaterialInstanceDynamic : public UMaterialInstance
{
	unsigned char unreflected_240[0x240]; 

	/* Functions */

	// Function /Script/Engine.MaterialInstanceDynamic.SetVectorParameterValueByInfo (Underlying native function: SetVectorParameterValueByInfo 0x9e542c8)
	void SetVectorParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo, struct FLinearColor& Value); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.SetVectorParameterValue (Underlying native function: SetVectorParameterValue 0xef56c0)
	void SetVectorParameterValue(struct FName& ParameterName, struct FLinearColor& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.SetTextureParameterValueByInfo (Underlying native function: SetTextureParameterValueByInfo 0x9e541e4)
	void SetTextureParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo, class UTexture*& Value); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.SetTextureParameterValue (Underlying native function: SetTextureParameterValue 0xef591c)
	void SetTextureParameterValue(struct FName& ParameterName, class UTexture*& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.SetScalarParameterValueByInfo (Underlying native function: SetScalarParameterValueByInfo 0x9e540fc)
	void SetScalarParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo, float& Value); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.SetScalarParameterValue (Underlying native function: SetScalarParameterValue 0xef51bc)
	void SetScalarParameterValue(struct FName& ParameterName, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.SetScalarParameterByIndex (Underlying native function: SetScalarParameterByIndex 0x9e54034)
	bool SetScalarParameterByIndex(int& ParameterIndex, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.SetRuntimeVirtualTextureParameterValueByInfo (Underlying native function: SetRuntimeVirtualTextureParameterValueByInfo 0x9e53f50)
	void SetRuntimeVirtualTextureParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo, class URuntimeVirtualTexture*& Value); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.SetRuntimeVirtualTextureParameterValue (Underlying native function: SetRuntimeVirtualTextureParameterValue 0x9e53e88)
	void SetRuntimeVirtualTextureParameterValue(struct FName& ParameterName, class URuntimeVirtualTexture*& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.SetDoubleVectorParameterValue (Underlying native function: SetDoubleVectorParameterValue 0x9e53da0)
	void SetDoubleVectorParameterValue(struct FName& ParameterName, struct FVector4& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.K2_InterpolateMaterialInstanceParams (Underlying native function: K2_InterpolateMaterialInstanceParams 0x9e5394c)
	void K2InterpolateMaterialInstanceParams(class UMaterialInstance*& SourceA, class UMaterialInstance*& SourceB, float& Alpha); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.K2_GetVectorParameterValueByInfo (Underlying native function: K2_GetVectorParameterValueByInfo 0x9e53870)
	struct FLinearColor K2GetVectorParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.K2_GetVectorParameterValue (Underlying native function: K2_GetVectorParameterValue 0x264f818)
	struct FLinearColor K2GetVectorParameterValue(struct FName& ParameterName); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.K2_GetTextureParameterValueByInfo (Underlying native function: K2_GetTextureParameterValueByInfo 0x9e536e0)
	class UTexture* K2GetTextureParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.K2_GetTextureParameterValue (Underlying native function: K2_GetTextureParameterValue 0x2beb0c4)
	class UTexture* K2GetTextureParameterValue(struct FName& ParameterName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.K2_GetScalarParameterValueByInfo (Underlying native function: K2_GetScalarParameterValueByInfo 0x9e53598)
	float K2GetScalarParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.K2_GetScalarParameterValue (Underlying native function: K2_GetScalarParameterValue 0x24da908)
	float K2GetScalarParameterValue(struct FName& ParameterName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.K2_CopyMaterialInstanceParameters (Underlying native function: K2_CopyMaterialInstanceParameters 0x9e532f0)
	void K2CopyMaterialInstanceParameters(class UMaterialInterface*& Source, bool& bQuickParametersOnly); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.InitializeScalarParameterAndGetIndex (Underlying native function: InitializeScalarParameterAndGetIndex 0x9e531cc)
	bool InitializeScalarParameterAndGetIndex(struct FName& ParameterName, float& Value, int& OutParameterIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.CopyParameterOverrides (Underlying native function: CopyParameterOverrides 0x9e52e68)
	void CopyParameterOverrides(class UMaterialInstance*& MaterialInstance); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceDynamic.CopyInterpParameters (Underlying native function: CopyInterpParameters 0x9e52ca4)
	void CopyInterpParameters(class UMaterialInstance*& Source); // (Final | Native | Public)
};

