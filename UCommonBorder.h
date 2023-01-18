// Class /Script/CommonUI.CommonBorder
// Size: 0x2f0
class UCommonBorder : public UBorder
{
	class UClass* style; // 0x2d0 (0x8)
	bool bReducePaddingBySafezone; // 0x2d8 (0x1)
	unsigned char unreflected_2d9[0x3]; // 0x2d9 (0x3) 
	struct FMargin MinimumPadding; // 0x2dc (0x10)
	unsigned char padding_2ec[0x4]; // 0x2ec (0x4)

	/* Functions */

	// Function /Script/CommonUI.CommonBorder.SetStyle (Underlying native function: SetStyle 0x6a4e830)
	void SetStyle(class UClass*& InStyle); // (Final | Native | Public | BlueprintCallable)
};

