// ScriptStruct /Script/FortniteGame.FortHarvesterSwing
// Size: 0x88
struct FFortHarvesterSwing
{
	enum ESwingType SwingType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class UAnimSequence* UpperBodySwing; // 0x8 (0x8)
	class UAnimSequence* UpperBodyReturn; // 0x10 (0x8)
	class UAnimSequence* CrouchUpperBodySwing; // 0x18 (0x8)
	class UAnimSequence* CrouchUpperBodyReturn; // 0x20 (0x8)
	class UAnimSequence* CrouchInPlaceAdditiveSwing; // 0x28 (0x8)
	class UAnimSequence* CrouchInPlaceAdditiveReturn; // 0x30 (0x8)
	unsigned char padding_38[0x50]; // 0x38 (0x50)
};

