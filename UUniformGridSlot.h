// Class /Script/UMG.UniformGridSlot
// Size: 0x50
class UUniformGridSlot : public UPanelSlot
{
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x38 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x39 (0x1)
	unsigned char unreflected_3a[0x2]; // 0x3a (0x2) 
	int Row; // 0x3c (0x4)
	int Column; // 0x40 (0x4)
	unsigned char padding_44[0xc]; // 0x44 (0xc)

	/* Functions */

	// Function /Script/UMG.UniformGridSlot.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x2357304)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalAlignment>& InVerticalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UniformGridSlot.SetRow (Underlying native function: SetRow 0x22c00d8)
	void SetRow(int& InRow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UniformGridSlot.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x22bfbb4)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizontalAlignment>& InHorizontalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UniformGridSlot.SetColumn (Underlying native function: SetColumn 0x22c0170)
	void SetColumn(int& InColumn); // (Final | Native | Public | BlueprintCallable)
};

