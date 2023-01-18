// ScriptStruct /Script/Engine.InputActionKeyMapping
// Size: 0x20
struct FInputActionKeyMapping
{
	struct FName ActionName; // 0x0 (0x4)
	unsigned char bShift; // 0x4 (0x1)
	unsigned char bCtrl; // 0x4 (0x1)
	unsigned char bAlt; // 0x4 (0x1)
	unsigned char bCmd; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct FKey Key; // 0x8 (0x18)
};

