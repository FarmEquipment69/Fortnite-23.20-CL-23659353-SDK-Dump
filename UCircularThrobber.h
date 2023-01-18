// Class /Script/UMG.CircularThrobber
// Size: 0x240
class UCircularThrobber : public UWidget
{
	int NumberOfPieces; // 0x148 (0x4)
	float Period; // 0x14c (0x4)
	float Radius; // 0x150 (0x4)
	unsigned char unreflected_154[0xc]; // 0x154 (0xc) 
	struct FSlateBrush Image; // 0x160 (0xc0)
	bool bEnableRadius; // 0x220 (0x1)
	unsigned char padding_221[0x1f]; // 0x221 (0x1f)

	/* Functions */

	// Function /Script/UMG.CircularThrobber.SetRadius (Underlying native function: SetRadius 0x9aef318)
	void SetRadius(float& InRadius); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.CircularThrobber.SetPeriod (Underlying native function: SetPeriod 0x9aef06c)
	void SetPeriod(float& InPeriod); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.CircularThrobber.SetNumberOfPieces (Underlying native function: SetNumberOfPieces 0x9aeedbc)
	void SetNumberOfPieces(int& InNumberOfPieces); // (Final | Native | Public | BlueprintCallable)
};

