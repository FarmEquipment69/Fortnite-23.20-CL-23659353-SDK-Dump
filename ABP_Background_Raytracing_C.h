// BlueprintGeneratedClass /Game/Environments/FrontEnd/BackPlates/Blueprint/BP_Background_Raytracing.BP_Background_Raytracing_C
// Size: 0x2c8
class ABP_Background_Raytracing_C : public AActor
{
	class UStaticMeshComponent* SMInvertedSphereBackPlateHalf; // 0x288 (0x8)
	class USceneComponent* DefaultSceneRoot; // 0x290 (0x8)
	bool FullSphere; // 0x298 (0x1)
	bool UseCubemap; // 0x299 (0x1)
	unsigned char unreflected_29a[0x6]; // 0x29a (0x6) 
	double Brightness; // 0x2a0 (0x8)
	class UTexture* 2dTexture; // 0x2a8 (0x8)
	class UTexture* Cubemap; // 0x2b0 (0x8)
	struct FLinearColor FadeColor; // 0x2b8 (0x10)

	/* Functions */

	// Function /Game/Environments/FrontEnd/BackPlates/Blueprint/BP_Background_Raytracing.BP_Background_Raytracing_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(bool& TempboolVariable, class UMaterialInterface*& TempobjectVariable, class UMaterialInterface*& TempobjectVariable1, class UMaterialInterface*& K2NodeSelectDefault, bool& CallFuncSetStaticMeshReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, float& CallFuncSetScalarParameterValueValueImplicitCast); // (Event | Public | BlueprintCallable | BlueprintEvent)
};

