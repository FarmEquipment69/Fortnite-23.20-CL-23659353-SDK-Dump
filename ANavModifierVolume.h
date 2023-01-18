// Class /Script/NavigationSystem.NavModifierVolume
// Size: 0x2d8
class ANavModifierVolume : public AVolume
{
	unsigned char unreflected_2c0[0x8]; // 0x2c0 (0x8) 
	class UClass* AreaClass; // 0x2c8 (0x8)
	bool bMaskFillCollisionUnderneathForNavmesh; // 0x2d0 (0x1)
	unsigned char padding_2d1[0x7]; // 0x2d1 (0x7)

	/* Functions */

	// Function /Script/NavigationSystem.NavModifierVolume.SetAreaClass (Underlying native function: SetAreaClass 0xa0b8c0c)
	void SetAreaClass(class UClass*& NewAreaClass); // (Final | Native | Public | BlueprintCallable)
};

