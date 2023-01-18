// ScriptStruct /Script/AnimationCore.AimConstraintDescription
// Size: 0x70
struct FAimConstraintDescription : FConstraintDescriptionEx
{
	struct FAxis LookAtAxis; // 0x10 (0x20)
	struct FAxis LookUpAxis; // 0x30 (0x20)
	bool bUseLookUp; // 0x50 (0x1)
	unsigned char unreflected_51[0x7]; // 0x51 (0x7) 
	struct FVector LookUpTarget; // 0x58 (0x18)
};

