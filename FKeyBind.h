// ScriptStruct /Script/Engine.KeyBind
// Size: 0x30
struct FKeyBind
{
	struct FKey Key; // 0x0 (0x18)
	struct FString Command; // 0x18 (0x10)
	unsigned char Control; // 0x28 (0x1)
	unsigned char Shift; // 0x28 (0x1)
	unsigned char Alt; // 0x28 (0x1)
	unsigned char Cmd; // 0x28 (0x1)
	unsigned char bIgnoreCtrl; // 0x28 (0x1)
	unsigned char bIgnoreShift; // 0x28 (0x1)
	unsigned char bIgnoreAlt; // 0x28 (0x1)
	unsigned char bIgnoreCmd; // 0x28 (0x1)
	unsigned char bDisabled; // 0x29 (0x1)
	unsigned char padding_2a[0x6]; // 0x2a (0x6)
};

