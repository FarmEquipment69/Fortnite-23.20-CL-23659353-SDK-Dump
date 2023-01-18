// Class /Script/Engine.MeshComponent
// Size: 0x580
class UMeshComponent : public UPrimitiveComponent
{
	struct TArray<class UMaterialInterface*> OverrideMaterials; // 0x540 (0x10)
	class UMaterialInterface* OverlayMaterial; // 0x550 (0x8)
	float OverlayMaterialMaxDrawDistance; // 0x558 (0x4)
	unsigned char unreflected_55c[0x14]; // 0x55c (0x14) 
	unsigned char bEnableMaterialParameterCaching; // 0x570 (0x1)
	unsigned char padding_571[0xf]; // 0x571 (0xf)

	/* Functions */

	// Function /Script/Engine.MeshComponent.SetVectorParameterValueOnMaterials (Underlying native function: SetVectorParameterValueOnMaterials 0x176c8d4)
	void SetVectorParameterValueOnMaterials(struct FName& ParameterName, struct FVector& ParameterValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.MeshComponent.SetScalarParameterValueOnMaterials (Underlying native function: SetScalarParameterValueOnMaterials 0x1f9b7cc)
	void SetScalarParameterValueOnMaterials(struct FName& ParameterName, float& ParameterValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.MeshComponent.SetOverlayMaterialMaxDrawDistance (Underlying native function: SetOverlayMaterialMaxDrawDistance 0x9cf9cc0)
	void SetOverlayMaterialMaxDrawDistance(float& InMaxDrawDistance); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.MeshComponent.SetOverlayMaterial (Underlying native function: SetOverlayMaterial 0x9cf9c40)
	void SetOverlayMaterial(class UMaterialInterface*& NewOverlayMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.MeshComponent.PrestreamTextures (Underlying native function: PrestreamTextures 0x9cf7f3c)
	void PrestreamTextures(float& Seconds, bool& bPrioritizeCharacterTextures, int& CinematicTextureGroups); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.MeshComponent.IsMaterialSlotNameValid (Underlying native function: IsMaterialSlotNameValid 0x9cf796c)
	bool IsMaterialSlotNameValid(struct FName& MaterialSlotName); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.MeshComponent.GetOverlayMaterial (Underlying native function: GetOverlayMaterial 0x76c2d24)
	class UMaterialInterface* GetOverlayMaterial(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.MeshComponent.GetMaterialSlotNames (Underlying native function: GetMaterialSlotNames 0x9cf73ac)
	struct TArray<struct FName> GetMaterialSlotNames(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.MeshComponent.GetMaterials (Underlying native function: GetMaterials 0x265f370)
	struct TArray<class UMaterialInterface*> GetMaterials(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.MeshComponent.GetMaterialIndex (Underlying native function: GetMaterialIndex 0x2470c04)
	int GetMaterialIndex(struct FName& MaterialSlotName); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

