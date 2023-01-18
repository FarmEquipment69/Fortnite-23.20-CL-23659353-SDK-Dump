// Class /Script/Engine.MaterialInterface
// Size: 0x98
class UMaterialInterface : public UObject
{
	unsigned char unreflected_28[0x10]; // 0x28 (0x10) 
	class USubsurfaceProfile* SubsurfaceProfile; // 0x38 (0x8)
	unsigned char unreflected_40[0x10]; // 0x40 (0x10) 
	struct FLightmassMaterialInterfaceSettings LightmassSettings; // 0x50 (0x10)
	struct TArray<struct FMaterialTextureInfo> TextureStreamingData; // 0x60 (0x10)
	struct TArray<class UAssetUserData*> AssetUserData; // 0x70 (0x10)
	unsigned char padding_80[0x18]; // 0x80 (0x18)

	/* Functions */

	// Function /Script/Engine.MaterialInterface.SetForceMipLevelsToBeResident (Underlying native function: SetForceMipLevelsToBeResident 0x9c0dd6c)
	void SetForceMipLevelsToBeResident(bool& OverrideForceMiplevelsToBeResident, bool& bForceMiplevelsToBeResidentValue, float& ForceDuration, int& CinematicTextureGroups, bool& bFastResponse); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.MaterialInterface.GetPhysicalMaterialMask (Underlying native function: GetPhysicalMaterialMask 0x9c0dd44)
	class UPhysicalMaterialMask* GetPhysicalMaterialMask(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.MaterialInterface.GetPhysicalMaterialFromMap (Underlying native function: GetPhysicalMaterialFromMap 0x9c0dcb0)
	class UPhysicalMaterial* GetPhysicalMaterialFromMap(int& Index); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.MaterialInterface.GetPhysicalMaterial (Underlying native function: GetPhysicalMaterial 0x9c0dc88)
	class UPhysicalMaterial* GetPhysicalMaterial(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.MaterialInterface.GetParameterInfo (Underlying native function: GetParameterInfo 0x9c0dab4)
	struct FMaterialParameterInfo GetParameterInfo(struct TEnumAsByte<EMaterialParameterAssociation>& Association, struct FName& ParameterName, class UMaterialFunctionInterface*& LayerFunction); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.MaterialInterface.GetBlendMode (Underlying native function: GetBlendMode 0x9c0da8c)
	struct TEnumAsByte<EBlendMode> GetBlendMode(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.MaterialInterface.GetBaseMaterial (Underlying native function: GetBaseMaterial 0x780270c)
	class UMaterial* GetBaseMaterial(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

