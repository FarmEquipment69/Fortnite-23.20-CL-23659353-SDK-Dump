// Class /Script/FortniteUI.FortBangWrapperOld
// Size: 0x1a8
class UFortBangWrapperOld : public UContentWidget
{
	unsigned char unreflected_160[0x8]; // 0x160 (0x8) 
	enum EFortBangSize Size; // 0x168 (0x1)
	unsigned char unreflected_169[0x7]; // 0x169 (0x7) 
	struct FVector2D Offset; // 0x170 (0x10)
	enum EFortBangType BangType; // 0x180 (0x1)
	unsigned char unreflected_181[0x3]; // 0x181 (0x3) 
	struct FName TutorialNameID; // 0x184 (0x4)
	enum EFortTutorialGlowType TutorialGlowType; // 0x188 (0x1)
	unsigned char padding_189[0x1f]; // 0x189 (0x1f)

	/* Functions */

	// Function /Script/FortniteUI.FortBangWrapperOld.SetBangVisibility (Underlying native function: SetBangVisibility 0xa6b4ac8)
	void SetBangVisibility(bool& InVisible); // (Final | Native | Public | BlueprintCallable)
};

