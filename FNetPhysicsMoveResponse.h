// ScriptStruct /Script/VerseMovement.NetPhysicsMoveResponse
// Size: 0x50
struct FNetPhysicsMoveResponse
{
	struct FVector Vector; // 0x0 (0x18)
	float Magnitude; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	class UCurveFloat* MagnitudeCurve; // 0x20 (0x8)
	enum ENetPhysicsMoveResponseType Type; // 0x28 (0x1)
	enum ENetPhysicsMoveResponseFrame Frame; // 0x29 (0x1)
	enum ENetPhysicsMoveResponseEffect Effect; // 0x2a (0x1)
	enum ENetPhysicsMoveResponseModifier Modifier; // 0x2b (0x1)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FVector ClampVector; // 0x30 (0x18)
	enum ENetPhysicsMoveResponseFrame ClampFrame; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};

