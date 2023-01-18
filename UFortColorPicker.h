// Class /Script/FortniteUI.FortColorPicker
// Size: 0x4c0
class UFortColorPicker : public UCommonActivatableWidget
{
	class UUniformGridPanel* GridPanelSwatches; // 0x3a8 (0x8)
	class UClass* SwatchTileClass; // 0x3b0 (0x8)
	class UCommonButtonGroupLegacy* ButtonGroupSwatches; // 0x3b8 (0x8)
	class UCommonButtonLegacy* ButtonCustomColor; // 0x3c0 (0x8)
	class UFortColorPickerSwatchTile* SwatchCustomColor; // 0x3c8 (0x8)
	class UFortColorPickerComponent* ColorComponentComponent1; // 0x3d0 (0x8)
	class UFortColorPickerComponent* ColorComponentComponent2; // 0x3d8 (0x8)
	class UFortColorPickerComponent* ColorComponentComponent3; // 0x3e0 (0x8)
	class UCommonButtonLegacy* ButtonSaveColor; // 0x3e8 (0x8)
	class UFortColorPickerSwatchTile* SwatchCustomColorPreview; // 0x3f0 (0x8)
	struct TArray<struct FLinearColor> Swatches; // 0x3f8 (0x10)
	bool bNullOptionAvailable; // 0x408 (0x1)
	bool bAutoSelectColorOnInitialize; // 0x409 (0x1)
	unsigned char unreflected_40a[0x2]; // 0x40a (0x2) 
	struct FLinearColor StartingCustomColor[0x2]; // 0x40c (0x10) (ARRAY) 
	int SwatchRowCount; // 0x42c (0x4)
	struct FLinearColor NullOptionColor; // 0x430 (0x10)
	enum EColorPickerType ColorPickerType; // 0x440 (0x1)
	bool bInitializeCustomColorFromSelectedSwatch; // 0x441 (0x1)
	enum EColorPickerColorRepresentation CustomColorRepresentation; // 0x442 (0x1)
	unsigned char unreflected_443[0x5]; // 0x443 (0x5) 
	class UMaterialInterface* HueMaterial; // 0x448 (0x8)
	struct FName HueMaterialParam; // 0x450 (0x4)
	unsigned char unreflected_454[0x4]; // 0x454 (0x4) 
	class UMaterialInterface* SaturationMaterial; // 0x458 (0x8)
	struct FName SaturationMaterialParam; // 0x460 (0x4)
	unsigned char unreflected_464[0x4]; // 0x464 (0x4) 
	class UMaterialInterface* ValueMaterial; // 0x468 (0x8)
	struct FName ValueMaterialParam; // 0x470 (0x4)
	struct FLinearColor CurrentColor; // 0x474 (0x10)
	unsigned char padding_484[0x3c]; // 0x484 (0x3c)

	/* Functions */

	// Function /Script/FortniteUI.FortColorPicker.OnSetupColorPicker (Has no native function)
	void OnSetupColorPicker(enum EColorPickerType& InColorPickerType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortColorPicker.HandleSwatchColorSelected (Underlying native function: HandleSwatchColorSelected 0xa73d338)
	void HandleSwatchColorSelected(class UCommonButtonLegacy*& AssociatedButton, int& ButtonIndex); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortColorPicker.BP_OnSwapColorPickerType (Has no native function)
	void BPOnSwapColorPickerType(bool& bToSwatch); // (Event | Protected | BlueprintEvent)
};

