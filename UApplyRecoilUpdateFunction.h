// Class /Script/FortniteGame.ApplyRecoilUpdateFunction
// Size: 0xe0
class UApplyRecoilUpdateFunction : public UFirstPersonUpdateFunction
{
	enum EMotionTarget MotionTarget; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct TArray<struct FRecoilPart> RecoilParts; // 0x30 (0x10)
	unsigned char unreflected_40[0x30]; // 0x40 (0x30) 
	struct FTransform DeltaTransform; // 0x70 (0x60)
	bool bInitialized; // 0xd0 (0x1)
	bool bNewShot; // 0xd1 (0x1)
	unsigned char padding_d2[0xe]; // 0xd2 (0xe)

	/* Functions */

	// Function /Script/FortniteGame.ApplyRecoilUpdateFunction.NativeWeaponFired (Underlying native function: NativeWeaponFired 0x5cf0e70)
	void NativeWeaponFired(class AFortWeapon*& FiringWeapon); // (Final | Native | Public)
};

