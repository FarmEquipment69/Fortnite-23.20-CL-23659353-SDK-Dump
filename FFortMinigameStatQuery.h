// ScriptStruct /Script/FortniteGame.FortMinigameStatQuery
// Size: 0x18
struct FFortMinigameStatQuery
{
	class UFortMinigameStatFilter* Stat; // 0x0 (0x8)
	enum EFortMinigameStatScope Scope; // 0x8 (0x1)
	unsigned char bAnyMatch; // 0x9 (0x1)
	enum EFortMinigameStatOperation Operation; // 0xa (0x1)
	unsigned char unreflected_b[0x1]; // 0xb (0x1) 
	int Value; // 0xc (0x4)
	unsigned char bStaticCount; // 0x10 (0x1)
	unsigned char padding_11[0x7]; // 0x11 (0x7)
};

