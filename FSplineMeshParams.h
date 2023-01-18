// ScriptStruct /Script/Engine.SplineMeshParams
// Size: 0xb0
struct FSplineMeshParams
{
	struct FVector StartPos; // 0x0 (0x18)
	struct FVector StartTangent; // 0x18 (0x18)
	struct FVector2D StartScale; // 0x30 (0x10)
	float StartRoll; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FVector2D StartOffset; // 0x48 (0x10)
	struct FVector EndPos; // 0x58 (0x18)
	struct FVector2D EndScale; // 0x70 (0x10)
	struct FVector EndTangent; // 0x80 (0x18)
	float EndRoll; // 0x98 (0x4)
	unsigned char unreflected_9c[0x4]; // 0x9c (0x4) 
	struct FVector2D EndOffset; // 0xa0 (0x10)
};

