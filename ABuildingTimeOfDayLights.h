// Class /Script/FortniteGame.BuildingTimeOfDayLights
// Size: 0xe00
class ABuildingTimeOfDayLights : public ABuildingAutoNav
{
	struct TArray<struct FTimeOfDayControlledLightData> TimeOfDayControlledLightDataArray; // 0xdd8 (0x10)
	class UMaterial* FourLayerMaterial; // 0xde8 (0x8)
	struct TArray<struct FNativeBuildingPropFourLayerMaterial> FourLayerColorInfo; // 0xdf0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.UseNativeLightAnimation (Underlying native function: UseNativeLightAnimation 0x862f3f4)
	bool UseNativeLightAnimation(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.SetMidValuesForLights (Underlying native function: SetMidValuesForLights 0x862ed4c)
	void SetMidValuesForLights(struct FNativeDayPhaseFloats& EmissiveIntensityByTimeOfDay, struct TArray<float>& LightConeOpacities, float& DayPhaseTransitionLength, struct TArray<struct FLinearColor>& EmissiveMultipliers); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.SetLightIntensityByDayPhase (Underlying native function: SetLightIntensityByDayPhase 0x862ebf0)
	void SetLightIntensityByDayPhase(class ULightComponent*& LightComponent, struct FNativeDayPhaseFloats& LightIntensityByTimeOfDay); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.InitializeLightValuesAndStoreMaterials (Underlying native function: InitializeLightValuesAndStoreMaterials 0x862cc00)
	void InitializeLightValuesAndStoreMaterials(struct TArray<struct FLinearColor>& EmissiveMultipliers, struct TArray<float>& LightConeOpacities, struct TArray<struct FTimeOfDayControlledLightData>& LightData, struct FNativeDayPhaseFloats& LightIntensityByTimeOfDay, float& DayPhaseTransitionLength, struct FNativeDayPhaseFloats& EmissiveIntensityByTimeOfDay); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.HandleBaseSimpleFourLayerMaterials (Underlying native function: HandleBaseSimpleFourLayerMaterials 0x862c9a0)
	void HandleBaseSimpleFourLayerMaterials(float& Duration, float& Start, float& End); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.GetTimeOfDayBlueprintDefaultVariables (Underlying native function: GetTimeOfDayBlueprintDefaultVariables 0x259aae4)
	void GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables& OutVariables); // (0x00000002 | Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.FindScalarValueAcrossTimeOfDayPhaseFloats (Underlying native function: FindScalarValueAcrossTimeOfDayPhaseFloats 0x862bdfc)
	float FindScalarValueAcrossTimeOfDayPhaseFloats(struct FNativeDayPhaseFloats& DayPhaseFloats, float& Alpha); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.DoDayPhaseChangedLightAnimation (Underlying native function: DoDayPhaseChangedLightAnimation 0x862bb44)
	void DoDayPhaseChangedLightAnimation(bool& bIsAtCreation, struct TArray<struct FLinearColor>& EmissiveMultipliers, struct TArray<float>& LightConeOpacities, struct TArray<struct FTimeOfDayControlledLightData>& LightData, struct FNativeDayPhaseFloats& LightIntensityByTimeOfDay, float& DayPhaseTransitionLength, struct FNativeDayPhaseFloats& EmissiveIntensityByTimeOfDay); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.AnimateMidValuesForLightsFourLayer (Underlying native function: AnimateMidValuesForLightsFourLayer 0x862b520)
	void AnimateMidValuesForLightsFourLayer(struct FNativeDayPhaseFloats& EmissiveIntensityByTimeOfDay, float& DayPhaseTransitionLength); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.AnimateLightParameters (Underlying native function: AnimateLightParameters 0x862b3d4)
	void AnimateLightParameters(struct TArray<struct FTimeOfDayControlledLightData>& LightData, struct FNativeDayPhaseFloats& LightIntensityByTimeOfDay, float& DayPhaseTransitionLength); // (Final | Native | Protected | HasOutParms | BlueprintCallable)
};

