// Class /Script/Engine.MaterialInstanceConstant
// Size: 0x1f8
class UMaterialInstanceConstant : public UMaterialInstance
{
	class UPhysicalMaterialMask* PhysMaterialMask; // 0x1f0 (0x8)

	/* Functions */

	// Function /Script/Engine.MaterialInstanceConstant.K2_GetVectorParameterValue (Underlying native function: K2_GetVectorParameterValue 0x9e537b4)
	struct FLinearColor K2GetVectorParameterValue(struct FName& ParameterName); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceConstant.K2_GetTextureParameterValue (Underlying native function: K2_GetTextureParameterValue 0x9e5363c)
	class UTexture* K2GetTextureParameterValue(struct FName& ParameterName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.MaterialInstanceConstant.K2_GetScalarParameterValue (Underlying native function: K2_GetScalarParameterValue 0x9e53508)
	float K2GetScalarParameterValue(struct FName& ParameterName); // (Final | Native | Public | BlueprintCallable)
};

