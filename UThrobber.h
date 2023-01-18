// Class /Script/UMG.Throbber
// Size: 0x220
class UThrobber : public UWidget
{
	int NumberOfPieces; // 0x148 (0x4)
	bool bAnimateHorizontally; // 0x14c (0x1)
	bool bAnimateVertically; // 0x14d (0x1)
	bool bAnimateOpacity; // 0x14e (0x1)
	unsigned char unreflected_14f[0x1]; // 0x14f (0x1) 
	struct FSlateBrush Image; // 0x150 (0xc0)
	unsigned char padding_210[0x10]; // 0x210 (0x10)

	/* Functions */

	// Function /Script/UMG.Throbber.SetNumberOfPieces (Underlying native function: SetNumberOfPieces 0x9b10220)
	void SetNumberOfPieces(int& InNumberOfPieces); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Throbber.SetAnimateVertically (Underlying native function: SetAnimateVertically 0x9b0cf00)
	void SetAnimateVertically(bool& bInAnimateVertically); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Throbber.SetAnimateOpacity (Underlying native function: SetAnimateOpacity 0x9b0ce80)
	void SetAnimateOpacity(bool& bInAnimateOpacity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Throbber.SetAnimateHorizontally (Underlying native function: SetAnimateHorizontally 0x9b0ce00)
	void SetAnimateHorizontally(bool& bInAnimateHorizontally); // (Final | Native | Public | BlueprintCallable)
};

