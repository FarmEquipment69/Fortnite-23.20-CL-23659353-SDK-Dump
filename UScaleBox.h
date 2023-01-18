// Class /Script/UMG.ScaleBox
// Size: 0x180
class UScaleBox : public UContentWidget
{
	struct TEnumAsByte<EStretch> Stretch; // 0x160 (0x1)
	struct TEnumAsByte<EStretchDirection> StretchDirection; // 0x161 (0x1)
	unsigned char unreflected_162[0x2]; // 0x162 (0x2) 
	float UserSpecifiedScale; // 0x164 (0x4)
	bool IgnoreInheritedScale; // 0x168 (0x1)
	unsigned char padding_169[0x17]; // 0x169 (0x17)

	/* Functions */

	// Function /Script/UMG.ScaleBox.SetUserSpecifiedScale (Underlying native function: SetUserSpecifiedScale 0x16621e8)
	void SetUserSpecifiedScale(float& InUserSpecifiedScale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScaleBox.SetStretchDirection (Underlying native function: SetStretchDirection 0x9b11800)
	void SetStretchDirection(struct TEnumAsByte<EStretchDirection>& InStretchDirection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScaleBox.SetStretch (Underlying native function: SetStretch 0x28260a8)
	void SetStretch(struct TEnumAsByte<EStretch>& InStretch); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScaleBox.SetIgnoreInheritedScale (Underlying native function: SetIgnoreInheritedScale 0x9b0ec7c)
	void SetIgnoreInheritedScale(bool& bInIgnoreInheritedScale); // (Final | Native | Public | BlueprintCallable)
};

