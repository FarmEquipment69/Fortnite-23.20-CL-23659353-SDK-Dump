// Class /Script/UMG.SafeZone
// Size: 0x178
class USafeZone : public UContentWidget
{
	bool PadLeft; // 0x160 (0x1)
	bool PadRight; // 0x161 (0x1)
	bool PadTop; // 0x162 (0x1)
	bool PadBottom; // 0x163 (0x1)
	unsigned char padding_164[0x14]; // 0x164 (0x14)

	/* Functions */

	// Function /Script/UMG.SafeZone.SetSidesToPad (Underlying native function: SetSidesToPad 0x9b11268)
	void SetSidesToPad(bool& InPadLeft, bool& InPadRight, bool& InPadTop, bool& InPadBottom); // (Final | Native | Public | BlueprintCallable)
};

