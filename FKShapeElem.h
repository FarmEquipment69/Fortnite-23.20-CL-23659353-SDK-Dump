// ScriptStruct /Script/Engine.KShapeElem
// Size: 0x28
struct FKShapeElem
{
	float RestOffset; // 0x8 (0x4)
	struct FName Name; // 0xc (0x4)
	unsigned char unreflected_10[0x4]; // 0x10 (0x4) 
	unsigned char bContributeToMass; // 0x14 (0x1)
	struct TEnumAsByte<ECollisionEnabled> CollisionEnabled; // 0x15 (0x1)
	unsigned char padding_16[0x12]; // 0x16 (0x12)
};

