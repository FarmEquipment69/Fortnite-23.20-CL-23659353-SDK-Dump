// ScriptStruct /Script/Engine.InputAxisProperties
// Size: 0x10
struct FInputAxisProperties
{
	float DeadZone; // 0x0 (0x4)
	float Sensitivity; // 0x4 (0x4)
	float Exponent; // 0x8 (0x4)
	unsigned char bInvert; // 0xc (0x1)
	unsigned char padding_d[0x3]; // 0xd (0x3)
};

