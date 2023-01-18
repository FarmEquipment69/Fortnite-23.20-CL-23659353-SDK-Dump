// Class /Script/ImagePlate.ImagePlateComponent
// Size: 0x690
class UImagePlateComponent : public UPrimitiveComponent
{
	struct FImagePlateParameters Plate; // 0x540 (0x40)
	unsigned char padding_580[0x110]; // 0x580 (0x110)

	/* Functions */

	// Function /Script/ImagePlate.ImagePlateComponent.SetImagePlate (Underlying native function: SetImagePlate 0x7cad780)
	void SetImagePlate(struct FImagePlateParameters& Plate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ImagePlate.ImagePlateComponent.OnRenderTextureChanged (Underlying native function: OnRenderTextureChanged 0x7cad76c)
	void OnRenderTextureChanged(); // (Final | Native | Public)

	// Function /Script/ImagePlate.ImagePlateComponent.GetPlate (Underlying native function: GetPlate 0x7cad72c)
	struct FImagePlateParameters GetPlate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

