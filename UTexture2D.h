// Class /Script/Engine.Texture2D
// Size: 0x160
class UTexture2D : public UTexture
{
	int FirstResourceMemMip; // 0x140 (0x4)
	unsigned char bTemporarilyDisableStreaming; // 0x144 (0x1)
	struct TEnumAsByte<TextureAddress> AddressX; // 0x145 (0x1)
	struct TEnumAsByte<TextureAddress> AddressY; // 0x146 (0x1)
	unsigned char unreflected_147[0x1]; // 0x147 (0x1) 
	struct FIntPoint* ImportedSize; // 0x148 (0x8)
	unsigned char padding_150[0x10]; // 0x150 (0x10)

	/* Functions */

	// Function /Script/Engine.Texture2D.Blueprint_GetSizeY (Underlying native function: Blueprint_GetSizeY 0x9f95484)
	int BlueprintGetSizeY(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Texture2D.Blueprint_GetSizeX (Underlying native function: Blueprint_GetSizeX 0x9f95460)
	int BlueprintGetSizeX(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

