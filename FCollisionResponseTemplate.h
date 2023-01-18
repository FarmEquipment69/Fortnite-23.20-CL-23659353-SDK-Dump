// ScriptStruct /Script/Engine.CollisionResponseTemplate
// Size: 0x40
struct FCollisionResponseTemplate
{
	struct FName Name; // 0x0 (0x4)
	struct TEnumAsByte<ECollisionEnabled> CollisionEnabled; // 0x4 (0x1)
	unsigned char unreflected_5[0x1]; // 0x5 (0x1) 
	bool bCanModify; // 0x6 (0x1)
	unsigned char unreflected_7[0x21]; // 0x7 (0x21) 
	struct FName ObjectTypeName; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TArray<struct FResponseChannel*> CustomResponses; // 0x30 (0x10)
};

