// Class /Script/Engine.MaterialBillboardComponent
// Size: 0x550
class UMaterialBillboardComponent : public UPrimitiveComponent
{
	struct TArray<struct FMaterialSpriteElement> Elements; // 0x540 (0x10)

	/* Functions */

	// Function /Script/Engine.MaterialBillboardComponent.SetElements (Underlying native function: SetElements 0x9cf8ea8)
	void SetElements(struct TArray<struct FMaterialSpriteElement>& NewElements); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.MaterialBillboardComponent.AddElement (Underlying native function: AddElement 0x9cf626c)
	void AddElement(class UMaterialInterface*& Material, class UCurveFloat*& DistanceToOpacityCurve, bool& bSizeIsInScreenSpace, float& BaseSizeX, float& BaseSizeY, class UCurveFloat*& DistanceToSizeCurve); // (Final | Native | Public | BlueprintCallable)
};

