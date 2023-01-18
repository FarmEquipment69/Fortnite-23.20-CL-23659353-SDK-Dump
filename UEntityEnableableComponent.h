// Class /Script/EntityCore.EntityEnableableComponent
// Size: 0x80
class UEntityEnableableComponent : public UEntityComponent
{
	unsigned char IsEnabled; // 0x60 (0x1)
	unsigned char LastIsEnabled; // 0x60 (0x1)
	unsigned char padding_61[0x1f]; // 0x61 (0x1f)

	/* Functions */

	// Function /Script/EntityCore.EntityEnableableComponent.OnRep_Enabled (Underlying native function: OnRep_Enabled 0x6a5fd70)
	void OnRepEnabled(); // (Final | Native | Private)
};

