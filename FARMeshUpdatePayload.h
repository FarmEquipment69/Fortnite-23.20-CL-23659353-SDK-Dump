// ScriptStruct /Script/AugmentedReality.ARMeshUpdatePayload
// Size: 0x90
struct FARMeshUpdatePayload
{
	struct FARSessionPayload SessionPayload; // 0x0 (0x18)
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct FTransform WorldTransform; // 0x20 (0x60)
	enum EARObjectClassification ObjectClassification; // 0x80 (0x1)
	unsigned char padding_81[0xf]; // 0x81 (0xf)
};

