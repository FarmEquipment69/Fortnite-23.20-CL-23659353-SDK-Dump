// Class /Script/FortniteGame.FortProjectEditComponent
// Size: 0x450
class UFortProjectEditComponent : public UFortProjectPlayComponent
{
	unsigned char unreflected_1c8[0x28]; // 0x1c8 (0x28) 
	int DeltasPeriodicSaveIntervalSeconds; // 0x1f0 (0x4)
	unsigned char unreflected_1f4[0x24c]; // 0x1f4 (0x24c) 
	class UDeltaFileSaveHandler* DeltasSaveHandler; // 0x440 (0x8)
	unsigned char padding_448[0x8]; // 0x448 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortProjectEditComponent.OnAnyPlayerLoggedIn (Underlying native function: OnAnyPlayerLoggedIn 0x8701028)
	void OnAnyPlayerLoggedIn(class APlayerController*& PlayerController); // (Final | Native | Private)
};

