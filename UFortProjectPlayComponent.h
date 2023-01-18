// Class /Script/FortniteGame.FortProjectPlayComponent
// Size: 0x1c8
class UFortProjectPlayComponent : public UFortPlayspaceComponent
{
	unsigned char unreflected_f8[0x20]; // 0xf8 (0x20) 
	bool bScaleVolumeBounds; // 0x118 (0x1)
	unsigned char unreflected_119[0x7]; // 0x119 (0x7) 
	struct FVector BoundsScale; // 0x120 (0x18)
	unsigned char padding_138[0x90]; // 0x138 (0x90)

	/* Functions */

	// Function /Script/FortniteGame.FortProjectPlayComponent.OnRep_BoundsScale (Underlying native function: OnRep_BoundsScale 0x8702240)
	void OnRepBoundsScale(); // (Final | Native | Protected)
};

