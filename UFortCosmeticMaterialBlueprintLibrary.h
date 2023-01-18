// Class /Script/FortniteGame.FortCosmeticMaterialBlueprintLibrary
// Size: 0x28
class UFortCosmeticMaterialBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortCosmeticMaterialBlueprintLibrary.SetScalarParameterValueOnOverlayMaterial (Underlying native function: SetScalarParameterValueOnOverlayMaterial 0x8763278)
	static void SetScalarParameterValueOnOverlayMaterial(class UMeshComponent*& MeshComponent, struct FName& ParameterName, float& ParameterValue); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCosmeticMaterialBlueprintLibrary.ResetScalarParameterOnOverlayMaterial (Underlying native function: ResetScalarParameterOnOverlayMaterial 0x87628ec)
	static void ResetScalarParameterOnOverlayMaterial(class UMeshComponent*& MeshComponent, struct FName& ParameterName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCosmeticMaterialBlueprintLibrary.ResetScalarParameterOnMaterials (Underlying native function: ResetScalarParameterOnMaterials 0x876279c)
	static void ResetScalarParameterOnMaterials(class UMeshComponent*& MeshComponent, struct FName& ParameterName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCosmeticMaterialBlueprintLibrary.GetOrCreateDynamicOverlayMaterial (Underlying native function: GetOrCreateDynamicOverlayMaterial 0x8760ac0)
	static class UMaterialInstanceDynamic* GetOrCreateDynamicOverlayMaterial(class UMeshComponent*& MeshComponent, struct FName& MaterialName); // (Final | Native | Static | Public | BlueprintCallable)
};

