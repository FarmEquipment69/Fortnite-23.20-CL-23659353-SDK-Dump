// Class /Script/FortniteGame.FortWeap_BuildingTool
// Size: 0x1188
class AFortWeap_BuildingTool : public AFortWeap_BuildingToolBase
{
	class UMaterialInterface* BlueprintPaperMaterial; // 0x1070 (0x8)
	class UTexture2D* BlueprintDiffuseTextures[0x6]; // 0x1078 (0x8) (ARRAY) 
	class UTexture2D* BlueprintEmissiveMaskTextures[0x6]; // 0x10a8 (0x8) (ARRAY) 
	class UCurveFloat* BlueprintPaperPulseCurve; // 0x10d8 (0x8)
	class UBuildingEditModeMetadata* DefaultMetadata; // 0x10e0 (0x8)
	class UMaterialInstanceDynamic* BlueprintPaperMID; // 0x10e8 (0x8)
	struct FTimeline BlueprintPaperPulseTimeline; // 0x10f0 (0x90)
	struct TEnumAsByte<EFortResourceType> LastResourceType; // 0x1180 (0x1)
	unsigned char padding_1181[0x7]; // 0x1181 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortWeap_BuildingTool.OnRep_DefaultMetadata (Underlying native function: OnRep_DefaultMetadata 0x9058e6c)
	void OnRepDefaultMetadata(class UBuildingEditModeMetadata*& OldMetadata); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortWeap_BuildingTool.OnBlueprintPaperPulseUpdate (Underlying native function: OnBlueprintPaperPulseUpdate 0x9058998)
	void OnBlueprintPaperPulseUpdate(float& InCurveVal); // (Final | Native | Private)
};

