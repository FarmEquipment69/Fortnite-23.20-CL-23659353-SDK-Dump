// ScriptStruct /Script/FortniteGame.ProfileGoCommand
// Size: 0x40
struct FProfileGoCommand
{
	struct FString Group; // 0x0 (0x10)
	struct FString Command; // 0x10 (0x10)
	float Wait; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct FString log; // 0x28 (0x10)
	bool CopyOutputToGameLog; // 0x38 (0x1)
	bool WaitForCallback; // 0x39 (0x1)
	unsigned char padding_3a[0x6]; // 0x3a (0x6)
};

