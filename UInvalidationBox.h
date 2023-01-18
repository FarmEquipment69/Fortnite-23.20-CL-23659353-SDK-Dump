// Class /Script/UMG.InvalidationBox
// Size: 0x178
class UInvalidationBox : public UContentWidget
{
	bool bCanCache; // 0x160 (0x1)
	bool CacheRelativeTransforms; // 0x161 (0x1)
	unsigned char padding_162[0x16]; // 0x162 (0x16)

	/* Functions */

	// Function /Script/UMG.InvalidationBox.SetCanCache (Underlying native function: SetCanCache 0x9b0d344)
	void SetCanCache(bool& CanCache); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.InvalidationBox.InvalidateCache (Underlying native function: InvalidateCache 0x26daa0c)
	void InvalidateCache(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.InvalidationBox.GetCanCache (Underlying native function: GetCanCache 0x9b0a670)
	bool GetCanCache(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

